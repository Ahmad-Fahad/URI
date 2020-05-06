#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        long long int number = 0;

        scanf("%lld",&number);

        if(number == 0 || number == 1)
        {
            printf("Not Prime\n");
        }
        else if(number == 2)
        {
            printf("Prime\n");
        }
        else{

            long long int limit = sqrt(number) + 1;

            int flag = 0;

            for(int i=2; i<=limit; i++)
            {
                if(number%i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                printf("Not Prime\n");
            }
            else
            {
                printf("Prime\n");
            }
        }
    }
    return 0;
}
