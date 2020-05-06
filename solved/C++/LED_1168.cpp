#include<iostream>
using namespace std;
int main()
{
    long long int total = 0,leds = 0,testcase = 0;
    cin>>testcase;
    while(testcase--)
    {
        string number;
        cin>>number;
        long long int length = number.length();
        for(int i=0; i<length; i++)
        {
            switch(number[i])
            {
            case '1':
                leds = 2;
                break;
            case '2':
                leds = 5;
                break;
            case '3':
                leds = 5;
                break;
            case '4':
                leds = 4;
                break;
            case '5':
                leds = 5;
                break;
            case '6':
                leds = 6;
                break;
            case '7':
                leds = 3;
                break;
            case '8':
                leds = 7;
                break;
            case '9':
                leds = 6;
                break;
            case '0':
                leds = 6;
                break;
            }
            total = total + leds;
        }
        cout<<total<<" leds"<<endl;
        total = 0;
    }
    return 0;
}
