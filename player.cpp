#include "player.h"
#include "saida.h"
#include "inimigo.h"
#include "bau.h"
#include "loja.h"
#include <QKeyEvent>
#include <QList>
#include <QDebug>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <windows.h>

int Player::getPontoUpgrade() const
{
    return pontoUpgrade;
}

void Player::setPontoUpgrade(int value)
{
    pontoUpgrade = value;
}

int Player::getNivel() const
{
    return nivel;
}

void Player::setNivel(int value)
{
    nivel = value;
}

int Player::getCapacete() const
{
    return capacete;
}

void Player::setCapacete(int value)
{
    capacete = value;
}

int Player::getEspada() const
{
    return espada;
}

void Player::setEspada(int value)
{
    espada = value;
}

int Player::getPeitoral() const
{
    return peitoral;
}

void Player::setPeitoral(int value)
{
    peitoral = value;
}

int Player::getPotion() const
{
    return potion;
}

void Player::setPotion(int value)
{
    potion = value;
}

void Player::initPlayer(){

    this->setNivel(0);
    this->setEspada(1);
    this->setPotion(0);
    this->setCapacete(1);
    this->setPeitoral(1);
    this->setPontoUpgrade(10);
    this->setLife(5);
    this->setMaxLife(5);
    this->setForca(1);
    this->maxLifeBar.setRect(0,550,this->getMaxLife()*30,25);
    this->maxLifeBar.setBrush(QBrush(Qt::darkRed));
    this->scene()->addItem(&maxLifeBar);

    this->lifeBar.setRect(0,550,this->getLife()*30,20);
    this->lifeBar.setBrush(QBrush(Qt::red));
    this->scene()->addItem(&lifeBar);
    qDebug()<<getLife();
}

void Player :: atualizaPontos(){ // PASSA OS PONTOS DO JOGADOR PARA O MENU
    this->mainMenu.setPontosUgrade(this->pontoUpgrade);
    this->mainMenu.set_pontosUp(this->mainMenu.getPontosUgrade());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setNivel(this->nivel);
    this->mainMenu.set_pontosNivel(this->mainMenu.getNivel());

    this->mainMenu.setMaxLife(this->getMaxLife());
    this->mainMenu.set_pontosMaxLife(this->mainMenu.getMaxLife());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setLife(this->getLife());
    this->mainMenu.set_pontosLife(this->mainMenu.getLife());

    this->mainMenu.setForca(this->getForca());
    this->mainMenu.set_pontosForca(this->mainMenu.getForca());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setDefesa(this->getDefesa());
    this->mainMenu.set_pontosDefesa(this->mainMenu.getDefesa());

    this->mainMenu.setCapacete(this->capacete);
    this->mainMenu.set_pontosCapacete(this->mainMenu.getCapacete());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setEspada(this->espada);
    this->mainMenu.set_pontosEspada(this->mainMenu.getEspada());

    this->mainMenu.setPeitoral(this->peitoral);
    this->mainMenu.set_pontosPeitoral(this->mainMenu.getPeitoral());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setPotion(this->potion);
    this->mainMenu.set_pontosPotion(this->mainMenu.getPotion());

}

void Player :: atualizaPlayer(){ // PASSA OS DADOS DO MENU PARA O JOGADOR
    this->setEspada(this->mainMenu.getEspada());
    this->setPotion(this->mainMenu.getPotion());
    this->setCapacete(this->mainMenu.getCapacete());
    this->setPeitoral(this->mainMenu.getPeitoral());
    this->setLife(this->mainMenu.getLife());
    this->setMaxLife(this->mainMenu.getMaxLife());
    this->setDefesa(this->mainMenu.getDefesa());
    this->setForca(this->mainMenu.getForca());
    this->setPontoUpgrade(this->mainMenu.getPontosUgrade());
    this->setNivel(this->mainMenu.getNivel());

    this->lifeBar.setRect(0,550,this->getLife()*30,20);
    this->maxLifeBar.setRect(0,550,this->getMaxLife()*30,25);
}


int inimigos_mapa = -1; //
int quant = 0;          //  GLOBAIS
int PISO_ATUAL = 0;     //


void Player::criainimigo(){
    quant = PISO_ATUAL + rand()%3;
    if(PISO_ATUAL > 5){
        quant = quant -2;
    }
    if(quant == 0){
        quant = 1;
    }
    for(int i =0; i < quant; i++){
        Inimigo * bolsonaro = new Inimigo();
        scene()->addItem(bolsonaro);
    }

}





void Player::keyPressEvent(QKeyEvent *event){
    if(inimigos_mapa == -1){
        criainimigo();
        inimigos_mapa = quant;
    }

    this->lifeBar.setRect(0,550,this->getLife()*30,20);             // ISSO ATUALIZA A BARRA DE
    this->maxLifeBar.setRect(0,550,this->getMaxLife()*30,25);       //  VIDAAAAAAA


    if (event->key() == Qt::Key_Escape){    // esc quita do game
        exit(1);
    }

    if (event->key() == Qt::Key_Backspace){     // backspace abre menu
        if(PISO_ATUAL % 5 == 0 || true){  //SO PODE ABRIR O MENU NO PISO DA LOJA
            atualizaPontos();
            mainMenu.show();
            atualizaPlayer();
            this->setFocus();
            atualizaPlayer();
        }
    }

    if (event->key() == Qt::Key_Left){
        atualizaPlayer();
        if(x() == -360){
            setPos(x(),y());
            }else{
                setPos(x()-40,y());

            }
        }

        else if (event->key() == Qt::Key_Right){
        atualizaPlayer();
            if(x() == 40){
                setPos(x(),y());
            }else{
                setPos(x()+40,y());
            }
        }

        else if (event->key() == Qt::Key_Up){
        atualizaPlayer();
            if(y() == -360){
                setPos(x(),y());
            }else{
                setPos(x(),y()-40);
            }
        }

        else if (event->key() == Qt::Key_Down){
        atualizaPlayer();
            if(y() == 40){
                setPos(x(),y());
            }else{
                setPos(x(),y()+40);
            }
        }

        QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int  i = 0, n = colliding_items.size(); i < n; i++){

            if(typeid(*(colliding_items[i]))== typeid (Saida)){

                if(inimigos_mapa == 0){
                    PISO_ATUAL = PISO_ATUAL + 1;
                    if(PISO_ATUAL == 2 or PISO_ATUAL == 4 or PISO_ATUAL == 9){
                        Bau * bau = new Bau();
                        scene()->addItem(bau);
                        inimigos_mapa = inimigos_mapa + 1;

                    }else if(PISO_ATUAL == 5 or PISO_ATUAL == 10){
                        Loja * loja = new Loja();
                        scene()->addItem(loja);
                        inimigos_mapa = inimigos_mapa + 1;

                    }else{
                        criainimigo();
                        inimigos_mapa = inimigos_mapa + quant;
                   }
                   setPos(0, 0);

                }
            };

           if(typeid(*(colliding_items[i]))== typeid (Inimigo)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;

            };

           if(typeid(*(colliding_items[i]))== typeid (Bau)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;  //SÓ SAI DA SALA SE PEGAR O BAU
                // AKI SE FAZ UM SISTEMA Q ADICIONA ALHO NA MOCHILA

           }

           if(typeid(*(colliding_items[i]))== typeid (Loja)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;  //SÓ SAI DA SALA SE PEGAR O ALEx, digo ,a loja

           }
        }

  }



