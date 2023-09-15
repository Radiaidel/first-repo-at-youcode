#include <stdio.h>
#include <stdlib.h>

int main()
{

   int nbr,sum ,max=-1;
do{
    printf("Donnez un entiers positifs inferieurs a 100 terminee par 0. ");
    scanf("%d",&nbr);
    if(nbr<100){
        sum+=nbr;
        if(max<nbr)
            max=nbr;
    }
}while(nbr!=0);
printf("la somme est : %d\n Le max est :%d\n",sum,max);
    return 0;
}
