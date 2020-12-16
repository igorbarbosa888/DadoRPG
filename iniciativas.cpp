#include "iniciativas.h"
#include "ui_iniciativas.h"

iniciativas::iniciativas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iniciativas)
{
    ui->setupUi(this);
}

iniciativas::~iniciativas()
{
    delete ui;
}

void iniciativas::on_pushButton_clicked()
{
ui->listWidget->addItem(ui->lineEdit->text());

}

void iniciativas::on_pushButton_2_clicked()
{
    ui->listWidget->clear();

}

void iniciativas::on_pushButton_3_clicked()
{
ui->listWidget->currentItem()->setBackground(Qt::red);

}
