#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "caractere.h"
#define mensagem 101
int main(){
     int numMensagens, a, b, i, x = 1;
     char mensagemHexa[101], aux[101];
     //coleta de informacoes
     printf("Digite o numero de mensagens interceptadas: ");
     scanf("%d", &numMensagens);
     fflush(stdin);

     //repetir a execucao ate alcancar o numero de mensagens
     for(i=0; i<numMensagens; i++){
        printf("digite o valor de b: ");
        scanf("%d", &b);
        fflush(stdin);
        printf("digite a mensagem decodificada: ");
        fgets(mensagemHexa, mensagem, stdin);
        fflush(stdin);
        //o codigo abaixo eh para decodificar a mensagem
        for(i=0; i<100; i+=2){
            aux[0] = mensagemHexa[i];
            aux[1] = mensagemHexa[i+1];
            a = strtol(aux[1], stdin, 16);
            if(a == 0){
                break;
            }
        
        double result = f(x, b);
        if(result != 0) {
            printf("%c", a);
        }
        x++;
        }
        printf("\n");
     }
    return 0;
}