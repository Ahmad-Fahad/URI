#include<bits/stdc++.h>
using namespace std;
int main()
{

    string text, spaceLess;
    while(getline(cin, text))
    {
        int k = 0;
        int length = text.length();
        for(int i=0; i<length; i++)
        {
            if(text[i] != ' ')
            {
                if(k%2 == 0)
                {
                    if(text[i]>='A' && text[i]<='Z')
                    {
                        printf("%c", text[i]);
                    }
                    else
                    {
                        printf("%c", text[i] - 32);
                    }
                }
                else
                {
                    if(text[i]>='a' && text[i]<='z')
                    {
                        printf("%c", text[i]);
                    }
                    else
                    {
                        printf("%c", text[i] + 32);
                    }
                }

                k++;
            }
            else
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
