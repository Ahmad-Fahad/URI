#include<stdio.h>
int main(){
    int path = 0;
    float fuel = 0;
    float consumption = 0;
    scanf("%d %f",&path,&fuel);
    consumption = (float)path / fuel;
    printf("%.3f km/l\n",consumption);
}

