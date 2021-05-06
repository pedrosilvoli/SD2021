#include "calculator.h"
#include "ui_calculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool clearTrigger = false;

Calculator::Calculator(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal)); //exibe o resultado da operação, se for no início mostra 0.0
    QPushButton *numButtons[10];
    for( int i =0; i<10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed())); //conecta os botões para registrar se foram apertados
    }
    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPressed())); //conectando os botões de operação às suas funções
    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButtonPressed()));
    connect(ui->ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
    connect(ui->Clear, SIGNAL(released()), this, SLOT(ClearPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::NumPressed(){ //função para mostrar os números apertados
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){ //no começo mostra na tela o valor digitado
        ui->Display->setText(butVal);
    } else { //caso tenha outros números concatena eles
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }

}

void Calculator::MathButtonPressed(){ //função para mudar o trigger do último botão apertado
    //seta todos em 0 para resetar o trigger que pode estar true da operação anterior
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){ //análise dos botões para acionar gatilho
        divTrigger = true;

    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }
    ui->Display->setText(""); //caso algum dos botões seja apertado limpa os números antigos da tela para por o próximo passo da operação
}

void Calculator::EqualButtonPressed(){ // realiza a conta
    double solution = 0.0;
    QString displayVal = ui->Display->text(); //adquire valor para fazer a conta
    double dblDisplayVal = displayVal.toDouble(); //converte pra double

    if(addTrigger || subTrigger || multTrigger || divTrigger){ //se algum dos botões foi apertado
        if(addTrigger){ //se o ultimo apertado foi add
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign(){                                //para fazer contas negativas
    QString displayVal = ui->Display->text();
    QRegExp reg("[-]?[0-9.]*");                                     //Espera um valor com menos os números e decimais
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1* dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}

void Calculator::ClearPressed(){ //botão AC, zera a calculadora assim que apertado
    clearTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    if(QString::compare(butVal, "AC", Qt::CaseInsensitive) == 0){
        calcVal = 0.0;
        ui->Display->setText(QString::number(calcVal));
    }
}
