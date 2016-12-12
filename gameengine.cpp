#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "gameengine.h"

GameEngine::GameEngine(QObject* parent):QObject (parent)
{

}

void GameEngine::onPuzzlePushed(QPair<int8_t,int8_t> pair)
{


}

void GameEngine::shuffleButtons()
{
    QList<int8_t> tempList;
    srand (time(NULL));
    while (initOrder.count()>0)
    {
        int8_t orderElement = rand() % initOrder.count() + 1;
        tempList<<initOrder.takeAt(orderElement);
    }
    initOrder=tempList;
}
