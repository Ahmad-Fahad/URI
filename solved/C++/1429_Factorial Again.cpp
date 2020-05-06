#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    int product = 1;
    if(n != 0) {
        for(int i=1; i<=n; i++) {
            product = product*i;
        }
    }
    return product;
}
int main()
{
    int acm = 0, counter = 0, r = 0, decimal = 0;
    while(1){
        cin>>acm;
        if(acm == 0) {
            break;
        }
        else {
            while(acm != 0) {
                r = acm % 10;
                decimal = decimal + factorial(++counter)*r;
                acm = acm / 10;
            }
        cout<<decimal<<endl;
        decimal = 0;
        counter = 0;
        }
    }
    return 0;
}
