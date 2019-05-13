#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT
    int MaxLife, life, defesa, forca, capacete, espada, potion, peitoral, pontosUgrade, Nivel;


public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    void keyPressEvent(QKeyEvent * event);
    void atualizaPontos();
    void set_pontosUp(int pontos);
    void set_pontosLife(int pontos);
    void set_pontosForca(int pontos);
    void set_pontosNivel(int pontos);
    void set_pontosMaxLife(int pontos);
    void set_pontosDefesa(int pontos);
    void set_pontosCapacete(int pontos);
    void set_pontosEspada(int pontos);
    void set_pontosPeitoral(int pontos);
    void set_pontosPotion(int pontos);

    int getMaxLife() const;
    void setMaxLife(int value);

    int getLife() const;
    void setLife(int value);

    int getDefesa() const;
    void setDefesa(int value);

    int getForca() const;
    void setForca(int value);

    int getCapacete() const;
    void setCapacete(int value);

    int getEspada() const;
    void setEspada(int value);

    int getPotion() const;
    void setPotion(int value);

    int getPeitoral() const;
    void setPeitoral(int value);

    int getPontosUgrade() const;
    void setPontosUgrade(int value);

    int getNivel() const;
    void setNivel(int value);

private slots:
    void on_pushButton_clicked();

    void on_B_hp_menos_clicked();

    void on_B_hp_mais_clicked();

    void on_B_forca_menos_clicked();

    void on_B_forca_mais_clicked();

    void on_L_hp_linkHovered();

    void on_L_hp_linkActivated();

    void on_B_defesa_menos_clicked();

    void on_B_defesa_mais_clicked();

    void on_B_capacete_menos_clicked();

    void on_B_capacete_mais_clicked();

    void on_B_espada_menos_clicked();

    void on_B_espada_mais_clicked();

    void on_B_peitoral_menos_clicked();

    void on_B_peitoral_mais_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
