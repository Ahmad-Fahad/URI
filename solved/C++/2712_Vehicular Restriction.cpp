#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    while(n--) {
        int digit_8 = 0, hipen = 0, upperCase = 1, digits = 1, count_4 = 0;
        string plateNo;
        cin>>plateNo;
        int length = plateNo.length();
        if(length == 8) {
            digit_8 = 1;
        }
        if(plateNo[3] == '-') {
            hipen = 1;
        }
        for(int i=0; i<3; i++) {
            if(plateNo[i] < 'A' || plateNo[i] > 'Z') {
                upperCase = 0;
                break;
            }
        }
        count_4 = length - 4;
        if(count_4 == 4) {
            for(int i=4; i<length-1; i++) {
                if(plateNo[i] < '0' || plateNo[i] > '9') {
                    digits = 0;
                    break;
                }
            }
        }
        else {
            digits = 0;
        }
        if(digit_8 == 1 && hipen == 1 && upperCase == 1 && digits == 1) {
            char lastDigit = plateNo[length-1];
            if(lastDigit == '1' || lastDigit == '2') {
                printf("MONDAY\n");
            }
            else if(lastDigit == '3' || lastDigit == '4') {
                printf("TUESDAY\n");
            }
            else if(lastDigit == '5' || lastDigit == '6') {
                printf("WEDNESDAY\n");
            }
            else if(lastDigit == '7' || lastDigit == '8') {
                printf("THURSDAY\n");
            }
            else if(lastDigit == '9' || lastDigit == '0') {
                printf("FRIDAY\n");
            }
            else {
                printf("FAILURE\n");
            }
        }
        else {
            printf("FAILURE\n");
        }
    }
    return 0;
}
