#ifndef PRODUCTRESOURCES_H
#define PRODUCTRESOURCES_H

#include <QList>
#include <QFlags>
#include <QPixmap>

enum ProductType {
    ProductTypeOne, // 产品1
    ProductTypeTwo  // 产品2
};

// 产品1
enum ProductOneFlag {
    ProductOneFlagFrame     = 1 << 0,   // 车架
    ProductOneFlagEngine    = 1 << 1,   // 发动机
    ProductOneFlagHandle    = 1 << 2,   // 自行车把手
    ProductOneFlagFront     = 1 << 3,   // 前轮
    ProductOneFlagRear      = 1 << 4,   // 后轮
    ProductOneFlagChain     = 1 << 5,   // 自行车链条

    ProductOneFlagAll       = ProductOneFlagFrame | ProductOneFlagEngine | ProductOneFlagHandle | ProductOneFlagFront | ProductOneFlagRear | ProductOneFlagChain,

    ProductOneFlagScheme    = 1 << 30   // 替换方案标记
};
Q_DECLARE_FLAGS(ProductOneFlags, ProductOneFlag)
Q_DECLARE_OPERATORS_FOR_FLAGS(ProductOneFlags)

// 产品2
enum ProductTwoFlag {
    ProductTwoFlagFrame     = 1 << 0,   // 自行车架
    ProductTwoFlagHandle    = 1 << 1,   // 自行车把手
    ProductTwoFlagFront     = 1 << 2,   // 前轮
    ProductTwoFlagRear      = 1 << 3,   // 后轮
    ProductTwoFlagFork      = 1 << 4,   // 后下叉
    ProductTwoFlagChain     = 1 << 5,   // 链条
    ProductTwoFlagSeat      = 1 << 6,   // 座包

    ProductTwoFlagAll       = ProductTwoFlagFrame | ProductTwoFlagHandle | ProductTwoFlagFront | ProductTwoFlagRear | ProductTwoFlagFork | ProductTwoFlagChain | ProductTwoFlagSeat,

    ProductTwoFlagScheme    = 1 << 30   // 替换方案标记
};
Q_DECLARE_FLAGS(ProductTwoFlags, ProductTwoFlag)
Q_DECLARE_OPERATORS_FOR_FLAGS(ProductTwoFlags)

typedef struct _bike_one_part {
    ProductOneFlag  flag;
    QPixmap         pixmap;
} bike_one_part_t;

typedef struct _bike_two_part {
    ProductTwoFlag  flag;
    QPixmap         pixmap;
} bike_two_part_t;

// 自行车1装配过程资源
typedef struct _bike_one_assembly_process {
    ProductOneFlags flags;
    QPixmap         pixmap;
} bike_one_assembly_process_t;

// 自行车2装配过程资源
typedef struct _bike_two_assembly_process {
    ProductTwoFlags flags;
    QPixmap         pixmap;
} bike_two_assembly_process_t;

class MainWindow;
class CustomAssemblyOrder;
class ChoiceDisassemblePart;
class ShowProductProcess;
class ShowReplacePart;

typedef QPair<ProductOneFlags/*Flags*/, QList<bike_one_assembly_process_t>/*资源*/> onePair;
typedef QPair<ProductTwoFlags/*Flags*/, QList<bike_two_assembly_process_t>/*资源*/> twoPair;

// ProductResource 类的数据成员
struct ProductResourcesData {
    bool load = false;                  // 是否已加载资源
    QList<bike_one_part_t> onePart;     // 产品1 原件
    QList<bike_one_part_t> oneReplace;  // 产品1 替换件
    QList<bike_two_part_t> twoPart;     // 产品2 原件
    QList<bike_two_part_t> twoReplace;  // 产品2 替换件

    ProductType currentProduct = ProductTypeOne;    // 当前产品
    QList<ProductOneFlag> oneOrder;     // 产品1 装配顺序
    QList<ProductTwoFlag> twoOrder;     // 产品2 装配顺序
    ProductOneFlag one_replace_part = ProductOneFlagScheme;    // 产品1 替换配件
    ProductTwoFlag two_replace_part = ProductTwoFlagScheme;    // 产品2 替换配件

    QList<onePair> oneAssemblyScheme;   // 第1套产品所有装配方案
    QList<twoPair> twoAssemblyScheme;   // 第2套产品所有装配方案

    struct _windows {
        MainWindow              *mainWindow             = nullptr;  // 主窗口
        CustomAssemblyOrder     *customAssemblyOrder    = nullptr;  // 自定义装配顺序
        ChoiceDisassemblePart   *choicePart             = nullptr;  // 选择需要替换零件
        ShowProductProcess      *showProductProcess     = nullptr;  // 显示装配过程
        ShowReplacePart         *showReplacePart        = nullptr;  // 显示替换的零件
    } windows;

};

class ProductResources
{
protected:
    ProductResources();

public:
    void loadResources();
    bool isLoaded() const;

    MainWindow              *&mainWindow();
    CustomAssemblyOrder     *&customAssemblyOrder();
    ChoiceDisassemblePart   *&choiceDisassemblePart();
    ShowProductProcess      *&showProductProcess();
    ShowReplacePart         *&showReplacePart();

    ProductType &currentProduct();
    // 当前产品零件数量
    int currentProductPartSize() const;

    // 获取产品零件对应的图片
    QPixmap &productOnePartPixmap(ProductOneFlag flag);
    QPixmap &productTwoPartPixmap(ProductTwoFlag flag);

    ProductResourcesData &data();

    QList<bike_one_assembly_process_t> &oneAssemblyProcess(ProductOneFlags flags);
    QList<bike_two_assembly_process_t> &twoAssemblyProcess(ProductTwoFlags flags);

    // flags    - 资源组
    // flag     - 资源索引
    QPixmap &oneAssemblyProcessFindFlag(ProductOneFlags flags, ProductOneFlags flag);
    QPixmap &oneAssemblyProcessFindFlag(QList<bike_one_assembly_process_t> &list, ProductOneFlags flag);

    QPixmap &twoAssemblyProcessFindFlag(QList<bike_two_assembly_process_t> &list, ProductTwoFlags flag);

    QPixmap &oneReplace(ProductOneFlag flag);
    QPixmap &twoReplace(ProductTwoFlag flag);

    QPixmap &onePart(ProductOneFlag flag);
    QPixmap &twoPart(ProductTwoFlag flag);

    static ProductResources &instance();


protected:
    // 加载零件
    void loadBikeOnePart();
    void loadBikeTwoPart();
    // 加载装配过程资源
    void loadBikeOneAssembly();
    void loadBikeTwoAssembly();

    // 加载零件
    // path     - 路径
    // name     - 可使用arg方法的文件名
    // list     - 将初始化后的数据放入此链表
    void loadBikeOneParts(const QString &path, const QString &name, QList<bike_one_part_t> &list);
    void loadBikeTwoParts(const QString &path, const QString &name, QList<bike_two_part_t> &list);

    // 加载装配方案
    // first    - 装配编号
    // path     - 路径
    // name     - 可使用arg方法的文件名
    void loadBikeOneScheme(ProductOneFlags first, const QString &path, const QString &name);
    void loadBikeTwoScheme(ProductTwoFlags first, const QString &path, const QString &name);

protected:
    ProductResourcesData d;

};

QString &productOnePartString(ProductOneFlag flag);
QString &productTwoPartString(ProductTwoFlag flag);

#endif // PRODUCTRESOURCES_H
