#include <stdio.h>

int xPuissY(int x, int y)
{
    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main()
{
    int x = 0;
    int y = 0;

    printf("donnez x et y a calculer :\n");
    scanf_s("%d", &x);
    scanf_s("%d", &y);

    int result = xPuissY(x, y);
    printf("%d puissance %d = %d\n", x, y, result);

    return 0;
}