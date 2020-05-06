#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0, m = 0, result = 0, flag = 0;
    while(scanf("%lld", &n) != EOF) {
        if(n < m && flag != 1 ) {
            result = m + 1;
            flag   = 1;
        }
        m = n;
    }
    if(flag == 1) {
        cout<<result<<endl;
    }
    else {
        cout<<m+1<<endl;
    }
    return 0;
}

