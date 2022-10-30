#include <stdio.h>

int main()
{
    int num, cont, r;
    printf("Escreva um Numero para visualizar a sua respectiva tabuada: ");
    scanf("%d", &num);
    cont = 0;
    while(cont <= 30)
    {
        r = num * cont;
        printf("\n%d x %d = %d", num, cont, r);
        cont++;
    }

    return 0;
}
