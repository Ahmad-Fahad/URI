#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) {
        if((a == 1 && b == 1 && c == 1) || (a == 0 && b == 0 && c == 0)) {
            printf("*\n");
        }
        else {
            if((a == 1 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) {
                printf("C\n");
            }
            else if((a == 0 && b == 1 && c == 1) || (a == 1 && b == 0 && c == 0) ) {
                printf("A\n");
            }
            else if((a == 0 && b == 1 && c == 0) || (a == 1 && b == 0 && c == 1) ) {
                printf("B\n");
            }
        }

    }

    return 0;
}
