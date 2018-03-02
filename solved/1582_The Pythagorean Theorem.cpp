#include<bits/stdc++.h>
using namespace std;
int gcdCal(int a, int b) {
    int d = 0;
    while(a != 0)
    {
        d = a;
        a = b % a;
        b = d;
    }
    return b;
}
int main()
{
    int x = 0, y = 0, z = 0;
    while(scanf("%d %d %d", &x, &y, &z) != EOF) {
        if(x*x + y*y == z*z || x*x + z*z == y*y || z*z + y*y == x*x) {
            int gcd = gcdCal(x, y);
                gcd = gcdCal(gcd, z);
            if(gcd == 1) {
                printf("tripla pitagorica primitiva\n");
            }
            else {
                printf("tripla pitagorica\n");
            }
        }
        else {
            printf("tripla\n");
        }
    }

    return 0;
}
