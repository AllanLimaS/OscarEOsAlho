/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QTabWidget *tab01;
    QWidget *tab;
    QPushButton *pushButton;
    QLabel *L_hp;
    QLabel *L_forca;
    QPushButton *B_hp_menos;
    QPushButton *B_hp_mais;
    QPushButton *B_forca_mais;
    QPushButton *B_forca_menos;
    QPushButton *B_defesa_menos;
    QPushButton *B_defesa_mais;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *L_defesa;
    QLabel *label_3;
    QWidget *tab_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *L_capacete;
    QLabel *L_espada;
    QLabel *L_peitoral;
    QPushButton *B_capacete_menos;
    QPushButton *B_capacete_mais;
    QPushButton *B_espada_mais;
    QPushButton *B_espada_menos;
    QPushButton *B_peitoral_mais;
    QPushButton *B_peitoral_menos;
    QLabel *label_2;
    QLabel *L_pontosUp;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(716, 471);
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 261, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tab01 = new QTabWidget(Menu);
        tab01->setObjectName(QStringLiteral("tab01"));
        tab01->setGeometry(QRect(0, 30, 741, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 380, 80, 21));
        pushButton->setAutoFillBackground(true);
        L_hp = new QLabel(tab);
        L_hp->setObjectName(QStringLiteral("L_hp"));
        L_hp->setGeometry(QRect(90, 110, 47, 13));
        L_forca = new QLabel(tab);
        L_forca->setObjectName(QStringLiteral("L_forca"));
        L_forca->setGeometry(QRect(80, 225, 47, 21));
        B_hp_menos = new QPushButton(tab);
        B_hp_menos->setObjectName(QStringLiteral("B_hp_menos"));
        B_hp_menos->setGeometry(QRect(130, 110, 21, 21));
        B_hp_mais = new QPushButton(tab);
        B_hp_mais->setObjectName(QStringLiteral("B_hp_mais"));
        B_hp_mais->setGeometry(QRect(160, 110, 21, 21));
        B_forca_mais = new QPushButton(tab);
        B_forca_mais->setObjectName(QStringLiteral("B_forca_mais"));
        B_forca_mais->setGeometry(QRect(160, 220, 21, 21));
        B_forca_menos = new QPushButton(tab);
        B_forca_menos->setObjectName(QStringLiteral("B_forca_menos"));
        B_forca_menos->setGeometry(QRect(130, 220, 21, 21));
        B_defesa_menos = new QPushButton(tab);
        B_defesa_menos->setObjectName(QStringLiteral("B_defesa_menos"));
        B_defesa_menos->setGeometry(QRect(130, 330, 21, 21));
        B_defesa_mais = new QPushButton(tab);
        B_defesa_mais->setObjectName(QStringLiteral("B_defesa_mais"));
        B_defesa_mais->setGeometry(QRect(160, 330, 21, 21));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 320, 41, 29));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 100, 51, 29));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 220, 41, 29));
        L_defesa = new QLabel(tab);
        L_defesa->setObjectName(QStringLiteral("L_defesa"));
        L_defesa->setGeometry(QRect(80, 330, 47, 13));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 10, 201, 71));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        tab01->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 0, 181, 81));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 120, 61, 16));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 220, 51, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 330, 61, 16));
        L_capacete = new QLabel(tab_2);
        L_capacete->setObjectName(QStringLiteral("L_capacete"));
        L_capacete->setGeometry(QRect(80, 120, 47, 13));
        L_espada = new QLabel(tab_2);
        L_espada->setObjectName(QStringLiteral("L_espada"));
        L_espada->setGeometry(QRect(70, 220, 47, 13));
        L_peitoral = new QLabel(tab_2);
        L_peitoral->setObjectName(QStringLiteral("L_peitoral"));
        L_peitoral->setGeometry(QRect(80, 330, 47, 13));
        B_capacete_menos = new QPushButton(tab_2);
        B_capacete_menos->setObjectName(QStringLiteral("B_capacete_menos"));
        B_capacete_menos->setGeometry(QRect(140, 120, 21, 21));
        B_capacete_mais = new QPushButton(tab_2);
        B_capacete_mais->setObjectName(QStringLiteral("B_capacete_mais"));
        B_capacete_mais->setGeometry(QRect(170, 120, 21, 21));
        B_espada_mais = new QPushButton(tab_2);
        B_espada_mais->setObjectName(QStringLiteral("B_espada_mais"));
        B_espada_mais->setGeometry(QRect(160, 220, 21, 21));
        B_espada_menos = new QPushButton(tab_2);
        B_espada_menos->setObjectName(QStringLiteral("B_espada_menos"));
        B_espada_menos->setGeometry(QRect(130, 220, 21, 21));
        B_peitoral_mais = new QPushButton(tab_2);
        B_peitoral_mais->setObjectName(QStringLiteral("B_peitoral_mais"));
        B_peitoral_mais->setGeometry(QRect(170, 330, 21, 21));
        B_peitoral_menos = new QPushButton(tab_2);
        B_peitoral_menos->setObjectName(QStringLiteral("B_peitoral_menos"));
        B_peitoral_menos->setGeometry(QRect(140, 330, 21, 21));
        tab01->addTab(tab_2, QString());
        label_2 = new QLabel(Menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 0, 131, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        L_pontosUp = new QLabel(Menu);
        L_pontosUp->setObjectName(QStringLiteral("L_pontosUp"));
        L_pontosUp->setGeometry(QRect(610, 20, 47, 13));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        L_pontosUp->setFont(font2);

        retranslateUi(Menu);

        tab01->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", 0));
        label->setText(QApplication::translate("Menu", "O CARA DOS ALHO", 0));
        pushButton->setText(QApplication::translate("Menu", "CONFIRMA", 0));
        L_hp->setText(QApplication::translate("Menu", "TextLabel", 0));
        L_forca->setText(QApplication::translate("Menu", "TextLabel", 0));
        B_hp_menos->setText(QApplication::translate("Menu", "-", 0));
        B_hp_mais->setText(QApplication::translate("Menu", "+", 0));
        B_forca_mais->setText(QApplication::translate("Menu", "+", 0));
        B_forca_menos->setText(QApplication::translate("Menu", "-", 0));
        B_defesa_menos->setText(QApplication::translate("Menu", "-", 0));
        B_defesa_mais->setText(QApplication::translate("Menu", "+", 0));
        label_6->setText(QApplication::translate("Menu", "DEFESA:", 0));
        label_7->setText(QApplication::translate("Menu", "MAX LIFE:", 0));
        label_8->setText(QApplication::translate("Menu", "FOR\303\207A:", 0));
        L_defesa->setText(QApplication::translate("Menu", "TextLabel", 0));
        label_3->setText(QApplication::translate("Menu", "ATRIBUTOS", 0));
        tab01->setTabText(tab01->indexOf(tab), QApplication::translate("Menu", "Tab 1", 0));
        label_4->setText(QApplication::translate("Menu", "ITENS", 0));
        label_5->setText(QApplication::translate("Menu", "CAPACETE:", 0));
        label_9->setText(QApplication::translate("Menu", "ESPADA:", 0));
        label_10->setText(QApplication::translate("Menu", "PEITORAL:", 0));
        L_capacete->setText(QApplication::translate("Menu", "TextLabel", 0));
        L_espada->setText(QApplication::translate("Menu", "TextLabel", 0));
        L_peitoral->setText(QApplication::translate("Menu", "TextLabel", 0));
        B_capacete_menos->setText(QApplication::translate("Menu", "-", 0));
        B_capacete_mais->setText(QApplication::translate("Menu", "+", 0));
        B_espada_mais->setText(QApplication::translate("Menu", "+", 0));
        B_espada_menos->setText(QApplication::translate("Menu", "-", 0));
        B_peitoral_mais->setText(QApplication::translate("Menu", "+", 0));
        B_peitoral_menos->setText(QApplication::translate("Menu", "-", 0));
        tab01->setTabText(tab01->indexOf(tab_2), QApplication::translate("Menu", "Tab 2", 0));
        label_2->setText(QApplication::translate("Menu", "QUANTIDADE DE ALHOS", 0));
        L_pontosUp->setText(QApplication::translate("Menu", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
