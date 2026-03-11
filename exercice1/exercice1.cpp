#include <stdio.h>

int valeurAbsolue(int valeur)
{
    if (valeur < 0)
    {
        valeur = -valeur;
    }
    return valeur;
}


int main() {
    int k = 0;

    printf("donnez valeur a calcule \n");
    scanf_s("%d", &k);

    k = valeurAbsolue(k);

    printf("la valeur absolue de k est %d\n", k);

    return 0;
}