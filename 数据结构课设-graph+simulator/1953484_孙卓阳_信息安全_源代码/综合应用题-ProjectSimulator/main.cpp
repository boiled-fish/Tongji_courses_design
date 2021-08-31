#include "MainWindow.h"

#include <QApplication>

#include "CustomAssemblyOrder.h"
#include "ChoiceDisassemblePart.h"
#include "ShowProductProcess.h"
#include "ShowReplacePart.h"
#include "ProductResources.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ProductResources::instance().mainWindow() = new MainWindow();
    ProductResources::instance().customAssemblyOrder() = new CustomAssemblyOrder;
    ProductResources::instance().choiceDisassemblePart() = new ChoiceDisassemblePart;
    ProductResources::instance().showProductProcess() = new ShowProductProcess;
    ProductResources::instance().showReplacePart() = new ShowReplacePart;

    ProductResources::instance().mainWindow()->show();

    return a.exec();
}
