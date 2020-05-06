#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0, plug[5], outlet[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &plug[i]);
    }
    for(int i=0; i<5; i++) {
        scanf("%d", &outlet[i]);
    }
    for(int i=0; i<5; i++) {
        if(plug[i] == outlet[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("N\n");
    }
    else {
        printf("Y\n");
    }
    return 0;
}
