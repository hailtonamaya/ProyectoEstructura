#include "ProyectoEstructura.h"
#include <QtWidgets/QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProyectoEstructura w;
    w.show();
    //cout << "Hola Mundo";
    return a.exec();
}
