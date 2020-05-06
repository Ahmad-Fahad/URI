#include<stdio.h>
int main()
{
    long long int testCase = 0,i,j;
    double foodAmount = 0;
    scanf("%lld",&testCase);
    while(testCase--)
    {
        int count = 0;
        scanf("%lf",&foodAmount);
        while(foodAmount > 1)
        {
            foodAmount = foodAmount / 2;
            count++;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
