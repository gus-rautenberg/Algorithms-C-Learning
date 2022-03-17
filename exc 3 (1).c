#include <stdio.h>
#include <string.h>

int sobrevivente(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, x, y;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
            scanf("%d %d",&x,&y);
            
            printf("Case %d: %d\n",i+1,sobrevivente(x,y)+1);
    }
    return 0;
}