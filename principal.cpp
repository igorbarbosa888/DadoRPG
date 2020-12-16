#include "principal.h"
#include "ui_principal.h"
#include <string.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include "iniciativas.h"
#include "macros.h"

using namespace std;

int dadoroll, dresultado;
stringstream ss;
string a1;


Principal::Principal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);

}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_pushButton_clicked()
{

ui->label_2->setText(QString::number(dresultado = rand() % dadoroll + 1));

}

void Principal::on_BtnD4_clicked()
{
   dadoroll = 4;
   ui->LblDadoSelecionado->setText("D4");

}

void Principal::on_BtnD6_clicked()
{
    dadoroll = 6;
    ui->LblDadoSelecionado->setText("D6");
}

void Principal::on_BtnD8_clicked()
{
    dadoroll = 8;
    ui->LblDadoSelecionado->setText("D8");
}

void Principal::on_BtnD10_clicked()
{
    dadoroll = 10;
    ui->LblDadoSelecionado->setText("D10");
}

void Principal::on_BtnD12_clicked()
{
    dadoroll = 12;
    ui->LblDadoSelecionado->setText("D12");
}

void Principal::on_BtnD20_clicked()
{
    dadoroll = 20;
    ui->LblDadoSelecionado->setText("D20");
}

void Principal::on_BtnD100_clicked()
{
    dadoroll = 100;
    ui->LblDadoSelecionado->setText("D100");
}

void Principal::on_BtnIniciativa_clicked()
{
  iniciativas iniciativa;
  iniciativa.setModal(true);
  iniciativa.exec();


}

void Principal::on_BtnMacro_clicked()
{
Macros macro;
macro.setModal(true);
macro.exec();

}
