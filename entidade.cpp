#include "entidade.h"

int Entidade::getLife() const
{
    return life;
}

void Entidade::setLife(int value)
{
    life = value;
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

Entidade::Entidade()
{

}
