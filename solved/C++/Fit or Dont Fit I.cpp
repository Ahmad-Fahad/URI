#include<bits/stdc++.h>
using namespace std;
int main()
{
    string string1,string2,substring;
    long long int length1,length2,k = 0,n = 1,testCase = 0;
    scanf("%lld",&testCase);
    while(testCase--)
    {
        cin>>string1>>string2;
        length1 = string1.length();
        length2 = string2.length();
        if(length1 >= length2)
        {
            for(int i=0; i<length1; i++)
            {
                if(string1[i] == string2[0])
                {
                    substring = string1.substr(i);
                    n = substring.compare(string2);
                    if(n == 0)
                    {
                        k = 1;
                        break;
                    }
                }
            }
        }
        if(k == 1)
        {
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
        k = 0;
    }
    return 0;
}
