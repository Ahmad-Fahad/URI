#include<bits/stdc++.h>
using namespace std;
long long int power(long long int n) {
    long long int r = 1;
    if(n == 0) {
        return 1;
    }
    else {
        for(int i=0; i<n; i++) {
            r = r*2;
        }
        return r;
    }
}
int main() {
    int testCase = 0;
    cin>>testCase;
    while(testCase--) {
        long long int n = 0, row = 0, c = 0;
        cin>>row;
        for(int i=0; i<row; i++) {
            c += power(i);
        }
        cout<<c<<endl;
    }
    return 0;
}

