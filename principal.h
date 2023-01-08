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
    void on_btnAgregar_clicked();

private:
    Ui::Principal *ui;

    enum Columna
    {
        NOMBRE, APELLIDO, TELEFONO, EMAIL
    };
};
#endif // PRINCIPAL_H