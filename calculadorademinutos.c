#include <stdio.h>

int main()
{
    int horas, minutos, total;

    horas = 8;
    minutos = 30;

    total = horas * 60 + minutos;

    printf("Passaram-se %d minutos. \n", total);

    return 0;
}