#include<stdio.h>
int main()
{
    double previous = 0,newprice = 0,increase = 0;
    scanf("%lf %lf",&previous,&newprice);
    increase = (newprice - previous)*100/previous;
    printf("%.2lf\%%\n",increase);
    return 0;
}
