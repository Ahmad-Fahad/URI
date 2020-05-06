#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a, long long int b) {
    long long int d = 0, r = 0, x = 0, y = 0;
    x = a;
    y = b;
    while(a != 0) {
        r = b%a;
        b = a;
        a = r;
    }

    return (x*y)/b;
}
int main()
{
    long long int m = 0;
    while(cin>>m){
        long long int t = 0, l = 0, l1 = 0, l2 = 0, l3 = 0;
        cin>>l1>>l2>>l3;
        t = lcm(l1,l2);
        l = lcm(t, l3);
        cout<<l-m<<endl;
    }
    return 0;
}
