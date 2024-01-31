#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <QPlainTextEdit>
#include <QVBoxLayout>
#include <QKeyEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_AC_clicked();

    void on_pushButton_equals_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_multiple_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_percent_clicked();

    void on_pushButton_negative_clicked();

protected:
    void keyPressEvent(QKeyEvent *e) override;

private:
    Ui::MainWindow *ui;
    double currentNumber = 0.0;
     double currentValue = 0.0;
    QString currentOperation;
    double lastResult = 0.0;

};
#endif // MAINWINDOW_H
