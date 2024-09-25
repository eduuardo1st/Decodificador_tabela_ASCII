#include <stdio.h>
#include <limits.h>

int main () {
    

printf("Tabela de limites dos tipos de variaveis inteiras:\n");
printf("-------------------------------------------------------\n");
printf("| TIPO   |        MINIMO        |       MAXIMO        | \n");
printf("-------------------------------------------------------\n");

printf("| char   |         %d         |         %d         | \n", CHAR_MIN, CHAR_MAX);
printf("| int    |      %d     |      %d     | \n", INT_MIN, INT_MAX);
printf("| shrt   |        %d        |        %d        | \n", SHRT_MIN, SHRT_MAX);
printf("| uint   | %5u | %15u      |\n", 0 , UINT_MAX);
printf("| long   | %ld | %ld |\n", LONG_MIN, LONG_MAX);
printf("| ulong  | %u | %u |\n", 0, ULONG_MAX);
printf("| llong  | %lld | %lld |\n", LLONG_MIN, LLONG_MAX);
printf("| ullong | %u | %llu |\n", 0, ULLONG_MAX);



}