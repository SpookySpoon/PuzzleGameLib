#pragma once
#include <QPushButton>
#include <QGridLayout>

class PuzButton: public QPushButton
{
    Q_OBJECT
    QGridLayout* matrix = nullptr;
public:
    PuzButton(QWidget *parent = nullptr);
    void setMatrix(QGridLayout* matrix= nullptr);
private slots:
    void findVacant();
signals:
    void moved();
};

