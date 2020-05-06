#include<stdio.h>
int roman[]      = {1000,500,100,50,10,5,1};
char romanchar[] = {'M','D','C','L','X','V','I'};
int main(){
    int n = 0,i,r = 0;
    scanf("%d",&n);
    for(i=0; i<7; i++){
        r = n / roman[i];
        if(r != 0){

        while(r--)
            printf("%c",romanchar[i]);
        }
        n = n % roman[i];
    }
    printf("\n");
    return 0;
}
