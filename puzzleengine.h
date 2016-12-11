#pragma once
#include <QObject>

class PuzzleEngine: public QObject
{
    Q_OBJECT
public:
    PuzzleEngine(QObject* parent=nullptr);
private slots:
    void onPuzzlePushed(QPair<int8_t,int8_t>);
private:
    QList<int8_t> initOrder;
    bool gameRegime;
    void shuffleButtons();
signals:
    void disposition(QList<int8_t>);
    void stats(QPair<bool,QPair<int16_t,int16_t>>);
};

