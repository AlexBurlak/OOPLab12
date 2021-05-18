#ifndef LAB12_H
#define LAB12_H

#include <QMainWindow>
#include "logger.h"
#include "vyraz.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Lab12; }
QT_END_NAMESPACE

class Lab12 : public QMainWindow
{
    Q_OBJECT

public:
    Lab12(QWidget *parent = nullptr);
    ~Lab12();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Logger logger;
    Vyraz myVyraz;
    Ui::Lab12 *ui;
};
#endif // LAB12_H
