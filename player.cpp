#include "player.h"
#include "saida.h"
#include "inimigo.h"
#include "bau.h"
#include "loja.h"
#include "chefes.h"
#include "tela_piso.h"
#include <QKeyEvent>
#include <QList>
#include <QDebug>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QSound>
#include <windows.h>

int Player::dano = 1;

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

void Player::imprime(){
    qDebug()<< getDefesa() << getLife() << getMaxLife() << getForca() << this->nivel << this->pontoUpgrade << this->potion;
}

void Player::initPlayer(){

    this->setNivel(0);
    this->setEspada(1);
    this->setPotion(0);
    this->setCapacete(1);
    this->setPeitoral(1);
    this->setPontoUpgrade(0);
    this->setLife(5);
    this->setMaxLife(5);
    this->setForca(1);
    this->setDefesa(0);

     mainMenu.setNivel(0);
     mainMenu.setEspada(1);
     mainMenu.setPotion(0);
     mainMenu.setCapacete(1);
     mainMenu.setPeitoral(1);
     mainMenu.setPontosUgrade(0);
     mainMenu.setLife(5);
     mainMenu.setMaxLife(5);
     mainMenu.setForca(1);

    this->maxLifeBar.setRect(0,550,this->getMaxLife()*30,25);
    this->maxLifeBar.setBrush(QBrush(Qt::darkRed));
    this->scene()->addItem(&maxLifeBar);

    this->lifeBar.setRect(0,550,this->getLife()*30,20);
    this->lifeBar.setBrush(QBrush(Qt::red));
    this->scene()->addItem(&lifeBar);

}

void Player::initplayer(int nivel,int espada, int potion, int capacete, int peitoral, int pontoUpgrade, int life, int MaxLife, int forca){

    this->setNivel(nivel);
    this->setEspada(espada);
    this->setPotion(potion);
    this->setCapacete(capacete);
    this->setPeitoral(peitoral);
    this->setPontoUpgrade(pontoUpgrade);
    this->setLife(life);
    this->setMaxLife(MaxLife);
    this->setForca(forca);

}

void Player :: atualizaPontos(){ // PASSA OS PONTOS DO JOGADOR PARA O MENU
    this->mainMenu.setPontosUgrade(this->pontoUpgrade);
    this->mainMenu.set_pontosUp(this->mainMenu.getPontosUgrade());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setNivel(this->nivel);
    this->mainMenu.set_pontosNivel(this->mainMenu.getNivel());

    this->mainMenu.setMaxLife(this->getMaxLife());
    this->mainMenu.set_pontosMaxLife(this->mainMenu.getMaxLife());// SE TEM _ NO NOME È DO GRAFICO

    this->mainMenu.setLife(this->getLife());
    this->mainMenu.set_pontosLife(this->mainMenu.getMaxLife());

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

void Player::Volta(){

    setRect(400, 400, 40, 40);
    setPos(x(), y());
    QPixmap ricardo_png(QPixmap(":/png/imagens/ricardo.png"));
    setBrush(QBrush(ricardo_png));


}

void Player::keyPressEvent(QKeyEvent *event){

    scene()->addItem(telaPiso);
    telaPiso->setPiso(PISO_ATUAL);

    if(inimigos_mapa == -1){
        criainimigo();
        inimigos_mapa = quant;
    }

    this->lifeBar.setRect(0,550,this->getLife()*30,20);
    this->maxLifeBar.setRect(0,550,this->getMaxLife()*30,25);


    if (event->key() == Qt::Key_Escape){
        exit(1);
    }

    if (event->key() == Qt::Key_Backspace){
        if(PISO_ATUAL % 5 == 0 ){
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

        else if(event->key() == Qt::Key_Space){
            atualizaPlayer();
            QPixmap ataque_png(QPixmap(":/png/imagens/ataque.png"));
            setRect(360, 360, 120, 120);
            setPos(x(), y());
            setBrush(QPixmap(":/png/imagens/ataque.png"));

            QList<QGraphicsItem *> colliding_items = collidingItems();
            for(int  i = 0, n = colliding_items.size(); i < n; i++){
                    if(typeid(*(colliding_items[i]))== typeid (Inimigo)){
                    scene()->removeItem(colliding_items[i]);
                    delete (colliding_items[i]);
                    inimigos_mapa = inimigos_mapa - 1;
                    mainMenu.setPontosUgrade(mainMenu.getPontosUgrade()+1);
                }
                    if(typeid(*(colliding_items[i]))== typeid (Chefes)){
                    scene()->removeItem(colliding_items[i]);
                    delete (colliding_items[i]);
                    inimigos_mapa = inimigos_mapa - 1;
                }
            }
            QTimer * timer = new QTimer();
            connect(timer, SIGNAL(timeout()), this, SLOT(Volta()));

            timer->start(1500);


        }

        QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int  i = 0, n = colliding_items.size(); i < n; i++){

            if(typeid(*(colliding_items[i]))== typeid (Saida)){
                if(inimigos_mapa == 0){
                    PISO_ATUAL = PISO_ATUAL + 1;
                    telaPiso->setPiso(PISO_ATUAL);
                    if(PISO_ATUAL == 2 or PISO_ATUAL == 4 or PISO_ATUAL == 9){
                        Bau * bau = new Bau();
                        scene()->addItem(bau);
                        inimigos_mapa = inimigos_mapa + 1;

                    }else if(PISO_ATUAL == 5 or PISO_ATUAL == 10){
                        Loja * loja = new Loja();
                        scene()->addItem(loja);
                        inimigos_mapa = inimigos_mapa + 1;

                    }else if(PISO_ATUAL == 11){
                        Chefes * chefe = new Chefes();
                        scene()->addItem(chefe);
                        chefe->setPos(160, 160);
                        inimigos_mapa = inimigos_mapa + 1;

                    }else if(PISO_ATUAL > 11){
                        exit(1);
                        //FAZER UMA TELA DE VITORIA
                    }else{
                        criainimigo();
                        inimigos_mapa = inimigos_mapa + quant;
                   }
                   setPos(0, 0);
                }
            };

           if(typeid(*(colliding_items[i]))== typeid (Inimigo)){
               QSound::play(":/png/imagens/Roblox_Death_Sound_Effect-f49ELvryhao.wav");

               if (mainMenu.getDefesa() < 5){
                 mainMenu.setLife(getLife() - this->dano *3);
                 atualizaPlayer();
               } else if(mainMenu.getDefesa()>=5 and mainMenu.getDefesa()<=9){
                   mainMenu.setLife(getLife() - this->dano *2);         // tapa do inimigo
                   atualizaPlayer();

               } else if(mainMenu.getDefesa()>9){
               mainMenu.setLife(getLife() - this->dano);
               atualizaPlayer();
               }

               if(mainMenu.getLife() <=0){
                   PISO_ATUAL = 0;
                   setPos(0, 0);
                   initPlayer();
                   telaPiso->setPiso(PISO_ATUAL);
               }
          };

           if(typeid(*(colliding_items[i]))== typeid (Chefes)){


               mainMenu.setLife(getLife() - this->dano *7);
               atualizaPlayer();
               if(mainMenu.getLife() <=0){                  //tapa do chefe
                   PISO_ATUAL = 0;
                   setPos(0, 0);
                   initPlayer();
                   telaPiso->setPiso(PISO_ATUAL);
                   scene()->removeItem(colliding_items[i]);
                   delete (colliding_items[i]);
                   inimigos_mapa = 0;
               }

            };

           if(typeid(*(colliding_items[i]))== typeid (Bau)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;
                mainMenu.setPontosUgrade(mainMenu.getPontosUgrade()+5);
           }

           if(typeid(*(colliding_items[i]))== typeid (Loja)){
                scene()->removeItem(colliding_items[i]);
                delete (colliding_items[i]);
                inimigos_mapa = inimigos_mapa - 1;
           }
        }

 }

Player::Player(){

}

