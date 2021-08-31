#include "ProductResources.h"

#include <QWidget>
#include <QtDebug>

typedef struct _one_string {
    ProductOneFlag flag;
    QString text;
} one_string_t;

typedef struct _two_string {
    ProductTwoFlag flag;
    QString text;
} two_string_t;

static QString *gUnknownPart = nullptr;

static one_string_t gOneStrings[] = {
    { ProductOneFlagFrame, "车架" },
    { ProductOneFlagEngine, "发动机" },
    { ProductOneFlagHandle, "自行车把手" },
    { ProductOneFlagFront, "前轮" },
    { ProductOneFlagRear, "后轮" },
    {ProductOneFlagChain, "自行车链条" }
};

static two_string_t gTwoStrings[] = {
    { ProductTwoFlagFrame, "自行车架" },
    { ProductTwoFlagHandle, "自行车把手" },
    { ProductTwoFlagFront, "前轮" },
    { ProductTwoFlagRear, "后轮" },
    { ProductTwoFlagFork, "后下叉" },
    { ProductTwoFlagChain, "链条" },
    { ProductTwoFlagSeat, "座包" }
};

QPixmap *gDefPixmap = nullptr;
ProductResources *gProductResourcesInstance = nullptr;

ProductResources::ProductResources()
{
}
//加载资源函数
void ProductResources::loadResources()
{
    if(d.load) { return; }

    // 设置默认装配顺序 - 产品1
    d.oneOrder << ProductOneFlagFrame;
    d.oneOrder << ProductOneFlagHandle;
    d.oneOrder << ProductOneFlagFront;
    d.oneOrder << ProductOneFlagEngine;
    d.oneOrder << ProductOneFlagRear;
    d.oneOrder << ProductOneFlagChain;

    // 设置默认装配顺序 - 产品2
    d.twoOrder << ProductTwoFlagFrame;
    d.twoOrder << ProductTwoFlagFront;
    d.twoOrder << ProductTwoFlagHandle;
    d.twoOrder << ProductTwoFlagSeat;
    d.twoOrder << ProductTwoFlagRear;
    d.twoOrder << ProductTwoFlagChain;
    d.twoOrder << ProductTwoFlagFork;

    // 加载零件和装配顺序
    loadBikeOnePart();
    loadBikeTwoPart();
    loadBikeOneAssembly();
    loadBikeTwoAssembly();

    d.load = true;
}
//判断加载状态
bool ProductResources::isLoaded() const
{
    return d.load;
}
//返回主窗口
MainWindow *&ProductResources::mainWindow()
{
    return d.windows.mainWindow;
}
//返回自定义装配顺序界面
CustomAssemblyOrder *&ProductResources::customAssemblyOrder()
{
    return d.windows.customAssemblyOrder;
}
//返回选择替换用部件界面
ChoiceDisassemblePart *&ProductResources::choiceDisassemblePart()
{
    return d.windows.choicePart;
}
//返回维修过程展示界面
ShowProductProcess *&ProductResources::showProductProcess()
{
    return d.windows.showProductProcess;
}

ShowReplacePart *&ProductResources::showReplacePart()
{
    return d.windows.showReplacePart;
}
//显示当前选择的零件
ProductType &ProductResources::currentProduct()
{
    return d.currentProduct;
}
//当前的部件的尺寸
int ProductResources::currentProductPartSize() const
{
    int size = 0;
    switch (d.currentProduct) {
    case ProductTypeOne:
        size = d.onePart.size();
        break;
    case ProductTypeTwo:
        size = d.twoPart.size();
        break;
    }
    return size;
}

QPixmap &ProductResources::productOnePartPixmap(ProductOneFlag flag)
{
    for(int i = 0; i < d.onePart.size(); ++i) {
        if(d.onePart[i].flag == flag) {
            return d.onePart[i].pixmap;
        }
    }

    if(!gDefPixmap) { gDefPixmap = new QPixmap; }
    return *gDefPixmap;
}

QPixmap &ProductResources::productTwoPartPixmap(ProductTwoFlag flag)
{
    for(int i = 0; i < d.twoPart.size(); ++i) {
        if(d.twoPart[i].flag == flag) {
            return d.twoPart[i].pixmap;
        }
    }

    if(!gDefPixmap) { gDefPixmap = new QPixmap; }
    return *gDefPixmap;
}

ProductResourcesData &ProductResources::data()
{
    return d;
}

QList<bike_one_assembly_process_t> &ProductResources::oneAssemblyProcess(ProductOneFlags flags)
{
    for(int i = 0; i < d.oneAssemblyScheme.size(); ++i) {
        if(d.oneAssemblyScheme[i].first == flags) {
            return d.oneAssemblyScheme[i].second;
        }
    }

    return d.oneAssemblyScheme[0].second;
}

QList<bike_two_assembly_process_t> &ProductResources::twoAssemblyProcess(ProductTwoFlags flags)
{
    for(int i = 0; i < d.twoAssemblyScheme.size(); ++i) {
        if(d.twoAssemblyScheme[i].first == flags) {
            return d.twoAssemblyScheme[i].second;
        }
    }

    return d.twoAssemblyScheme[0].second;
}
//加载产品2搜索需要维修的部件资源
QPixmap &ProductResources::oneAssemblyProcessFindFlag(ProductOneFlags flags, ProductOneFlags flag)
{
    QList<bike_one_assembly_process_t> &list = oneAssemblyProcess(flags);

    for(int i = 0; i < list.size(); ++i) {
        if(list[i].flags == flag) {
            return list[i].pixmap;
        }
    }
    return list[0].pixmap;
}
//加载产品1搜索需要维修的部件资源
QPixmap &ProductResources::oneAssemblyProcessFindFlag(QList<bike_one_assembly_process_t> &list, ProductOneFlags flag)
{
    for(int i = 0; i < list.size(); ++i) {
        if(list[i].flags == flag) {
            return list[i].pixmap;
        }
    }

    //qDebug() << "not found: " << flag;
    return list[0].pixmap;
}
//加载产品2搜索需要维修的部件资源
QPixmap &ProductResources::twoAssemblyProcessFindFlag(QList<bike_two_assembly_process_t> &list, ProductTwoFlags flag)
{
    for(int i = 0; i < list.size(); ++i) {
        if(list[i].flags == flag) {
            return list[i].pixmap;
        }
    }
    return list[0].pixmap;
}
//产品1加载替换用资源
QPixmap &ProductResources::oneReplace(ProductOneFlag flag)
{
    for(int i = 0; i < d.oneReplace.size(); ++i) {
        if(d.oneReplace[i].flag == flag) {
            return d.oneReplace[i].pixmap;
        }
    }
    return d.oneReplace[0].pixmap;
}
//产品2加载替换用资源
QPixmap &ProductResources::twoReplace(ProductTwoFlag flag)
{
    for(int i = 0; i < d.twoReplace.size(); ++i) {
        if(d.twoReplace[i].flag == flag) {
            return d.twoReplace[i].pixmap;
        }
    }
    return d.twoReplace[0].pixmap;
}
//产品1加载资源
QPixmap &ProductResources::onePart(ProductOneFlag flag)
{
    for(int i = 0; i < d.onePart.size(); ++i) {
        if(d.onePart[i].flag == flag) {
            return d.onePart[i].pixmap;
        }
    }
    return d.onePart[0].pixmap;
}
//产品2加载资源
QPixmap &ProductResources::twoPart(ProductTwoFlag flag)
{
    for(int i = 0; i < d.twoPart.size(); ++i) {
        if(d.twoPart[i].flag == flag) {
            return d.twoPart[i].pixmap;
        }
    }
    return d.twoPart[0].pixmap;
}
//窗口实例
ProductResources &ProductResources::instance()
{
    if(!gProductResourcesInstance) {
        gProductResourcesInstance = new ProductResources;
    }
    return *gProductResourcesInstance;
}
//加载产品1的部件
void ProductResources::loadBikeOnePart()
{
    loadBikeOneParts(QString("./Resources/A-bicycle/0/"), QString("0-%1.jpg"), d.onePart);
    loadBikeOneParts(QString("./Resources/A-bicycle/00/"), QString("00 (%1).jpg"), d.oneReplace);
}
//加载产品2的部件
void ProductResources::loadBikeTwoPart()
{
    loadBikeTwoParts(QString("./Resources/B-bicycle/0/"), QString("B0 (%1).jpg"), d.twoPart);
    loadBikeTwoParts(QString("./Resources/B-bicycle/00/"), QString("B00 (%1).jpg"), d.twoReplace);
}
//加载产品1的装配顺序集合
void ProductResources::loadBikeOneAssembly()
{
    loadBikeOneScheme(ProductOneFlagScheme,                         QString("./Resources/A-bicycle/1/"), QString("1-ddzxc (%1).jpg"));
    loadBikeOneScheme(ProductOneFlagScheme | ProductOneFlagEngine,  QString("./Resources/A-bicycle/2/"), QString("2-ddzxc (%1).jpg"));
    loadBikeOneScheme(ProductOneFlagScheme | ProductOneFlagFrame,   QString("./Resources/A-bicycle/3/"), QString("3-ddzxc (%1).jpg"));
    loadBikeOneScheme(ProductOneFlagScheme | ProductOneFlagHandle,  QString("./Resources/A-bicycle/4/"), QString("4-ddzxc (%1).jpg"));

}
//加载产品2的装配顺序集合
void ProductResources::loadBikeTwoAssembly()
{
    loadBikeTwoScheme(ProductTwoFlagScheme,                         QString("./Resources/B-bicycle/1/"), QString("B1 (%1).jpg"));
    loadBikeTwoScheme(ProductTwoFlagScheme | ProductTwoFlagFrame,   QString("./Resources/B-bicycle/2/"), QString("B2 (%1).jpg"));
    loadBikeTwoScheme(ProductTwoFlagScheme | ProductTwoFlagSeat,    QString("./Resources/B-bicycle/3/"), QString("B3 (%1).jpg"));
    loadBikeTwoScheme(ProductTwoFlagScheme | ProductTwoFlagHandle,  QString("./Resources/B-bicycle/4/"), QString("B4 (%1).jpg"));
    loadBikeTwoScheme(ProductTwoFlagScheme | ProductTwoFlagFork,    QString("./Resources/B-bicycle/5/"), QString("B5 (%1).jpg"));
}
//加载产品1部件
void ProductResources::loadBikeOneParts(const QString &path, const QString &name, QList<bike_one_part_t> &list)
{
    QList<ProductOneFlag> flagList;
    flagList << ProductOneFlagFrame;
    flagList << ProductOneFlagEngine;
    flagList << ProductOneFlagHandle;
    flagList << ProductOneFlagFront;
    flagList << ProductOneFlagRear;
    flagList << ProductOneFlagChain;

    //qDebug() << "ProductResources::loadBikeOneParts()";
    for(int i = 0; i < flagList.size(); ++i) {
        QString filename = path + name;
        filename = filename.arg(i + 1);

        bike_one_part_t part;
        part.flag = flagList[i];
        part.pixmap.load(filename);
//        qDebug() << i << " - filename: " << filename
//                 << " - pixmap.isNull: " << part.pixmap.isNull();

        list.append(part);
    }

}
//加载产品2部件
void ProductResources::loadBikeTwoParts(const QString &path, const QString &name, QList<bike_two_part_t> &list)
{
    QList<ProductTwoFlag> flagList;
    flagList << ProductTwoFlagFrame;
    flagList << ProductTwoFlagRear;
    flagList << ProductTwoFlagFront;
    flagList << ProductTwoFlagFork;
    flagList << ProductTwoFlagChain;
    flagList << ProductTwoFlagSeat;
    flagList << ProductTwoFlagHandle;

    //qDebug() << "ProductResources::loadBikeTwoParts()";
    for(int i = 0; i < flagList.size(); ++i) {
        QString filename = path + name;
        filename = filename.arg(i + 1);

        bike_two_part_t part;
        part.flag = flagList[i];
        part.pixmap.load(filename);
//        qDebug() << i << " - filename: " << filename
//                 << " - pixmap.isNull: " << part.pixmap.isNull();

        list.append(part);
    }

}
//加载产品1顺序
void ProductResources::loadBikeOneScheme(ProductOneFlags first, const QString &path, const QString&name)
{
    onePair pair;
    pair.first = first;

    QList<ProductOneFlags> flagList;
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagFront | ProductOneFlagRear | ProductOneFlagChain);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagRear | ProductOneFlagChain);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagFront | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagFront | ProductOneFlagRear | ProductOneFlagChain);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagRear | ProductOneFlagChain);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagFront);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagFront | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagHandle | ProductOneFlagFront | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagHandle | ProductOneFlagFront);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagHandle | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle);
    flagList << (ProductOneFlagFrame | ProductOneFlagHandle);
    flagList << (ProductOneFlagFrame | ProductOneFlagRear);
    flagList << (ProductOneFlagFrame | ProductOneFlagFront);
    flagList << (ProductOneFlagFrame | ProductOneFlagEngine);
    flagList << (ProductOneFlagFrame);

    for(int i = 0; i < flagList.size(); ++i) {
        QString filename = path + name;
        filename = filename.arg(i + 1);

        bike_one_assembly_process_t tmp;
        tmp.flags = flagList[i];
        tmp.pixmap.load(filename);
        pair.second.append(tmp);
//        qDebug() << "first: " << first
//                 << i + 1 << "filename: " << filename
//                 << " - pixmap.isNull: " << tmp.pixmap.isNull()
//                 << " - flags: " << tmp.flags;
    }

    d.oneAssemblyScheme.append(pair);
}
//加载产品2顺序
void ProductResources::loadBikeTwoScheme(ProductTwoFlags first, const QString &path, const QString &name)
{
    twoPair pair;
    pair.first = first;

    QList<ProductTwoFlags> flagList;
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagSeat);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagChain | ProductTwoFlagSeat);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagChain | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagChain);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagChain | ProductTwoFlagSeat);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagFork | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagRear);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront | ProductTwoFlagFork);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagRear);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagSeat);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFork | ProductTwoFlagSeat);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagChain);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFront);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagHandle);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagSeat);

    flagList << (ProductTwoFlagFrame | ProductTwoFlagRear);
    flagList << (ProductTwoFlagFrame | ProductTwoFlagFork);
    flagList << (ProductTwoFlagFrame);

    for(int i = 0; i < flagList.size(); ++i) {
        QString filename = path + name;
        filename = filename.arg(i + 1);

        bike_two_assembly_process_t tmp;
        tmp.flags = flagList[i];
        tmp.pixmap.load(filename);
        pair.second.append(tmp);
    }

    d.twoAssemblyScheme.append(pair);
}


QString &productOnePartString(ProductOneFlag flag)
{
    for(unsigned long long i = 0; i < sizeof(gOneStrings) / sizeof(gOneStrings[0]); ++i) {
        if(gOneStrings[i].flag == flag) {
            return gOneStrings[i].text;
        }
    }

    if(!gUnknownPart) { gUnknownPart = new QString("未知配件"); }
    return *gUnknownPart;
}

QString &productTwoPartString(ProductTwoFlag flag)
{
    for(unsigned long long i = 0; i < sizeof(gTwoStrings) / sizeof(gTwoStrings[0]); ++i) {
        if(gTwoStrings[i].flag == flag) {
            return gTwoStrings[i].text;
        }
    }

    if(!gUnknownPart) { gUnknownPart = new QString("未知配件"); }
    return *gUnknownPart;
}
