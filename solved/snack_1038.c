#include<stdio.h>
int main(){
    int code = 0,number = 0;
    double pay  = 0;
    scanf("%d %d",&code,&number);
    switch(code){
    case 1:
        pay = number * 4.00;
        break;
    case 2:
        pay = number * 4.50;
        break;
    case 3:
        pay = number * 5.00;
        break;
    case 4:
        pay = number * 2.00;
        break;
    case 5:
        pay = number * 1.50;
        break;
    }
    printf("Total: R$ %.2lf\n",pay);
}
