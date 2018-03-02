#include<bits/stdc++.h>
#define l 3
using namespace std;
int main()
{
    while(1) {
        double L = 0, X  = 0;
        scanf("%lf", &L);
        if(L == 0) {
            break;
        }
        else {
            X = (L - l) / L;
            cout<<setprecision(6)<<fixed<<X<<endl;
        }
    }
    return 0;
}
