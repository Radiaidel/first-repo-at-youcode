#include<stdio.h>
int main(){

    int nbr;
    int count=0;
    printf("Donner un nombre : ");
    scanf("%d",&nbr);

    for(int  i=2;i<=nbr/2;i++){
        if(nbr%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Nombre premier \n");
    }
    else{
        printf("Nombre non premier \n");

}
return 0;
}
