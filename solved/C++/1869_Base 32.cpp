#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n_10 = 0, r = 0;
    while(1) {
        cin>>n_10;
        if(n_10 == 0) {
            cout<<"0"<<endl;
            break;
        }
        string n_32;
        while(n_10 != 0) {
            char temp;
            stringstream strem;
            r = n_10 % 32;
            if(r < 10) {
                strem << r;
                strem >> temp;
            }
            else {
                r = (r-10) + 65;
                temp = (char)r;
            }
            n_32 += temp;
            n_10 = n_10 / 32;
        }
        int length = n_32.length();
        for(int i=length-1; i>=0; i--) {
            cout<<n_32[i];
        }
        cout<<endl;
    }
    return 0;
}
