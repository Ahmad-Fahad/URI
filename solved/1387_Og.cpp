#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int leftHand = 0, rightHand = 0;
        scanf("%d %d", &leftHand, &rightHand);
        if(leftHand == 0 && rightHand == 0) {
            break;
        }
        else {
            printf("%d\n", leftHand+rightHand);
        }
    }
    return 0;
}
