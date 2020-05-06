#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int sum = 0, i, n = 0;
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        else
        {
            for(i=1; i<=n; i++) {
                sum += i*i ;
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
