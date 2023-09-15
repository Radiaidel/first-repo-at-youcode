#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr;
   printf("Entrez nombre de lignes : ");
   scanf("%d",&nbr);

   for(int i=1;i<=nbr;i++){
    for(int j=0;j<=nbr-i;j++){
        printf(" ");
    }
    for(int k=0;k<2*i-1;k++)
        printf("*");
    printf("\n");
   }
    return 0;
}
