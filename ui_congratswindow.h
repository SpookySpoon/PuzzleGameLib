/********************************************************************************
** Form generated from reading UI file 'congratswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGRATSWINDOW_H
#define UI_CONGRATSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CongratsWindow
{
public:
    QLabel *lableCheers;
    QGroupBox *groupBoxHistory;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *lableHistYourEff;
    QLabel *lableHistComboMoves;
    QLabel *lableHistComboTime;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *lableHistYour;
    QLabel *lableHistBMoves;
    QLabel *lableHistBTime;
    QPushButton *buttonResetHistory;
    QGroupBox *groupBoxScore;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *lableCurScore;
    QLabel *lableCurScoreMoves;
    QLabel *lableCurScoreTime;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonNewGame;
    QPushButton *buttonTryAgain;
    QPushButton *buttonQuit;

    void setupUi(QDialog *CongratsWindow)
    {
        if (CongratsWindow->objectName().isEmpty())
            CongratsWindow->setObjectName(QStringLiteral("CongratsWindow"));
        CongratsWindow->resize(472, 383);
        CongratsWindow->setMinimumSize(QSize(472, 383));
        CongratsWindow->setMaximumSize(QSize(472, 383));
        lableCheers = new QLabel(CongratsWindow);
        lableCheers->setObjectName(QStringLiteral("lableCheers"));
        lableCheers->setGeometry(QRect(100, 10, 281, 16));
        groupBoxHistory = new QGroupBox(CongratsWindow);
        groupBoxHistory->setObjectName(QStringLiteral("groupBoxHistory"));
        groupBoxHistory->setGeometry(QRect(10, 130, 451, 191));
        layoutWidget = new QWidget(groupBoxHistory);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 113, 411, 61));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lableHistYourEff = new QLabel(layoutWidget);
        lableHistYourEff->setObjectName(QStringLiteral("lableHistYourEff"));

        gridLayout_2->addWidget(lableHistYourEff, 0, 0, 1, 1);

        lableHistComboMoves = new QLabel(layoutWidget);
        lableHistComboMoves->setObjectName(QStringLiteral("lableHistComboMoves"));

        gridLayout_2->addWidget(lableHistComboMoves, 1, 0, 1, 1);

        lableHistComboTime = new QLabel(layoutWidget);
        lableHistComboTime->setObjectName(QStringLiteral("lableHistComboTime"));
        lableHistComboTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lableHistComboTime, 1, 1, 1, 1, Qt::AlignRight);

        layoutWidget1 = new QWidget(groupBoxHistory);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 411, 61));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lableHistYour = new QLabel(layoutWidget1);
        lableHistYour->setObjectName(QStringLiteral("lableHistYour"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lableHistYour->sizePolicy().hasHeightForWidth());
        lableHistYour->setSizePolicy(sizePolicy);
        lableHistYour->setMinimumSize(QSize(80, 20));

        gridLayout->addWidget(lableHistYour, 0, 0, 1, 1);

        lableHistBMoves = new QLabel(layoutWidget1);
        lableHistBMoves->setObjectName(QStringLiteral("lableHistBMoves"));
        sizePolicy.setHeightForWidth(lableHistBMoves->sizePolicy().hasHeightForWidth());
        lableHistBMoves->setSizePolicy(sizePolicy);
        lableHistBMoves->setMinimumSize(QSize(80, 20));

        gridLayout->addWidget(lableHistBMoves, 1, 0, 1, 1);

        lableHistBTime = new QLabel(layoutWidget1);
        lableHistBTime->setObjectName(QStringLiteral("lableHistBTime"));
        sizePolicy.setHeightForWidth(lableHistBTime->sizePolicy().hasHeightForWidth());
        lableHistBTime->setSizePolicy(sizePolicy);
        lableHistBTime->setMinimumSize(QSize(80, 20));
        lableHistBTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lableHistBTime, 1, 1, 1, 1, Qt::AlignRight);

        buttonResetHistory = new QPushButton(groupBoxHistory);
        buttonResetHistory->setObjectName(QStringLiteral("buttonResetHistory"));
        buttonResetHistory->setGeometry(QRect(359, 1, 91, 20));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonResetHistory->sizePolicy().hasHeightForWidth());
        buttonResetHistory->setSizePolicy(sizePolicy1);
        buttonResetHistory->setMinimumSize(QSize(80, 10));
        buttonResetHistory->setMaximumSize(QSize(100, 40));
        buttonResetHistory->setBaseSize(QSize(80, 10));
        groupBoxScore = new QGroupBox(CongratsWindow);
        groupBoxScore->setObjectName(QStringLiteral("groupBoxScore"));
        groupBoxScore->setGeometry(QRect(30, 40, 411, 81));
        layoutWidget2 = new QWidget(groupBoxScore);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 391, 41));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lableCurScore = new QLabel(layoutWidget2);
        lableCurScore->setObjectName(QStringLiteral("lableCurScore"));

        gridLayout_3->addWidget(lableCurScore, 0, 0, 1, 1);

        lableCurScoreMoves = new QLabel(layoutWidget2);
        lableCurScoreMoves->setObjectName(QStringLiteral("lableCurScoreMoves"));

        gridLayout_3->addWidget(lableCurScoreMoves, 1, 0, 1, 1);

        lableCurScoreTime = new QLabel(layoutWidget2);
        lableCurScoreTime->setObjectName(QStringLiteral("lableCurScoreTime"));
        lableCurScoreTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lableCurScoreTime, 1, 1, 1, 1, Qt::AlignRight);

        layoutWidget3 = new QWidget(CongratsWindow);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 340, 451, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonNewGame = new QPushButton(layoutWidget3);
        buttonNewGame->setObjectName(QStringLiteral("buttonNewGame"));

        horizontalLayout->addWidget(buttonNewGame);

        buttonTryAgain = new QPushButton(layoutWidget3);
        buttonTryAgain->setObjectName(QStringLiteral("buttonTryAgain"));

        horizontalLayout->addWidget(buttonTryAgain);

        buttonQuit = new QPushButton(layoutWidget3);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));

        horizontalLayout->addWidget(buttonQuit);


        retranslateUi(CongratsWindow);

        QMetaObject::connectSlotsByName(CongratsWindow);
    } // setupUi

    void retranslateUi(QDialog *CongratsWindow)
    {
        CongratsWindow->setWindowTitle(QApplication::translate("CongratsWindow", "Form", 0));
        lableCheers->setText(QApplication::translate("CongratsWindow", "Congratulations, you have solved a broblem!", 0));
        groupBoxHistory->setTitle(QApplication::translate("CongratsWindow", "History", 0));
        lableHistYourEff->setText(QApplication::translate("CongratsWindow", "Your most effecient game:", 0));
        lableHistComboMoves->setText(QApplication::translate("CongratsWindow", "Number of moves:", 0));
        lableHistComboTime->setText(QApplication::translate("CongratsWindow", "Time: 00:00:00", 0));
        lableHistYour->setText(QApplication::translate("CongratsWindow", "Your best score:", 0));
        lableHistBMoves->setText(QApplication::translate("CongratsWindow", "The least number of moves:", 0));
        lableHistBTime->setText(QApplication::translate("CongratsWindow", "Your best time: 00:00:00", 0));
        buttonResetHistory->setText(QApplication::translate("CongratsWindow", "Reset history", 0));
        groupBoxScore->setTitle(QApplication::translate("CongratsWindow", "Game score", 0));
        lableCurScore->setText(QApplication::translate("CongratsWindow", "Your current score:", 0));
        lableCurScoreMoves->setText(QApplication::translate("CongratsWindow", "Number of moves: 0", 0));
        lableCurScoreTime->setText(QApplication::translate("CongratsWindow", "Time: 00:00:00", 0));
        buttonNewGame->setText(QApplication::translate("CongratsWindow", "Play new game", 0));
        buttonTryAgain->setText(QApplication::translate("CongratsWindow", "Try again (no score)", 0));
        buttonQuit->setText(QApplication::translate("CongratsWindow", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class CongratsWindow: public Ui_CongratsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGRATSWINDOW_H
