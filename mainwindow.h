#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_But1_clicked();

    void on_But0_clicked();

    void on_But2_clicked();

    void on_But3_clicked();

    void on_But4_clicked();

    void on_But5_clicked();

    void on_But6_clicked();

    void on_But7_clicked();

    void on_But8_clicked();

    void on_But9_clicked();

    void on_ButComma_clicked();

    void on_ButAC_clicked();

    void on_ButPlusMinus_clicked();

    void on_ButPerc_clicked();

    void on_ButPlu_clicked();

    void on_ButMin_clicked();

    void on_ButMult_clicked();

    void on_ButDiv_clicked();

    void on_ButEquals_clicked();

private:
    Ui::MainWindow *ui;
    double first_num = 0;
    QString pendingOperation;
    bool waitingForSecondNum;
};
#endif // MAINWINDOW_H
