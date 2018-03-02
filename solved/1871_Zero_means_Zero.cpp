#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        long long int m = 0, n = 0, sum = 0, r = 0;
        vector <long long int> result;
        scanf("%lld %lld",&m, &n);
        if(m == 0 && n == 0) {
            break;
        }
        else {
            sum = m + n;
            while(sum != 0) {
                r = sum % 10;
                if(r != 0) {
                    result.push_back(r);
                }
                sum = sum / 10;
            }
            int length = result.size();
            for(int i=length-1; i>=0; i--) {
                printf("%lld",result[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
