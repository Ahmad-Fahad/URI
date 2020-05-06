#include<stdio.h>
int main(){
    int notes[] = {100,50,20,10,5,2};
    double coins[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    double n=0,r=0,coin = 0;
    int x,i,note,c = 0;
    scanf("%lf",&n);
    note = (int)n;
    coin = n - note;
    printf("NOTAS:\n");
    for(i=0; i<6;i++){
       x=note/notes[i];
       note=note%notes[i];
       printf("%d nota(s) de R$ %d,00\n",x,notes[i]);
    }
    printf("MOEDAS:\n");
    for(i=0; i<6; i++){
       r   = coin/coins[i];
       coin=coin % coins[i];
       printf("%d nota(s) de R$ %.2lf,00\n",coin,coins[i]);
    }

    return 0;
}
