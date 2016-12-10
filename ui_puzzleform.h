/********************************************************************************
** Form generated from reading UI file 'puzzleform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUZZLEFORM_H
#define UI_PUZZLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "puzbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PuzzleForm
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonShuffle;
    QPushButton *buttonRestart;
    QSpacerItem *verticalSpacer_2;
    QPushButton *buttonQuit;
    QSpacerItem *spacer;
    QLabel *lableElapsedTime;
    QLabel *labelMoves;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonCheat;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    PuzButton *pushButton;
    PuzButton *pushButton_2;
    PuzButton *pushButton_3;
    PuzButton *pushButton_4;
    PuzButton *pushButton_5;
    PuzButton *pushButton_6;
    PuzButton *pushButton_7;
    PuzButton *pushButton_8;
    PuzButton *pushButton_9;
    PuzButton *pushButton_10;
    PuzButton *pushButton_11;
    PuzButton *pushButton_12;
    PuzButton *pushButton_13;
    PuzButton *pushButton_14;
    PuzButton *pushButton_15;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *PuzzleForm)
    {
        if (PuzzleForm->objectName().isEmpty())
            PuzzleForm->setObjectName(QStringLiteral("PuzzleForm"));
        PuzzleForm->resize(581, 512);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(PuzzleForm->sizePolicy().hasHeightForWidth());
        PuzzleForm->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(PuzzleForm);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonShuffle = new QPushButton(PuzzleForm);
        buttonShuffle->setObjectName(QStringLiteral("buttonShuffle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonShuffle->sizePolicy().hasHeightForWidth());
        buttonShuffle->setSizePolicy(sizePolicy1);
        buttonShuffle->setMinimumSize(QSize(80, 25));
        buttonShuffle->setSizeIncrement(QSize(0, 0));
        buttonShuffle->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(buttonShuffle);

        buttonRestart = new QPushButton(PuzzleForm);
        buttonRestart->setObjectName(QStringLiteral("buttonRestart"));
        sizePolicy1.setHeightForWidth(buttonRestart->sizePolicy().hasHeightForWidth());
        buttonRestart->setSizePolicy(sizePolicy1);
        buttonRestart->setMinimumSize(QSize(80, 25));

        verticalLayout->addWidget(buttonRestart);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonQuit = new QPushButton(PuzzleForm);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));
        sizePolicy1.setHeightForWidth(buttonQuit->sizePolicy().hasHeightForWidth());
        buttonQuit->setSizePolicy(sizePolicy1);
        buttonQuit->setMinimumSize(QSize(80, 25));

        verticalLayout->addWidget(buttonQuit);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(spacer);

        lableElapsedTime = new QLabel(PuzzleForm);
        lableElapsedTime->setObjectName(QStringLiteral("lableElapsedTime"));

        verticalLayout->addWidget(lableElapsedTime);

        labelMoves = new QLabel(PuzzleForm);
        labelMoves->setObjectName(QStringLiteral("labelMoves"));

        verticalLayout->addWidget(labelMoves);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonCheat = new QPushButton(PuzzleForm);
        buttonCheat->setObjectName(QStringLiteral("buttonCheat"));

        verticalLayout->addWidget(buttonCheat);

        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(7, 11);

        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new PuzButton(PuzzleForm);
        buttonGroup = new QButtonGroup(PuzzleForm);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(70, 70));
        pushButton->setMaximumSize(QSize(7000, 7000));
        pushButton->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(70, 70));
        pushButton_2->setMaximumSize(QSize(7000, 7000));
        pushButton_2->setSizeIncrement(QSize(1, 1));
        pushButton_2->setFlat(false);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(70, 70));
        pushButton_3->setMaximumSize(QSize(7000, 7000));
        pushButton_3->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMinimumSize(QSize(70, 70));
        pushButton_4->setMaximumSize(QSize(7000, 7000));
        pushButton_4->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_5 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMinimumSize(QSize(70, 70));
        pushButton_5->setMaximumSize(QSize(7000, 7000));
        pushButton_5->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_6 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setMinimumSize(QSize(70, 70));
        pushButton_6->setMaximumSize(QSize(7000, 7000));
        pushButton_6->setSizeIncrement(QSize(1, 1));
        pushButton_6->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_7 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(true);
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setMinimumSize(QSize(70, 70));
        pushButton_7->setMaximumSize(QSize(7000, 7000));
        pushButton_7->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_8 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_8);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setMinimumSize(QSize(70, 70));
        pushButton_8->setMaximumSize(QSize(7000, 7000));
        pushButton_8->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_9 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setMinimumSize(QSize(70, 70));
        pushButton_9->setMaximumSize(QSize(7000, 7000));
        pushButton_9->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_10 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setMinimumSize(QSize(70, 70));
        pushButton_10->setMaximumSize(QSize(7000, 7000));
        pushButton_10->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_10, 2, 1, 1, 1);

        pushButton_11 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);
        pushButton_11->setMinimumSize(QSize(70, 70));
        pushButton_11->setMaximumSize(QSize(7000, 7000));
        pushButton_11->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_12 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_12);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);
        pushButton_12->setMinimumSize(QSize(70, 70));
        pushButton_12->setMaximumSize(QSize(7000, 7000));
        pushButton_12->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_12, 2, 3, 1, 1);

        pushButton_13 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_13);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        sizePolicy2.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy2);
        pushButton_13->setMinimumSize(QSize(70, 70));
        pushButton_13->setMaximumSize(QSize(7000, 7000));
        pushButton_13->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_13, 3, 0, 1, 1);

        pushButton_14 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_14);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);
        pushButton_14->setMinimumSize(QSize(70, 70));
        pushButton_14->setMaximumSize(QSize(7000, 7000));
        pushButton_14->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_14, 3, 1, 1, 1);

        pushButton_15 = new PuzButton(PuzzleForm);
        buttonGroup->addButton(pushButton_15);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);
        pushButton_15->setMinimumSize(QSize(70, 70));
        pushButton_15->setMaximumSize(QSize(7000, 7000));
        pushButton_15->setSizeIncrement(QSize(1, 1));

        gridLayout->addWidget(pushButton_15, 3, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 10);

        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(PuzzleForm);

        QMetaObject::connectSlotsByName(PuzzleForm);
    } // setupUi

    void retranslateUi(QWidget *PuzzleForm)
    {
        PuzzleForm->setWindowTitle(QApplication::translate("PuzzleForm", "Form", 0));
        buttonShuffle->setText(QApplication::translate("PuzzleForm", "Shuffle", 0));
        buttonRestart->setText(QApplication::translate("PuzzleForm", "Restart", 0));
        buttonQuit->setText(QApplication::translate("PuzzleForm", "Quit", 0));
        lableElapsedTime->setText(QApplication::translate("PuzzleForm", "Time: 00:00:00", 0));
        labelMoves->setText(QApplication::translate("PuzzleForm", "Moves: 0", 0));
        buttonCheat->setText(QApplication::translate("PuzzleForm", "Cheat", 0));
        pushButton->setText(QApplication::translate("PuzzleForm", "1", 0));
        pushButton_2->setText(QApplication::translate("PuzzleForm", "2", 0));
        pushButton_3->setText(QApplication::translate("PuzzleForm", "3", 0));
        pushButton_4->setText(QApplication::translate("PuzzleForm", "4", 0));
        pushButton_5->setText(QApplication::translate("PuzzleForm", "5", 0));
        pushButton_6->setText(QApplication::translate("PuzzleForm", "6", 0));
        pushButton_7->setText(QApplication::translate("PuzzleForm", "7", 0));
        pushButton_8->setText(QApplication::translate("PuzzleForm", "8", 0));
        pushButton_9->setText(QApplication::translate("PuzzleForm", "9", 0));
        pushButton_10->setText(QApplication::translate("PuzzleForm", "10", 0));
        pushButton_11->setText(QApplication::translate("PuzzleForm", "11", 0));
        pushButton_12->setText(QApplication::translate("PuzzleForm", "12", 0));
        pushButton_13->setText(QApplication::translate("PuzzleForm", "13", 0));
        pushButton_14->setText(QApplication::translate("PuzzleForm", "14", 0));
        pushButton_15->setText(QApplication::translate("PuzzleForm", "15", 0));
    } // retranslateUi

};

namespace Ui {
    class PuzzleForm: public Ui_PuzzleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUZZLEFORM_H
