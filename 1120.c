#include <stdio.h> 
#include <string.h>
int main()
{
    int l;
    char Contrato[1000];
    char D;

    scanf("%c %s", &D, Contrato);
    while(D !='0') {
        l = strlen(Contrato);
        for(int i=0; i<l;i++){
            if(D == Contrato[i]){
                for (int j = i; j < l; j++){
                    Contrato[j] = Contrato[j+1];
                    Contrato[l-1] = 0;
                    l--;
                    i--;
                }
            }
        }
        for (int i = 0; i < l-1; i++){
            if (Contrato[i] == '0'){
                for (int j = i; j < l; j++){
                    Contrato[j] = Contrato[j+1];
                    Contrato[l-1] = 0;
                    l--;
                    i--;
                }
            } else
                break;
        }

        if (l == 0){
            Contrato[0] = '0';
            Contrato[1] = '\0';
        }

        printf("%s\n", Contrato);


        scanf("%c", &D);
        scanf("%s", Contrato);
    }

    return 0;
}