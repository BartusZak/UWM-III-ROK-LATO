#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int rejestratorPrzesuwajacy (int liczba, int ileBitow, char kierunek)
{
    if(kierunek == '<')
    {
        return liczba << ileBitow;
    }
    else if (kierunek == '>')
    {
        return liczba >> ileBitow;
    }
    return 0;
}

int main()
{
    int liczba;
    int ileBitow;
    char kierunek;

    printf("Podaj liczbe:\n");
    scanf("%d", &liczba);

    printf("Podaj o ile bitow przesunac:\n");
    scanf("%i", &ileBitow);

    printf("Podaj kierunek przesuniecia '<'/ '>':\n");
    scanf(" %c", &kierunek);

    system("cls");

    printf("Przesuwasz liczbe %d w %c o %i bity.\n", liczba, kierunek, ileBitow );

    printf("%d", rejestratorPrzesuwajacy(liczba, ileBitow, kierunek));

    return 0;
}


