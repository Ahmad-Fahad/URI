#include<stdio.h>
int main()
{
    int test,hour,minute,occur;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d",&hour,&minute,&occur);
        if(hour <= 9){
            printf("0%d:",hour);
        }
        else{
            printf("%d:",hour);
        }
        if(minute <= 9){
            printf("0%d",minute);
        }
        else{
            printf("%d",minute);
        }
        if(occur == 0){
            printf(" - A porta fechou!\n");
        }
        else{
            printf(" - A porta abriu!\n");
        }
    }
    return 0;
}
