#include <stdio.h>

int main()
{
    int x, y, aux=1;

    scanf("%d%d", &x, &y);

    for(int i = 1; i <= y; i++) {

        if(aux != x){
            aux++;
            printf("%d ", i);
        }else if (aux == x){
            printf("%d\n", i);
            aux = 1;
        }
    }

    return 0;
}