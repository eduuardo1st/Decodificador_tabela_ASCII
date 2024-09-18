#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "hexa_deci.h"
#include "caractere.h"
#define mensagem 101
int main(){
     int numMensagens, a, x=1, b, i;
     char mensagemHexa[101], aux[101];
     setlocale(LC_ALL, "portuguese");
     //coleta de informações
     printf("Digite o número de mensagens interceptadas: ");
     scanf("%d", &numMensagens);
     fflush(stdin);

     //repetirá a execução até alcançar o numero de mensagens
     for(i=0; i<numMensagens; i++){
        printf("digite o valor de b: ");
        scanf("%d", &b);
        fflush(stdin);
        printf("digite a mensagem decodificada: ");
        fgets(mensagemHexa, mensagem, stdin);
        fflush(stdin);
        //o codigo abaixo é para decodificar a mensagem
        for(i=0; i<100; i+=2){
            aux[0] = mensagemHexa[i];
            aux[1] = mensagemHexa[i+1];
            a = strtol(aux, stdin, 16);
            if(a == 0){
                break;
            }
        }
        printf("\n");
     }
    return 0;
}