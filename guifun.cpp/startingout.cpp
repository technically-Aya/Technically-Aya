// Qt class definitions
#include <QApplication>
#include <QLabel>

int main (int argc, char *argv[])
{
    QApplication app(argc, argv); // Creates object for app resource management
    QLabel *label = new QLabel( "Hello Qt!!"); // Hello Qt widget creation 
    label->show(); // Makes label visible
    return app.exec();
}