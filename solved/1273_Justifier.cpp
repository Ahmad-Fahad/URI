#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {

        int number = 0;
        scanf("%d", &number);
        if(number == 0) {
            break;
        }
        else {
            int length[number], lengthDiff = 0;
            string names[number];
            for(int i=0; i<number; i++) {
                cin>>names[i];
                length[i] = names[i].length();
            }
            int maxLength = 0;
            for(int i=0; i<number; i++) {
                if(maxLength < length[i]) {
                    maxLength = length[i];
                }
            }
            for(int i=0; i<number; i++) {
                lengthDiff = maxLength - length[i];
                while(lengthDiff--) {
                    printf(" ");
                }
                cout<<names[i]<<endl;
            }
        }
    }
    return 0;
}
