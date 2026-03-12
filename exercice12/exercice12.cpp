#include <stdio.h>

int divise(int a, int b)
{
	int resultat = 0;

	resultat = a / b;

	return resultat;
}


int main(int argc, char** argv)
{
	int a;
	int b;
	int resultat;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	resultat = divise(a, b);

	printf("le resultat de la division de a par b est %d\n", resultat);

    return 0;
}