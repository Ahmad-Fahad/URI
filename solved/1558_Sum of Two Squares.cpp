#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0;
    while(scanf("%lld", &n) == 1) {
        int flag  = 0;
        int limit = sqrt(n);
        for(int i=1; i<=limit; i++) {
            for(int j=1; j<=limit; j++) {
                if(i*i + j*j == n) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
