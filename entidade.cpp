#include "entidade.h"
#include <QDebug>


int Entidade::getLife() const
{
    return this->life;
}

void Entidade::setLife(int value)
{
    life =  value;
}

int Entidade::getMaxLife() const
{
    return maxLife;
}

void Entidade::setMaxLife(int value)
{
    maxLife = value;
}

int Entidade::getForca() const
{
    return forca;
}

void Entidade::setForca(int value)
{
    forca = value;
}

int Entidade::getDefesa() const
{
    return defesa;
}

void Entidade::setDefesa(int value)
{
    defesa = value;
}

void Entidade::imprime(){
    qDebug()<< this->defesa << this->life << this->maxLife << this->forca;
}

Entidade::Entidade()
{

}
