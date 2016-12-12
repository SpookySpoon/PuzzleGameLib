#include "scorehandler.h"
#include "scoremanager.h"

ScoreHandler::ScoreHandler(QObject *parent):QObject (parent)
{}

void ScoreHandler::initScoreData(QPair<int,int> results)
{
    scoreManager::updateScore(gameTime,gameMoves);
    inputData(results);
}

void ScoreHandler::initScoreDataNoRecord(QPair<int,int> results)
{
    inputData(results);
}

void ScoreHandler::inputData(QPair<int,int> results)
{
    gameTime=results.first;
    gameMoves=results.second;
    QList<int> history=scoreManager::getScore();
    bestGameTime=history.at(0);
    bestGameMoves=history.at(1);
    bestComboGameTime=history.at(2);
    bestComboGameMoves=history.at(3);
    reportData();
    emit statsReady();
}

void ScoreHandler::reportData()
{
    emit reportGameTime(gameTime);
    emit reportGameMoves(gameMoves);
    emit reportBestGameTime(bestGameTime);
    emit reportBestGameMoves(bestGameMoves);
    emit reportBestComboGameTime(bestComboGameTime);
    emit reportBestComboGameMoves(bestComboGameMoves);
}
