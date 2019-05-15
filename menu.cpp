#include "menu.h"
#include "ui_menu.h"
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QSound>

int Menu::getMaxLife() const
{
    return MaxLife;
}

void Menu::setMaxLife(int value)
{
    MaxLife = value;
}

int Menu::getLife() const
{
    return life;
}

void Menu::setLife(int value)
{
    life = value;
}

int Menu::getDefesa() const
{
    return defesa;
}

void Menu::setDefesa(int value)
{
    defesa = value;
}

int Menu::getForca() const
{
    return forca;
}

void Menu::setForca(int value)
{
    forca = value;
}

int Menu::getCapacete() const
{
    return capacete;
}

void Menu::setCapacete(int value)
{
    capacete = value;
}

int Menu::getEspada() const
{
    return espada;
}

void Menu::setEspada(int value)
{
    espada = value;
}

int Menu::getPotion() const
{
    return potion;
}

void Menu::setPotion(int value)
{
    potion = value;
}

int Menu::getPeitoral() const
{
    return peitoral;
}

void Menu::setPeitoral(int value)
{
    peitoral = value;
}

int Menu::getPontosUgrade() const
{
    return pontosUgrade;
}

void Menu::setPontosUgrade(int value)
{
    pontosUgrade = value;
}

int Menu::getNivel() const
{
    return Nivel;
}

void Menu::setNivel(int value)
{
    Nivel = value;
}

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    this->setGeometry(QRect(QApplication::desktop()->screenGeometry()));
    ui->setupUi(this);

}

Menu::~Menu()
{
    delete ui;
}

void Menu::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Backspace){    // backspace quita do menu
        this->close();
        atualizaPontos();
    }
}

void Menu::on_pushButton_clicked()
{
    QSound::play(":/png/imagens/ahh.wav");
    this->close();
}

void Menu :: atualizaPontos(){ // PASSA OS PONTOS DO JOGADOR PARA O MENU
    this->set_pontosUp(this->getPontosUgrade());// SE TEM _ NO NOME È DO GRAFICO
    this->set_pontosNivel(this->getNivel());
    this->set_pontosMaxLife(this->getMaxLife());// SE TEM _ NO NOME È DO GRAFICo
    this->set_pontosLife(this->getLife());
    this->set_pontosForca(this->getForca());// SE TEM _ NO NOME È DO GRAFIC
    this->set_pontosDefesa(this->getDefesa());
    this->set_pontosCapacete(this->getCapacete());// SE TEM _ NO NOME È DO GRAFICO
    this->set_pontosEspada(this->getEspada());
    this->set_pontosPeitoral(this->getPeitoral());// SE TEM _ NO NOME È DO GRAFICO
    this->set_pontosPotion(this->getPotion());

}

void Menu :: set_pontosUp(int pontos){
    this->ui->L_pontosUp->setText( QString::number(pontos) );
}

void Menu :: set_pontosLife(int pontos){
    this->ui->L_hp->setText(QString::number(pontos));
}

void Menu :: set_pontosForca(int pontos){
    this->ui->L_forca->setText(QString::number(pontos));
}


void Menu :: set_pontosNivel(int pontos){

}
void Menu :: set_pontosMaxLife(int pontos){

}
void Menu :: set_pontosDefesa(int pontos){
    this->ui->L_defesa->setText(QString::number(pontos));
}
void Menu :: set_pontosCapacete(int pontos){
    this->ui->L_capacete->setText(QString::number(pontos));
}
void Menu :: set_pontosEspada(int pontos){
    this->ui->L_espada->setText(QString::number(pontos));
}
void Menu :: set_pontosPeitoral(int pontos){
    this->ui->L_peitoral->setText(QString::number(pontos));
}
void Menu :: set_pontosPotion(int pontos){
}


void Menu::on_B_hp_menos_clicked()
{
    if(this->life > 1){
        this->MaxLife --;
        this->life --;
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_hp_mais_clicked()
{
    if(this->pontosUgrade > 0 && this->life < 15){
        this->MaxLife ++;
        this->life ++;
        this->pontosUgrade --;
    }

    this->atualizaPontos();
}

void Menu::on_B_forca_menos_clicked()
{

    if(this->getForca() > 1){
        this->setForca( this->getForca() - 1);
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_forca_mais_clicked()
{
    if(this->pontosUgrade > 0){
        this->setForca( this->getForca() + 1);
        this->pontosUgrade --;
    }

    this->atualizaPontos();
}

void Menu::on_B_defesa_menos_clicked()
{
    if(this->getDefesa() > 1){
        this->setDefesa( this->getDefesa() - 1);
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_defesa_mais_clicked()
{
    if(this->pontosUgrade > 0 and this->defesa <10){
        this->setDefesa( this->getDefesa() + 1);
        this->pontosUgrade --;
    }
    this->atualizaPontos();
}

void Menu::on_B_capacete_menos_clicked()
{
    if(this->capacete > 1){
        this->capacete = this->capacete - 1;
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_capacete_mais_clicked()
{
    if(this->pontosUgrade > 0){
        this->capacete ++;
        this->pontosUgrade --;
    }
    this->atualizaPontos();
}

void Menu::on_B_espada_menos_clicked()
{
    if(this->espada > 1){
        this->espada = this->espada - 1;
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_espada_mais_clicked()
{
    if(this->pontosUgrade > 0){
        this->espada ++;
        this->pontosUgrade --;
    }
    this->atualizaPontos();
}

void Menu::on_B_peitoral_menos_clicked()
{
    if(this->peitoral > 1){
        this->peitoral = this->peitoral - 1;
        this->pontosUgrade ++;
    }
    this->atualizaPontos();
}

void Menu::on_B_peitoral_mais_clicked()
{
    if(this->pontosUgrade > 0){
        this->peitoral ++;
        this->pontosUgrade --;
    }
    this->atualizaPontos();
}
