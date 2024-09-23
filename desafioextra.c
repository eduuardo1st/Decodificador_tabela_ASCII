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

    soma = N1 + N2 + PPD;

    printf("Sua nota eh : %.1f \n", soma);

    printf("O aluno fez o exame unificado?\n 1 para sim e 0 para nao : ");
    scanf("%d", &exameUnificadoFlag);

    float notaExame = 0.0;

    if (exameUnificadoFlag == 1) {
        printf("Digite sua nota do exame unificado : ");
        scanf("%f", &notaExame);

        if (notaExame < 0 || notaExame > 1) {
            printf("codigo de erro 3\n");
            return 3;
        }

        notaExame += soma;
        
        if (notaExame > 10) {
            notaExame = 10;
        }
        printf("Sua nota final com exame eh : %.1f\n", notaExame);
        notaFinal = notaExame;
    } else {
        notaFinal = soma;
    }

    if (notaFinal > 10) {
        notaFinal = 10;
    }

    if (notaFinal >= 7) {
        printf("\nO aluno foi Aprovado com a nota : %.1f\n", notaFinal);
        return 1;
    } else {
        printf("\nO aluno precisa fazer a recuperação,\n");
        printf("O aluno fez a N3? 1 para sim e 0 para nao : ");
        scanf("%d", &N3Flag);
    }

    float notaRec = N1 + N2 + PPD;

    if (N3Flag == 1) {
        float notaN3;

        printf("\nDigite sua nota da N3 : ");
        scanf("%f", &notaN3);

        if (notaN3 < 0 || notaN3 > 4.5) {
            printf("codigo de erro 3\n");
            return 3;
        }

        if (N1 < N2) {
            notaRec = (notaN3 + N2 + PPD);
        } else {
            notaRec = (N1 + notaN3 + PPD);
        }
        
        if (notaRec > 10) {
            notaRec = 10;
        }
        
        if (notaRec >= 7) {
            printf("\nO aluno foi Aprovado com a nota : %.1f\n", notaRec);
        } else {
            printf("\nO aluno foi reprovado com a nota : %.1f\n", notaRec);
        }
    }
    return 0;
}