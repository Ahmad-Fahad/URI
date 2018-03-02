#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d", &n);
    double root5 = sqrt(5);
    double fibonacci = pow((1+root5)/2.0, n) - pow((1-root5)/2.0, n);
    fibonacci = fibonacci / root5;
    printf("%.1lf\n", fibonacci);
    return 0;
}
