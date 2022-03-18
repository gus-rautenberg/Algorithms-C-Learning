#include <stdio.h>
#include <string.h>

int main(){

    char frase[2000], tautograma;
    int l, i, check;

    while (scanf("%[^\n]s", frase) && frase[0]!='*'){
        getchar();

        l = strlen(frase);
        i = l;
        check=1;

        tautograma = frase[0];

        while ((i > 0) && check){
            if (frase[i] == ' '){
                if (frase[i+1] >= 90){
                    if (frase[i+1]==tautograma || frase[i+1]==(tautograma+32)){
                        check=1;
                    } else{
                        check=0;
                    }
                }
                
                
                if (frase[i+1] < 96){
                    if (frase[i+1]==tautograma || frase[i+1]==(tautograma-32)){
                        check=1;
                    } else{
                        check=0;
                    }
                }
            }
            i--;
        }
        
        
        check ? printf("Y\n"):printf("N\n");
    }
    return 0;
}