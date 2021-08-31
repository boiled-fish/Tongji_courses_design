#ifndef SHOWREPLACEPART_H
#define SHOWREPLACEPART_H

#include <QWidget>

namespace Ui {
class ShowReplacePart;
}

// 替换零件展示
class ShowReplacePart : public QWidget
{
    Q_OBJECT

public:
    explicit ShowReplacePart(QWidget *parent = nullptr);
    ~ShowReplacePart();

    void set(const QPixmap &icon, const QString &text);

Q_SIGNALS:
    void sHide();

protected:
    struct _ShowReplaePartData {
        QTimer *timer = nullptr;
    } d;

private:
    Ui::ShowReplacePart *ui;
};

#endif // SHOWREPLACEPART_H
