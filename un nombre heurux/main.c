#include <stdio.h>
#include <stdlib.h>

int main()

{ int nbh,m,d;
    printf("saisez un nombre entre 0 et 10\n");
    scanf("%d",&nbh);
    nbh *=nbh;
    printf("%d",nbh);
     d=nbh/10;
     m=nbh%10;
     while ((d *=d)+(m*=m)!=1)
              {
                printf("%d",(d *=d)+(m*=m)!=1);

              }

    return 0;
}
