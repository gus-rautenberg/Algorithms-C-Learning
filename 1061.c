#include <stdio.h>
#include <string.h>


Typedef struct periodo
{
    int d;
    int hr;
    int min;
    int seg;
} Ttempo;


int main()
{
    Ttempo.inicio; 
    Ttempo.final;
    Ttempo.resultado;
    int soma, soma1, dif;
    scanf("%d  %d : %d : %d", inicio.d, inicio.hr, inicio.min, inicio.seg);
    scanf("%d  %d : %d : %d", final.d, final.hr, final.min, final.seg);

    soma = ((inicio.d/inicio.d * 24) *3600) + (inicio.hr*3600) + (inicio.min*60) + inicio.seg;
    soma1 = ((final.d/final.d * 24) *3600) + (final.hr*3600) + (final.min*60) + final.seg;

    printf("%d\n%d", soma, soma1);
    dif = soma1-soma;
    
    
return 0;
}