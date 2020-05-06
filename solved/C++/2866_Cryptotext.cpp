#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0, lenth = 0;
    string cipher;
    cin>>testCase;
    getchar();
    while(testCase--) {
        cin>>cipher;
        lenth = cipher.length();
        for(int i=lenth-1; i>=0; i--) {
            if(cipher[i]>=97 && cipher[i]<=122) {
                cout<<cipher[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
