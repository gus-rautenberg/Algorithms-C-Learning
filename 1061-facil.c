#include <stdio.h>

int main()
{
    int di, hi, mi, si;
    int dt, ht, mt, st;

scanf("Dia %d", &di);
 scanf("%d : %d : %d\n", &hi, &mi, &si);
 scanf("Dia %d", &dt);
 scanf("%d : %d : %d\n", &ht, &mt, &st);

    di = dt - di;
    hi = ht - hi;
    mi = mt - mi;
    si = st - si;

    if(si < 0){
    si += 60;
    mi--;
    }
    if(mi < 0){
    mi += 60;
    hi--;
    }
    if(hi < 0){
    hi += 24;
    di--;
    }

    printf("%d dia(s)\n", di);
    printf("%d hora(s)\n", hi);
    printf("%d minuto(s)\n", mi);
    printf("%d segundo(s)\n", si);


    return 0;
}