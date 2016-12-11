#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "puzzleengine.h"

PuzzleEngine::PuzzleEngine(QObject* parent):QObject (parent)
{

}

void PuzzleEngine::onPuzzlePushed(QPair<int8_t,int8_t> pair)
{


}

void PuzzleEngine::shuffleButtons()
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
