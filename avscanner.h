#ifndef AVSCANNER_H
#define AVSCANNER_H

#include <QMainWindow>

namespace Ui {
class AVScanner;
}

class AVScanner : public QMainWindow
{
    Q_OBJECT

public:
    explicit AVScanner(QWidget *parent = 0);
    ~AVScanner();

private:
    Ui::AVScanner *ui;
};

#endif // AVSCANNER_H
