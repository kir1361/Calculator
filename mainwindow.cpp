#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QScrollArea>
#include <QPlainTextEdit>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    setFixedSize(316,530);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_0_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->setText("0");
    }
    else
    {
        ui->Result->setText(currentText + "0");
    }

}
void MainWindow::on_pushButton_1_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("1");
    }
    else
    {
        currentText += "1";
        ui->Result->setText(currentText);

    }

}


void MainWindow::on_pushButton_2_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("2");
    }
    else
    {
        currentText += "2";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("3");
    }
    else
    {
        currentText += "3";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("4");
    }
    else
    {
        currentText += "4";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("5");
    }
    else
    {
        currentText += "5";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("6");
    }
    else
    {
        currentText += "6";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_7_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("7");
    }
    else
    {
        currentText += "7";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_8_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("8");
    }
    else
    {
        currentText += "8";
        ui->Result->setText(currentText);

    }
}


void MainWindow::on_pushButton_9_clicked()
{
    QString currentText = ui->Result->text();

    if (currentText == "0")
    {
        ui->Result->clear();
        ui->Result->setText("9");
    }
    else
    {
        currentText += "9";
        ui->Result->setText(currentText);

    }
}



void MainWindow::on_pushButton_AC_clicked()
{
    ui->Result->clear();

}


void MainWindow::on_pushButton_equals_clicked()
{
    double currentValue = ui->Result->text().toDouble();

    try
    {
        if (currentOperation == "+")
        {
            lastResult = currentNumber + currentValue;
        }
        else if (currentOperation == "*")
        {
            lastResult = currentValue * currentNumber;
        }

        else if(currentOperation == "/")
        {
            if (currentValue != 0.0)
            {
                lastResult = currentNumber / currentValue;
            }
            else {
                throw std::runtime_error("Division by zero");
            }

        }

        else if(currentOperation == "-")
        {
            lastResult = currentNumber - currentValue;
        }

        ui->Result->setText(QString::number(lastResult));
        QString fullExpression = QString::number(currentNumber) + currentOperation  + QString::number(currentValue) + " = " + QString::number(lastResult);

        ui->plainTextEdit->appendPlainText(fullExpression);
    }
    catch(const std::exception& e){
        ui->Result->setText("Error");
    }

}

void MainWindow::on_pushButton_plus_clicked()
{

    currentNumber = ui->Result->text().toDouble();
    currentOperation = "+";
    ui->Result->clear();

}

void MainWindow::on_pushButton_multiple_clicked()
{
    currentNumber = ui->Result->text().toDouble();
    currentOperation = "*";

    ui->Result->clear();
}

void MainWindow::on_pushButton_division_clicked()
{
    currentNumber = ui->Result->text().toDouble();
    currentOperation = "/";
    ui->Result->clear();
}

void MainWindow::on_pushButton_minus_clicked()
{
    currentNumber = ui->Result->text().toDouble();
    currentOperation = "-";
    ui->Result->clear();
}

void MainWindow::on_pushButton_dot_clicked()
{
    QString currentText = ui->Result->text();
    if (currentText.contains('.'))
    {
        return;
    }
    ui->Result->setText(currentText + ".");

}


void MainWindow::on_pushButton_percent_clicked()
{
    if (!ui->Result->text().isEmpty())
    {
        double currentNumber = ui->Result->text().toDouble();

        double result = currentNumber * 0.01;

        ui->Result->setText(QString::number(result));
    }

}


void MainWindow::on_pushButton_negative_clicked()
{
    if (!ui->Result->text().isEmpty())
    {
        double currentNumber = ui->Result->text().toDouble();
        double result = currentNumber * (-1);
        ui->Result->setText(QString::number(result));
    }

}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_0)
    {
        on_pushButton_0_clicked();

    }

    else if (e->key() == Qt::Key_1)
    {
        on_pushButton_1_clicked();

    }
    else if (e->key() == Qt::Key_2)
    {
        on_pushButton_2_clicked();

    }
    else if (e->key() == Qt::Key_3)
    {
        on_pushButton_3_clicked();

    }
    else if (e->key() == Qt::Key_4)
    {
        on_pushButton_4_clicked();

    }
    else if (e->key() == Qt::Key_5)
    {
        on_pushButton_5_clicked();

    }
    else if (e->key() == Qt::Key_6)
    {
        on_pushButton_6_clicked();

    }
    else if (e->key() == Qt::Key_7)
    {
        on_pushButton_7_clicked();

    }
    else if (e->key() == Qt::Key_8)
    {
        on_pushButton_8_clicked();

    }
    else if (e->key() == Qt::Key_9)
    {
        on_pushButton_9_clicked();

    }
    else if (e->key() == Qt::Key_Minus)
    {
        on_pushButton_minus_clicked();

    }
    else if (e->key() == Qt::Key_Plus)
    {
        on_pushButton_plus_clicked();

    }
    else if (e->key() == Qt::Key_Slash)
    {
        on_pushButton_division_clicked();

    }
    else if (e->key() == Qt::Key_Asterisk)
    {
        on_pushButton_multiple_clicked();

    }
    else if (e->key() == Qt::Key_Period)
    {
        on_pushButton_dot_clicked();

    }
    else if (e->key() == Qt::Key_Equal)
    {
    on_pushButton_equals_clicked();
    }
    else if (e->key() == Qt::Key_Enter)
    {
    on_pushButton_equals_clicked();

    }
    else if (e->key() == Qt::Key_Backspace)
    {
    QString currentText = ui->Result->text();
    currentText.chop(1);
    ui->Result->setText(currentText);
    }
    else if (e->key() == Qt::Key_Return)
    {
    on_pushButton_equals_clicked();

    }
}












