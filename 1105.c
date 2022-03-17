#include <stdio.h>
#include <string.h>

int main()
{
    int B, D, i, checar;
    int Fundo[20];
    int Credor, Devedor, valor;

    while(scanf("%d%d", &B, &D) && B!='0' && D!='0') {
        for(i = 1; i<=B; i++) {
            scanf("%d", &Fundo[i]);     
        }
         
        for(int j = 1; j<=D; j++) {
            scanf("%d %d %d", &Devedor, &Credor, &valor);
            Fundo[Devedor] -= valor;
            Fundo[Credor] += valor;
        }
        for(i = 1; i<=B; i++) {
            if(Fundo[i] < 0) {
                checar = 1;
            } else {
                checar = 0;
            }
        }
        if(checar == 1) {
            printf("N\n");
        } else if(checar == 0) {
            printf("S\n");
        }
    }

    


    return 0;
}