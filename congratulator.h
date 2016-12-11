#pragma once
#include <QPair>
#include <QObject>


class Congratulator: public QObject
{
    Q_OBJECT
public:
    Congratulator(QObject* parent=nullptr);
private slots:

signals:
    void tryAgain();
    void newGame();

};

