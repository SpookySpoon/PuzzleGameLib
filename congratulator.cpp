#include "congratulator.h"
#include "congratulatorui.h"
#include "ui_congratswindow.h"
#include "scorehandler.h"

Congratulator::Congratulator(QObject *parent):QObject (parent), ui(new Ui::CongratsWindow)
{}



void Congratulator::prepareWindow(QPair<int,int> somePair)
{
    QPair<int,int> toSend(somePair);
    conWindow = new CongratulatorUI(ui);
    ui->setupUi(conWindow);
    sHandler = new ScoreHandler(this);

    if(gameRegime)
    {
        ui->lableCheers->setText("Congratulations, you've solved a broblem!!");
        emit initScoreHandler(toSend);
    }
    else
    {
        ui->lableCheers->setText("Nice practise, now go play it for real!");
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

void Congratulator::setConnections()
{
    connect(sHandler,SIGNAL(reportBestComboGameMoves(int)),conWindow,SLOT(setBestComboGameMoves(int)));
    connect(sHandler,SIGNAL(reportBestComboGameTime(int)),conWindow,SLOT(setBestComboGameTime(int)));
    connect(sHandler,SIGNAL(reportBestGameMoves(int)),conWindow,SLOT(setBestGameMoves(int)));
    connect(sHandler,SIGNAL(reportBestGameTime(int)),conWindow,SLOT(setBestGameTime(int)));
    connect(sHandler,SIGNAL(reportGameMoves(int)),conWindow,SLOT(setGameMoves(int)));
    connect(sHandler,SIGNAL(reportGameTime(int)),conWindow,SLOT(setGameTime(int)));
    connect(sHandler,SIGNAL(statsReady()),this,SLOT(showWindow()));
}
