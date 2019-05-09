/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QLabel *label_2;
    QLabel *L_pontosUp;
    QLabel *label_3;
    QLabel *L_hp;
    QLabel *label_4;
    QLabel *L_forca;
    QPushButton *B_hp_menos;
    QPushButton *B_hp_mais;
    QPushButton *B_forca_mais;
    QPushButton *B_forca_menos;
    QWidget *tab_2;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(400, 300);
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 201, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tab01 = new QTabWidget(Menu);
        tab01->setObjectName(QStringLiteral("tab01"));
        tab01->setGeometry(QRect(0, 30, 401, 271));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 210, 80, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 10, 121, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        L_pontosUp = new QLabel(tab);
        L_pontosUp->setObjectName(QStringLiteral("L_pontosUp"));
        L_pontosUp->setGeometry(QRect(310, 30, 51, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        L_pontosUp->setFont(font2);
        L_pontosUp->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 16, 16));
        L_hp = new QLabel(tab);
        L_hp->setObjectName(QStringLiteral("L_hp"));
        L_hp->setGeometry(QRect(40, 40, 47, 13));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 70, 41, 16));
        L_forca = new QLabel(tab);
        L_forca->setObjectName(QStringLiteral("L_forca"));
        L_forca->setGeometry(QRect(40, 69, 47, 21));
        B_hp_menos = new QPushButton(tab);
        B_hp_menos->setObjectName(QStringLiteral("B_hp_menos"));
        B_hp_menos->setGeometry(QRect(100, 40, 21, 21));
        B_hp_mais = new QPushButton(tab);
        B_hp_mais->setObjectName(QStringLiteral("B_hp_mais"));
        B_hp_mais->setGeometry(QRect(130, 40, 21, 21));
        B_forca_mais = new QPushButton(tab);
        B_forca_mais->setObjectName(QStringLiteral("B_forca_mais"));
        B_forca_mais->setGeometry(QRect(130, 70, 21, 21));
        B_forca_menos = new QPushButton(tab);
        B_forca_menos->setObjectName(QStringLiteral("B_forca_menos"));
        B_forca_menos->setGeometry(QRect(100, 70, 21, 21));
        tab01->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab01->addTab(tab_2, QString());

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Menu", "MENU", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Menu", "CONFIRMA", Q_NULLPTR));
        label_2->setText(QApplication::translate("Menu", "PONTOS DE UPGRADE:", Q_NULLPTR));
        L_pontosUp->setText(QApplication::translate("Menu", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("Menu", "HP:", Q_NULLPTR));
        L_hp->setText(QApplication::translate("Menu", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Menu", "FOR\303\207A:", Q_NULLPTR));
        L_forca->setText(QApplication::translate("Menu", "TextLabel", Q_NULLPTR));
        B_hp_menos->setText(QApplication::translate("Menu", "-", Q_NULLPTR));
        B_hp_mais->setText(QApplication::translate("Menu", "+", Q_NULLPTR));
        B_forca_mais->setText(QApplication::translate("Menu", "+", Q_NULLPTR));
        B_forca_menos->setText(QApplication::translate("Menu", "-", Q_NULLPTR));
        tab01->setTabText(tab01->indexOf(tab), QApplication::translate("Menu", "Tab 1", Q_NULLPTR));
        tab01->setTabText(tab01->indexOf(tab_2), QApplication::translate("Menu", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
