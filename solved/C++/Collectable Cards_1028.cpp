#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        int number1 = 0,number2 = 0,reminder = 0;

        scanf("%d %d",&number1,&number2);

        if(number1 < number2)
        {
            reminder = number1;


            while(reminder != 0)
            {
                number1 = reminder;

                reminder = number2 % number1;

                number2 =  number1;


            }
            cout<<number1<<endl;
        }
        else
        {
            reminder = number2;

            while( reminder != 0)
            {
                number2 = reminder;

                reminder = number1 % number2;

                number1 = number2;
            }
            cout<<number2<<endl;
        }
    }
    return 0;
}
