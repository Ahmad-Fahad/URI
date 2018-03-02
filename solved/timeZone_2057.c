#include<stdio.h>
int main(){
    int s,t,f,time = 0;
    scanf("%d %d %d",&s,&t,&f);
    if(s >= 0 && s <= 23 && t >= 1 && t <= 12 && f >= -5 && f <= 5){
        time = s+t+f;
        if(time > 24){
            time = time - 24;
        }
        else if( time == 24){
            time = 0;
        }
        else if(time < 0){
            time = 24 + time;
        }
    }
    printf("%d\n",time);
    return 0;
}
