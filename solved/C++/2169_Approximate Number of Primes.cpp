#include<bits/stdc++.h>
using namespace std;
int main() {
    double n;
    scanf("%lf", &n);
    double minLimit = n / log(n);
    double maxLimit = 1.25506 * minLimit;
    printf("%.1lf %.1lf\n", minLimit, maxLimit);
}
