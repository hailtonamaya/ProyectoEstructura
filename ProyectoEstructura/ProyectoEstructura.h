#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProyectoEstructura.h"

class ProyectoEstructura : public QMainWindow
{
    Q_OBJECT

public:
    ProyectoEstructura(QWidget *parent = nullptr);
    ~ProyectoEstructura();

private:
    Ui::ProyectoEstructuraClass ui;
};
