#include "player.h"
#include "saida.h"
#include <QKeyEvent>
#include <QList>

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
}

void Player::keyPressEvent(QKeyEvent *event){


    if (event->key() == Qt::Key_Escape){
        atualizaPontos();
        mainMenu.show();
        atualizaPlayer();
        this->setFocus();
    }

    if (event->key() == Qt::Key_Left){
        atualizaPontos();
        if(x() == -360){
            setPos(x(),y());
            }else{
                setPos(x()-40,y());

            }
        }

        else if (event->key() == Qt::Key_Right){
        atualizaPontos();
            if(x() == 40){
                setPos(x(),y());
            }else{
                setPos(x()+40,y());
            }
        }

        else if (event->key() == Qt::Key_Up){
        atualizaPontos();
            if(y() == -360){
                setPos(x(),y());
            }else{
                setPos(x(),y()-40);
            }
        }

        else if (event->key() == Qt::Key_Down){
        atualizaPontos();
            if(y() == 40){
                setPos(x(),y());
            }else{
                setPos(x(),y()+40);
            }
        }

        QList<QGraphicsItem *> colliding_items = collidingItems();
        for(int  i = 0, n = colliding_items.size(); i < n; i++){
            if(typeid(*(colliding_items[i]))== typeid (Saida)){
                setPos(0, 0);
            };
        }

  }



