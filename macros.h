#ifndef MACROS_H
#define MACROS_H

#include <QDialog>

namespace Ui {
class Macros;
}

class Macros : public QDialog
{
    Q_OBJECT

public:
    explicit Macros(QWidget *parent = nullptr);
    ~Macros();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Macros *ui;
};

#endif // MACROS_H
