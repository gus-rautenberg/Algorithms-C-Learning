#include <stdio.h>
#include <string.h>

int main()
{
    int n, lenght, metade, i, j, aux = 0;
    char palavra[1000], final[1000];

    scanf("%d", &n);
    getchar();
    while(aux < n){
        fgets(palavra, 1000, stdin); 
        palavra[strlen(palavra)-1] = '\0';
        
        lenght = strlen(palavra);

        for(int i = 0; i < lenght; i++) {
           if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')) {
                palavra[i] = palavra[i] + 3;
            }
        }

        memset(final, 0, sizeof(final));
        j = 0;
         for (int p = lenght-1; p >=0  ; p--){
            final[j] = palavra[p];
            j++;
        }


        for (int k = lenght/2; k < lenght; k++ ){
                final[k] = final[k] - 1;
        }

        printf("%s\n", final);

        memset(palavra, 0 , sizeof(palavra));
        aux++;
    }
    return 0;
}