#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0, m = 0;
    while(scanf("%lld %lld", &n, &m) != EOF) {
        vector <long long int> model;
        long long int temp = 0, cost = 0;
        for(int i=0; i<n; i++) {
            scanf("%lld", &temp);
            model.push_back(temp);
        }
        sort(model.begin(), model.end());
        for(int i=n-1; i>=n-m; i--) {
            cost = cost + model[i];
        }
        cout<<cost<<endl;
    }
    return 0;
}
