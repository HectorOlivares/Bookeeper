//
//  despedida.h
//  ProyectoFP
//
//  Created by Héctor Olivares on 17/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

#include <stdio.h>

int i;

void despedida(){
    for(int i = 1; i < 12; i++){
                           for(int j = 1; j < 12 - i; j++)
                           printf(" ");
       for(int j = 2; j < 2 * i - 1; j++)
       printf("*");
                           printf("\n");
                   }
    return;
}
