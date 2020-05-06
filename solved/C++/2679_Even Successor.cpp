#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x = 0;
    scanf("%lld", &x);
    if(x % 2 == 0) {
        x = x + 2;
    }
    else {
        x = x + 1;
    }
    printf("%lld\n", x);
    return 0;
}
