#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int position = 0;
    scanf("%lld", &position);
    if(position == 1) {
        printf("Top 1\n");
    }
    else if(position >1 && position <=3) {
        printf("Top 3\n");
    }
    else if(position > 3 && position <= 5) {
        printf("Top 5\n");
    }
    else if(position > 5 && position <= 10) {
        printf("Top 10\n");
    }
    else if(position > 10 && position <= 25) {
        printf("Top 25\n");
    }
    else if(position > 25 && position <= 50) {
        printf("Top 50\n");
    }
    else if(position > 50 && position <= 100) {
        printf("Top 100\n");
    }
    return 0;
}
