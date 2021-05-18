#include "lab12.h"
#include "ui_lab12.h"


Lab12::Lab12(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab12)
{
    ui->setupUi(this);
    Logger temp("myLog.log");
    logger = temp;
    logger.writeToLog("Application started.");
}

Lab12::~Lab12()
{
    logger.writeToLog("Application closed.");
    delete ui;
}


void Lab12::on_pushButton_clicked()
{
    try {
        QString nCoefficients = ui->lineEdit->text();
        QString mCoefficients = ui->lineEdit_2->text();
        QString kCoefficients = ui->lineEdit_3->text();
        QString x = ui->lineEdit_4->text();
        Vyraz tempVyraz(nCoefficients,mCoefficients,kCoefficients,x);
        myVyraz = tempVyraz;
        double result = myVyraz.Calculate();
        ui->label_6->setText(QString::number(result));
    } catch(WrongInputException ex){
        QMessageBox msg(QMessageBox::Critical, "WrongInputException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch(OverflowException ex){
        QMessageBox msg(QMessageBox::Critical, "OverflowException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch (DivideByZeroException ex) {
        QMessageBox msg(QMessageBox::Critical, "DivideByZeroException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch ( NegativeSquareException ex) {
        QMessageBox msg(QMessageBox::Critical, "NegativeSquareException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch (NegativeLogException ex) {
        QMessageBox msg(QMessageBox::Critical, "NegativeLogException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch (...) {
        QMessageBox msg(QMessageBox::Critical, "Unhandled exception", "Unhandled exception", QMessageBox::Ok);
        logger.writeToLog("Unhandled exception");
        msg.exec();
    }
}

void Lab12::on_pushButton_2_clicked()
{
    try {
        QString nCoefficients = ui->lineEdit->text();
        QString mCoefficients = ui->lineEdit_2->text();
        QString kCoefficients = ui->lineEdit_3->text();
        QString x = ui->lineEdit_4->text();
        Vyraz tempVyraz(nCoefficients,mCoefficients,kCoefficients,x);
        myVyraz = tempVyraz;
        short result = myVyraz.getCoefficientN(ui->spinBox->text().toInt());
        ui->label_7->setText(QString::number(result));
    } catch(WrongInputException ex){
        QMessageBox msg(QMessageBox::Critical, "WrongInputException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch(OverflowException ex){
        QMessageBox msg(QMessageBox::Critical, "OverflowException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch (OutOfBoundsException ex) {
        QMessageBox msg(QMessageBox::Critical, "OutOfBoundsException", ex.getMessage(), QMessageBox::Ok);
        logger.writeToLog(ex.getMessage().toUtf8().constData());
        msg.exec();
    } catch (...) {
        QMessageBox msg(QMessageBox::Critical, "Unhandled exception", "Unhandled exception", QMessageBox::Ok);
        logger.writeToLog("Unhandled exception");
        msg.exec();
    }
}
