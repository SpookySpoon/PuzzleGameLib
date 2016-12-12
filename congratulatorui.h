#ifndef CONGRATULATORUI_H
#define CONGRATULATORUI_H

#include <QDialog>

namespace Ui {
class CongratsWindow;
}
class CongratulatorUI: public QDialog
{
    Q_OBJECT
public:
    explicit CongratulatorUI(Ui::CongratsWindow *ui, QWidget* parent = nullptr);
private:
    Ui::CongratsWindow *ui;
};

#endif // CONGRATULATORUI_H
