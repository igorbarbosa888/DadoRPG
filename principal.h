#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QWidget
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_pushButton_clicked();

    void on_BtnD4_clicked();

    void on_BtnD6_clicked();

    void on_BtnD8_clicked();

    void on_BtnD10_clicked();

    void on_BtnD12_clicked();

    void on_BtnD20_clicked();

    void on_BtnD100_clicked();

    void on_pushButton_3_clicked();

    void on_BtnIniciativa_clicked();

    void on_BtnMacro_clicked();

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
