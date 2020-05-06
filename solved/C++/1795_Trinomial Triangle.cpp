#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int r = 0, sum = 1;
    cin>>r;
    if(r == 0) {
        cout<<"1"<<endl;
    }
    else {
        for(int i=0; i<r; i++) {
            sum = 3*sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
