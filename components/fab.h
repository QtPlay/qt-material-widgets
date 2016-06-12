#ifndef FAB_H
#define FAB_H

#include <QWidget>

class FloatingActionButton : public QWidget
{
    Q_OBJECT

public:
    explicit FloatingActionButton(QWidget *parent = 0);
    ~FloatingActionButton();

private:
    Q_DISABLE_COPY(FloatingActionButton)
    //Q_DECLARE_PRIVATE(FloatingActionButton)
};

#endif // FAB_H
