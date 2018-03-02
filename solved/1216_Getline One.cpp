#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int distance = 0, countName = 0;
    double sum = 0, average = 0;
    while(getline(cin, name)) {
        scanf("%d", &distance);
        getchar();
        sum = sum + distance;
        countName++;
    }
    average = sum / (double)countName;
    printf("%.1lf\n",average);
    return 0;
}
