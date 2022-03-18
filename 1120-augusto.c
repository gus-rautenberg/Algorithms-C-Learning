#include <stdio.h>
#include <string.h>

int main ()
{
  char d, contrato[200];
  int l;

  scanf("%c %s", &d, contrato);


  while (d != '0')
  {
    l = strlen(contrato);
    for (int i = 0; i < l; i++)
    {
      if (contrato[i] == d)
      {
        for (int j = i; j < l; j++)
          contrato[j] = contrato[j+1];
        contrato[l-1] = 0;
        l--;
        i--;
      }
    }

    for (int i = 0; i < l-1; i++)
    {
      if (contrato[i] == '0')
      {
        for (int j = i; j < l; j++)
          contrato[j] = contrato[j+1];
        contrato[l-1] = 0;
        l--;
        i--;
      }
      else
        break;
    }

    if (l == 0)
    {
      contrato[0] = '0';
      contrato[1] = '\0';
    }

    printf("%s\n", contrato);



    scanf(" %c", &d);
    scanf("%s", contrato);
  }
  return 0;
}