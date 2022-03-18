#include <string.h>
#include <stdio.h>

int main()
{
 char m[1000], nova[1000];
 int n = 0,  cont = 0, tamanho = 0,  j = 0;
 
 scanf("%d", &n);
 
 getchar();
 
while(cont < n)
 {
 

  fgets(m, 10000, stdin);
  m[strlen(m)-1] = '\0';

  tamanho = strlen(m);
  //printf("%d\n", tamanho);

      for(int i = 0; i < tamanho; i++)
      {
        if(m[i] > 64 && m[i] < 123 && m[i] != 91 && m[i] != 92 && m[i] != 93 && m[i] != 94 && m[i] != 95 && m[i] != 96)
        {
            m[i] = m[i] + 3;
        }
      }

    //printf("%s\n", m);

     memset(nova, 0, 1000);

     j = 0; 
     for(int i = tamanho - 1 ; i >= 0; i--)
     {
        nova[j] = m[i];

        j++;
     }

  //printf("%s\n", nova);
 
     for(int i = tamanho/2; i < tamanho; i++)
     {
        nova[i] = nova[i] - 1; 
     }
 
 printf("%s\n", nova);
 
 cont++;

 }
 
 
 return 0;
 
 
 }