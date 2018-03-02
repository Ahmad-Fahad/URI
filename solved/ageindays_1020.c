#include<stdio.h>
int main(){
    int days = 0,months = 0,years = 0,temp = 0;
    scanf("%d",&days);
    years = days/365;
    temp = days%365;
    months= temp/30;
    days  = temp%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);
    return 0;
}
