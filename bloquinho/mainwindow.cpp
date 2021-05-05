#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this ->setCentralWidget(ui->textEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNovo_triggered() //define o que ocorre quando clica no botão Novo
{
    arq_local="";
    ui->textEdit->clear(); //limpa a tela ao abrir um novo arquivo
    ui->textEdit->setFocus(); //coloca ou reposiciona o cursor na tela

}

void MainWindow::on_actionAbrir_triggered()
{
    QString filtro="Todos Arquivos (*.*) ;; Arquivos de texto (*.txt)"; //filtro de arquivos
    QString arq_nome=QFileDialog::getOpenFileName(this,"Abrir",QDir::homePath(),filtro); //abre a caixa de diálogo para selecionar o arquivo e obtem o endereço
    QFile arq(arq_nome);
    arq_local=arq_nome;

    if(!arq.open(QFile::ReadOnly | QFile::Text)){//caso o arquivo não seja aberto e flags para abrir

        QMessageBox::warning(this, "Erro!", "O arquivo selecionado não pôde ser aberto");
        return;
    }
    QTextStream entrada(&arq);//abre o arquivo
    QString texto= entrada.readAll(); //recebe todo o conteúdo lido em formato de strg
    ui->textEdit->setText(texto); //coloca o texto na interface
    arq.close();
}

void MainWindow::on_actionSalvar_Como_triggered()
{
    QString filtro="Todos Arquivos (*.*) ;; Arquivos de texto (*.txt)";
    QString arq_nome=QFileDialog::getSaveFileName(this, "Salvar Como...",QDir::homePath(),filtro); //obtem local e nome
    QFile arq(arq_nome);
    if(!arq.open(QFile::WriteOnly | QFile::Text)){//caso o arquivo não seja aberto e flags para abrir

        QMessageBox::warning(this, "Erro!", "O arquivo selecionado não pôde ser salvo");
        return;


}

    QTextStream saida(&arq);//abre o arquivo
    QString texto= ui->textEdit->toPlainText();//recebe todo o conteúdo da tela e passa pra saída
    saida << texto; //passando conteúdo pra saída
    arq.flush();//salvar como
    arq.close();

}
