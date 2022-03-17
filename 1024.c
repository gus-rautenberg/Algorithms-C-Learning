#include <stdio.h>
#include <string.h>

int main()
{
    int n, lenght, metade, i, j;
    char palavra[100], aux;

    scanf("%d", &n);

    for(int g = 0; g<n; g++){
        scanf(" %[^\n]", palavra);
        lenght = strlen(palavra);

        for(int i = 0; i < lenght; i++) {
           if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')) {
                palavra[i] = palavra[i] + 3;
            }
        }
        j = lenght-1;
         for (int p = 0; p < j ; i++){

            aux = palavra[j];
            palavra[j] = palavra[p];
            palavra[p] = aux;
            j--;
        }
        for (int k = lenght/2; k < lenght; i++ ){
                palavra[k] = palavra[k] - 1;
        }

        printf("%s\n", palavra);

        memset(palavra, 0 , sizeof(palavra));
    }
    return 0;
}