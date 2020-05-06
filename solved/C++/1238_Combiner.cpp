#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;
    scanf("%d", &testCase);
    getchar();
    while (testCase--)
    {
        string s1, s2, sub;
        cin>>s1>>s2;
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1 == l2)
        {
            for(int i=0; i<l1; i++)
            {
                cout<<s1[i]<<s2[i];
            }
        }
        else
        {
            if(l1 < l2)
            {
                sub = s2.substr(l1, l2-1);
                for(int i=0; i<l1; i++)
                {
                    cout<<s1[i]<<s2[i];
                }
            }
            else if(l2 < l1)
            {
                sub = s1.substr(l2, l1-1);
                for(int i=0; i<l2; i++)
                {
                    cout<<s1[i]<<s2[i];
                }
            }
            cout<<sub;
        }
        cout<<endl;
    }
    return 0;
}
