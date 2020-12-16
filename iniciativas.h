#ifndef INICIATIVAS_H
#define INICIATIVAS_H

#include <QDialog>

namespace Ui {
class iniciativas;
}

class iniciativas : public QDialog
{
    Q_OBJECT

public:
    explicit iniciativas(QWidget *parent = nullptr);
    ~iniciativas();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::iniciativas *ui;
};

#endif // INICIATIVAS_H
