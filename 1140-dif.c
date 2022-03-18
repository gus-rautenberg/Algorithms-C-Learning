#include <stdio.h>
#include <string.h>

int main(){

    char frase[2000], tautograma;
    int l, i, espaco=0, letras=0;

    while (fgets(frase, 2000, stdin) && frase[0]!='*'){
        getchar();

        l = strlen(frase);
        i = l;

        for(int k; k<l; k++){
            if (frase[i] >= 97 && frase[i] <= 122){
                frase[i] = frase[i] - 32;
            }
            if(frase[i] == ' '){
                espaco += 1;
            }
            if(frase[0] == frase[i + 1]) {
                letras += 1;
            }
        }
        for(int k; k<l; k++){
            printf("%s\n", frase);
        }
        printf("%d  %d\n", espaco, letras);

        if(espaco == letras){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}