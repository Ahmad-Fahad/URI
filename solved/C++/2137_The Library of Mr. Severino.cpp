#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    vector <int> codes;
    while(scanf("%d", &n) != EOF) {
        int temp = 0;
        for(int i=0; i<n; i++) {
            scanf("%d", &temp);
            codes.push_back(temp);
        }
        sort(codes.begin(), codes.end());
        int limit = codes.size();
        for(int i=0; i<limit; i++) {
            printf("%d\n", codes[i]);
        }
    }
    return 0;
}
