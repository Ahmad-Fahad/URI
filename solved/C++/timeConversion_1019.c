#include<stdio.h>
int main(){
    int second = 0;
    scanf("%d",&second);
    int hour =0,minute = 0,temp = 0;
    hour   = second/3600;
    temp   = second%3600;
    minute = temp / 60;
    second = temp%60;

    printf("%d:%d:%d\n",hour,minute,second);

}
