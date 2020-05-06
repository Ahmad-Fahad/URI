#include<bits/stdc++.h>
using namespace std;
int main()
{
    int clothes = 0, la = 0, lb = 0, sa = 0, sb = 0;
    scanf("%d %d %d %d %d", &clothes, &la, &lb, &sa, &sb);
    if(clothes >= la && clothes <= lb) {
        if(clothes >= sa && clothes <= sb) {
            printf("possivel\n");
        }
        else {
            printf("impossivel\n");
        }
    }
    else {
        printf("impossivel\n");
    }
    return 0;
}
