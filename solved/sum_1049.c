#include<stdio.h>
int main(){
    int start = 0,i,j,length = 0,sum = 0;
    scanf("%d %d",&start,&length);
    while(length <=0 ){
        scanf("%d",&length);
    }
    j = start;
    for(i=0; i<length; i++){
        sum+=j;
        j++;
    }
    printf("%d\n",sum);
}
