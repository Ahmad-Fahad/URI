#include<stdio.h>
int main()
{
    double n = 0,denominator = 0,sqt = 0;
    scanf("%lf",&n);
    while(n--){
        denominator =2 + denominator;
        denominator = 1.0 / denominator;
    }
    sqt = 1 + denominator;
    printf("%.10lf\n",sqt);
    return 0;
}
