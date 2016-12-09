#include "puzbutton.h"

PuzButton::PuzButton(QWidget *parent): QPushButton(parent)
{
    connect (this, SIGNAL(clicked(bool)),this,SLOT(findVacant()));
}

void PuzButton::findVacant()
{
    int num=matrix->indexOf(this);
    if(num!=-1)
    {
        int colCount=matrix->columnCount();
        int rowCount=matrix->rowCount();
        int  row, column, rowSpan, columnSpan;
        bool mark=false;
        matrix->getItemPosition(num, &row, &column, &rowSpan, &columnSpan);
        for (int switchVertical=0; switchVertical<=1;switchVertical++)
        {
            if(!mark)
            {
                for(int switchHotizon=-1;switchHotizon<=1;switchHotizon+=2)
                {
                    int tempCol = std::max(column+switchHotizon*switchVertical,0);
                    tempCol=std::min(tempCol,colCount-1);
                    int tempRow = std::max(row+switchHotizon*(1-switchVertical),0);
                    tempRow=std::min(tempRow,rowCount-1);
                    if(matrix->itemAtPosition(tempRow,tempCol)==0)
                    {
                        matrix->addWidget(this,tempRow,tempCol,1,1/*,Qt::AlignCenter*/);
                        emit moved();
                        mark=true;
                        break;
                    }
                }
            }
            else
            {break;}
        }
    }
}


void PuzButton::setMatrix(QGridLayout* someMatrix)
{
    matrix=someMatrix;
}
