#include <stdio.h> 
#include <string.h>
int main()
{
    int D, N, i, l, aux;
    char Contrato[100], certa[100];
    int Credor, Devedor, valor;

    scanf("%d", &D);
    for(i=0; i<100; i++){

    }
    while(scanf("%d", &D) && D!='0') {
        for(int j =0; j<100;j++){
            scanf("%s", &Contrato[j]);
        }
        l = strlen(Contrato);
        for(i=0; i<l;i++){
            if(D != Contrato[i]){
                 certa[i] = Contrato[i];
            }
        }
        aux = strlen(certa);
        for(int k = 0; k<aux; k++){
            printf("%s\n", certa[k]);
        }
    }

    return 0;
}