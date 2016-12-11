#pragma once
#include <QObject>

class ScoreHandler: public QObject
{
    Q_OBJECT
public:
    ScoreHandler(QObject* parent=nullptr);
private:
    int gameTime;
    int gameMoves;
    int bestGameTime;
    int bestGameMoves;
    int bestComboGameTime;
    int bestComboGameMoves;
    void compareGameScoreWithHistory();
    void reportData();
private slots:
    void initializeScoreData(QPair<int,int>);
    void resetHistory();
signals:
    void gameTime(int);
    void gameMoves(int);
    void bestGameTime(int);
    void bestGameMoves(int);
    void bestComboGameTime(int);
    void bestComboGameMoves(int);
};
