#ifndef PRINT_JOGO_H
#define PRINT_JOGO_H
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <stdio.h>



#endif // PRINT_JOGO_H

int paredes_mapa(int matriz[][13]){
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
            if(i==0||j==0||i==12||j==12){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
        }
    }
    return 0;
}
