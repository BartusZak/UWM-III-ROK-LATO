#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //do cls
#include <stdbool.h> //do bool'a

int main()
{
    //deklaruje zmienne
    long dec;

    //wczytuje zmienna do zamiany
    printf("Podaj liczbe decymalna: ");
    scanf("%d", &dec);

    system("cls");

    printf("DEC: %d\n", dec);
    printf("BIN: ");

    decBin(dec, 10);

    printf("\n");
    printf("Pierszy bit to bit znaku.");

    return 0;
}

void decBin(dec, naIluBitach)
{
    int i,j;
    long pom;
    bool pom2 = false;

    //ustalam bit znaku
    if (dec < 0)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    //przypisuje wartosc absolutna
    dec = abs(dec);

    //wykonuje iteracje
    for(i=naIluBitach; i>=0; i--)
    {
        //przesuniecie w prawo o wartosc bitow
        j = dec >> i;

        //iloczyn binarny z 1
        pom = j & 1;

        //instrukcja warunkowa zapobiegajaca
        //wyswietlaniu poczatakowych zer
        if (pom == 1)
        {
           printf("%d", pom);
           pom2 = true;
        }
        else if (pom2)
        {
            printf("%d", pom);
        }

    }
}
