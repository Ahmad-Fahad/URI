#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        int k = 0, feedback = 0;
        scanf("%d", &k);
        while(k--) {
            scanf("%d", &feedback);
            switch(feedback) {
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            case 4:
                printf("Odranoel\n");
                break;
            }
        }
    }
    return 0;
}
