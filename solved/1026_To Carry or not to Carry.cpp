#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1 = 0, n2 = 0;
    while(scanf("%lld %lld", &n1, &n2) != EOF) {
        long long int count = 0, result = 0, bin = 0, r1 = 0, r2  = 0, limit = 0;
        if(n1 > n2) {
            limit = n1;
        }
        else {
            limit = n2;
        }
        while(limit != 0) {
            r1 = n1 % 2;
            r2 = n2 % 2;
            if(r1 != r2) {
                bin = 1;
            }
            else {
                bin = 0;
            }
            result = result + (bin * pow(2, count));
            count++;
            limit = limit / 2;
            n1    = n1 / 2;
            n2    = n2 / 2;
        }
        cout<<result<<endl;
    }
    return 0;
}
