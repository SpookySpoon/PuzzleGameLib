#include "congratulator.h"
#include "congratulatorui.h"
#include "ui_congratswindow.h"
#include "scorehandler.h"

Congratulator::Congratulator(QObject *parent):QObject (parent), ui(new Ui::CongratsWindow)
{}



void Congratulator::prepareWindow(QPair<int,int> somePair)
{
    QPair<int,int> toSend;
    toSend.first=somePair.first;
    toSend.second=somePair.second;
    conWindow = new CongratulatorUI(ui, this);
    sHandler = new ScoreHandler(this);
    if(gameRegime)
    {
        emit initScoreHandler(toSend);
    }
    else
    {
        emit initScoreHandlerNoRecord(toSend);
    }
}

void Congratulator::showWindow()
{
    conWindow->exec();
}

void Congratulator::setGameRegime(bool regime)
{
    gameRegime=regime;
}
