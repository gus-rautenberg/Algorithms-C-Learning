#include <stdio.h>
#include <string.h>

int main ()
{
  char digito, valor[200];
  int l;

  scanf("%c", &digito);
  scanf("%s", valor);

  while (digito != '0')
  {
    l = strlen(valor);
    for (int i = 0; i < l; i++)
	{
      if (valor[i] == digito)
	  {
        for (int j = i; j < l; j++)
          valor[j] = valor[j+1];
        valor[l-1] = 0;
        l--;
        i--;
      }
    }

    for (int i = 0; i < l-1; i++)
	{
      if (valor[i] == '0')
	  {
        for (int j = i; j < l; j++)
          valor[j] = valor[j+1];
        valor[l-1] = 0;
        l--;
        i--;
      }
	  else
        break;
    }

    if (l == 0)
	{
      valor[0] = '0';
      valor[1] = '\0';
    }

    printf("%s\n", valor);



    scanf(" %c", &digito);
    scanf("%s", valor);
  }
  return 0;
}