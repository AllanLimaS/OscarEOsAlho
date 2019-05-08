#ifndef ENTIDADE_H
#define ENTIDADE_H


class Entidade
{
private:
    int life, maxLife, forca, defesa;


public:
    Entidade();
    int getLife() const;
    void setLife(int value);
    int getMaxLife() const;
    void setMaxLife(int value);
    int getForca() const;
    void setForca(int value);
    int getDefesa() const;
    void setDefesa(int value);
};

#endif // ENTIDADE_H
