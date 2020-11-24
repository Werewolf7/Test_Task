#include <QCoreApplication>
#include "FileManager.h"
#include "SourceData.h"
#include "MnkCalculator.h"
#include "auxiliary_function.h"
#include "console_interface.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    start_menu();
    return a.exec();
}
