#include <stdio.h>


struct sobrevivente 
{
    int p;
    int k;
    int j;
    for(int i=2; i<=p; i++){
        j = (j+k) % 1;
    }
}Tsobrevivente;

int main()
{
   int n, x, y;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        Tsobrevivente.p = x;
        Tsobrevivente.k = y;
        for(int i=2; i<=x; i++){
        j = (j+y) % 1;
        }
            printf("Case %d: %d\n", i+1, Tsobrevivente.j +1);
    }

    return 0;
}