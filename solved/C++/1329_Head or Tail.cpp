#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int n = 0, johnWin = 0, maryWin = 0 , tos = 0;
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        else {
            for(int i=0; i<n; i++) {
                scanf("%d", &tos);
                if(tos == 0) {
                    maryWin++;
                }
                else {
                    johnWin++;
                }
            }
            printf("Mary won %d times and John won %d times\n", maryWin, johnWin);
        }
    }
    return 0;
}
