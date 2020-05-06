#include<bits/stdc++.h>
using namespace std;
int main()
{
    int opinion = 0, ok = 0;
    long long int population = 0;
    scanf("%lld", &population);
    for(int i=0; i<population; i++) {
        scanf("%d", &opinion);
        if(!opinion) {
            ok++;
        }
    }
    if(ok*2 > population) {
        printf("Y\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}
