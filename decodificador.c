#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
double f(int x, int b);
double f(int x, int b){
    int i;
double a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166;
double a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038*pow(10,-7);

return round(a0 + (a1 + b)*x + a2* pow(x,2) + a3* pow(x,3) + a4* pow(x,4) + a5* pow(x,5) + a6* pow(x,6) + a7* pow(x,7));
}
int main(){
     int numMensagens, a, b, i, j, x;
     char mensagemHexa[101], aux[3];
     //coleta de informacoes
     printf("Digite o numero de mensagens interceptadas: ");
     scanf("%d", &numMensagens);
     while (getchar() != '\n');

     //repetir a execucao ate alcancar o numero de mensagens
     for(i=0; i<numMensagens; i++){
        printf("digite o valor de b: ");
        scanf("%d", &b);
        while (getchar() != '\n');

        printf("digite a mensagem decodificada: ");
        fgets(mensagemHexa, 101, stdin);
        mensagemHexa[strcspn(mensagemHexa, "\n")] = '\0';
        
        x=1;
        //o codigo abaixo eh para decodificar a mensagem
        for(j=0; j<100; j+=2){
            aux[0] = mensagemHexa[j];
            aux[1] = mensagemHexa[j+1];
            aux[2] = '\0';
            a = strtol(aux, NULL, 16);
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