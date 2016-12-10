#include <QDateTime>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "puzbutton.h"
#include "puzzleform.h"
#include "ui_puzzleform.h"
#include "scoremanager.h"
#include "congratswindow.h"





PuzzleForm::PuzzleForm(QWidget *parent) :
    QWidget(parent),ui(new Ui::PuzzleForm),numberOfMoves(0),elapsedSeconds(0), countScore(true)
{
    ui->setupUi(this);
     for(int i =0;i<ui->gridLayout->count();i++)
     {
        puzzlePieces<<qobject_cast<PuzButton*>(ui->gridLayout->itemAt(i)->widget());
        puzzlePieces.last()->setMatrix(ui->gridLayout);
        connect(puzzlePieces.last(),SIGNAL(moved()),this, SLOT(puzzleMoved()));
        buttonInitialOrder<<(i);
     }
     on_buttonShuffle_clicked();
}

PuzzleForm::~PuzzleForm()
{
    delete ui;
}


void PuzzleForm::reset()
{
    if(timer.isActive())
    {
        timer.stop();
    }
    numberOfMoves=0;
    elapsedSeconds=0;
    timer.start(1000,this);
    ui->lableElapsedTime->setText(QString("Time: %1").arg(QDateTime::fromTime_t(elapsedSeconds).toUTC().toString("hh:mm:ss")));
    ui->labelMoves->setText("Moves: 0");
}

void PuzzleForm::startOver()
{
    int member=15;
    for (int i_row=0;i_row<4;i_row++)
    {
        for (int i_col=0;i_col<4;i_col++)
        {
            if(member>=1)
            {
                ui->gridLayout->addWidget(puzzlePieces.at(buttonInitialOrder.at(15-member)),i_row,i_col,1,1/*,Qt::AlignCenter*/);
                member--;
            }
        }
    }
    countScore=false;
}

void PuzzleForm::newGame()
{
    on_buttonShuffle_clicked();
}

void PuzzleForm::sameGameAgain()
{
    startOver();
    reset();
}

void PuzzleForm::checkResult()
{
    QStringList checkList;
    for(int i_row=1;i_row<5;i_row++)
    {
        for(int i_col=1;i_col<5;i_col++)
        {
            if(ui->gridLayout->itemAtPosition(i_row-1,i_col-1)!=0)
            {
                checkList<<ui->gridLayout->itemAtPosition(i_row-1,i_col-1)->widget()->objectName();
            }
            else
            {
                checkList<<"Empty Layout Item";
            }
        }
    }
    bool result=true;
    for(int i=0;i<puzzlePieces.count();i++)
    {
        if(puzzlePieces.at(i)->objectName()!=checkList.at(i))
        {
            result=false;
        }
    }
    if (result)
    {
        if(timer.isActive())
        {
            timer.stop();
        }
        CongratsWindow* conWindow=new CongratsWindow(numberOfMoves,elapsedSeconds,this, countScore, 0);
        conWindow->exec();
    }
}

void PuzzleForm::timerEvent(QTimerEvent* event)
{
    if (event->timerId() == timer.timerId())
    {
        ++elapsedSeconds;
        ui->lableElapsedTime->setText(QString("Time: %1").arg(QDateTime::fromTime_t(elapsedSeconds).toUTC().toString("hh:mm:ss")));
    }
}

void PuzzleForm::on_buttonQuit_clicked()
{
    close();
}

void PuzzleForm::on_buttonRestart_clicked()
{
    sameGameAgain();
}

void PuzzleForm::puzzleMoved()
{
    numberOfMoves++;
    ui->labelMoves->setText(QString("Moves: %1").arg(numberOfMoves));
    checkResult();
}

void PuzzleForm::on_buttonShuffle_clicked()
{
    reset();
    QList<int*> randPick;
    buttonInitialOrder.clear();
    for (int i=0;i<15;i++)
    {
        randPick<<(new int(i));
    }
    srand (time(NULL));
    int member=15,iSecret;

    for (int i_row=0;i_row<4;i_row++)
    {
        for (int i_col=0;i_col<4;i_col++)
        {
            if(member>=1)
            {
                iSecret = rand() % member + 1;
                int* takenRandNum=randPick.takeAt(iSecret-1);
                ui->gridLayout->addWidget(puzzlePieces.at(*takenRandNum),i_row,i_col,1,1/*,Qt::AlignCenter*/);
                buttonInitialOrder<<*takenRandNum;
                delete takenRandNum;
                member--;
            }
        }
    }
    countScore=true;
}

void PuzzleForm::on_buttonCheat_clicked()
{
    int item=0;
    for(int i_row=0;i_row<4;i_row++)
    {
        for(int i_col=0;i_col<4;i_col++)
        {
            if(item<14)
            {
                ui->gridLayout->addWidget(puzzlePieces.at(item),i_row,i_col,1,1);
                item++;
            }
            else if(item==14)
            {
                ui->gridLayout->addWidget(puzzlePieces.at(item),3,3,1,1);
            }
        }
    }
}

int PuzzleForm::getMoves()
{
    return numberOfMoves;
}

void PuzzleForm::ubMoves(int opa)
{
    numberOfMoves=opa;
}
