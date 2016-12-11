#pragma once
#include <QBasicTimer>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

namespace Ui {
class PuzzleForm;
}
class PuzButton;
class PuzzleForm : public QWidget
{
    Q_OBJECT

public:
    explicit PuzzleForm(QWidget *parent = 0);
    ~PuzzleForm();
    void newGame();//интерфейс(это же интерфейс будет называться?) для окна с результатами, чтобы начать новую игру с новой раскладкой.
    void sameGameAgain();//Повтор раунда с исходной раскладкой, но без ведения счета
    int getMoves();
    void ubMoves(int);

private slots:
    void on_buttonShuffle_clicked();
    void on_buttonQuit_clicked();
    void on_buttonRestart_clicked();
    void on_buttonCheat_clicked();//кнопка для экспериментов во время ревью (соритрует кнопки так, чтобы одним движением победить)
    void puzzleMoved();
protected:
    void timerEvent(QTimerEvent *event) override;

private:
    void checkResult(); //Сравнивается текущий порядок размещения кнопок с порядком имен в "puzzlePieces". Если сходятся, то зовется "congratswindow.h"
    void reset();//останавливает таймер, обнуляет счет и текст со сетом справа от сетки с пазлом.
    void startOver();//соритрует кнопки в исходное положение согласно "buttonInitialOrder" и ставит метку "countScore" на false, чтобы статистика этого раунда не учитвалась
    Ui::PuzzleForm *ui;
    QBasicTimer timer; //Таймер на длительность игры

    QList<PuzButton*> puzzlePieces; //Записываются ссылки на кнопки пазла в момент их создания по возрастанию названий (1-15)
    QList<int> buttonInitialOrder; //после "on_buttonRestart_clicked()" записывается порядок кнопок на доске в начале игры
    int numberOfMoves; //Счетчик времени
    int elapsedSeconds; //Счетчик ходов
    bool countScore; //Если игрок начал игру заново с прежней раскладкой кнопок (записанной в "buttonInitialOrder"), то здесь false. А так true.
};

