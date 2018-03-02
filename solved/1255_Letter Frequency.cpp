#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) {
        string text;
        int freqCount[200];
        for(int i=0; i<200; i++) {
            freqCount[i] = 0;
        }
        getline(cin, text);
        int length = text.length();
        for(int i=0; i<length; i++) {
            if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
                if(text[i] >= 'A' && text[i] <= 'Z') {
                    int index = (int)text[i] + 32;
                    freqCount[index]++;
                }
                int index = (int)text[i];
                freqCount[index]++;
            }
        }
        int maxFreq = 0;
        for(int i=97; i<=122; i++) {
            if(freqCount[i] > maxFreq) {
                maxFreq = freqCount[i];
            }
        }
        for(int i=97; i<=122; i++) {
            if(freqCount[i] == maxFreq) {
                printf("%c", i);
            }
        }
        cout<<endl;
    }
    return 0;
}
