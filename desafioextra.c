#include <stdio.h>

int main() {
    float N1, N2, PPD = 0.0, notaFinal;
    int exameUnificadoFlag, N3Flag;
    float soma;

    // Entrada dos valores das notas    

    printf("Digite sua Nota N1 de 0 a 4.5 : ");
    scanf("%f", &N1);

    printf("Digite sua Nota N2 de 0 a 4.5 : ");
    scanf("%f", &N2);

    printf("Digite sua Nota PPD de 0 a 1 : ");
    scanf("%f", &PPD);

    // Limitar os valores
    if (N1 < 0 || N1 > 4.5 || N2 < 0 || N2 > 4.5 || PPD < 0 || PPD > 1) {
        printf("codigo de erro 3\n");
        return 3;
    }

}