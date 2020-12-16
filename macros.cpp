#include "macros.h"
#include "ui_macros.h"
#include <string>

Macros::Macros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Macros)
{
    ui->setupUi(this);
}

Macros::~Macros()
{
    delete ui;
}

void Macros::on_pushButton_clicked()
{
int i, r, d, soma = 0;
int vetor1[5];

i = ui->comboBox->currentIndex();

if (ui->comboBox_2->currentText()=="D4")
{
    d = 4;
}
if (ui->comboBox_2->currentText()=="D6")
{
    d = 6;
}
if (ui->comboBox_2->currentText()=="D8")
{
    d = 8;
}
if (ui->comboBox_2->currentText()=="D10")
{
    d = 10;
}
if (ui->comboBox_2->currentText()=="D12")
{
    d = 12;
}
if (ui->comboBox_2->currentText()=="D20")
{
    d = 20;
}
if (ui->comboBox_2->currentText()=="D100")
{
    d = 100;
}

for (r=0; r<=i; r++)
{
vetor1[r] = rand() % d + 1;
soma = soma + vetor1[r];
}
soma = soma + ui->spinBox->value();

ui->listWidget->addItem(QString::number(soma));
}
