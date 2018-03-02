#include<stdio.h>
#define pi 3.14
int main()
{
    double volume = 0,diameter = 0,height = 0,area = 0,radius = 0;
    while(scanf("%lf %lf",&volume,&diameter) != EOF){
        radius = diameter / 2;
        area = pi * radius * radius;
        height = volume / area;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",height,area);
    }
    return 0;
}
