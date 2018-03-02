#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n = 0, va = 0, vb = 0, timeNeed = 0;
    while(scanf("%lf %lf %lf", &n, &va, &vb) != EOF) {
        if(vb >= va) {
            cout<<"impossivel"<<endl;
        }
        else {
            timeNeed = n / (va - vb);
            cout<<setprecision(2)<<fixed<<timeNeed<<endl;
        }

    }
    return 0;
}
