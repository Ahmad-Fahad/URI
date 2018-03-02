#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    getchar();
    while(testCase--) {
        string text;
        getline(cin, text);
        int length = text.length();
        int flags[26], letterCount = 0;
        for(int i=0; i<26; i++) {
            flags[i] = 0;
        }
        for(int i=0; i<length; i++) {
            if(text[i] >= 65 && text[i] <= 90) {
                int index = text[i] - 65;
                flags[index] = 1;
            }
            else if(text[i] >= 97 && text[i] <= 122) {
                int index = text[i] - 97;
                flags[index] = 1;
            }
        }
        for(int i=0; i<26; i++) {
            if(flags[i]) {
               letterCount++;
            }
        }
        if(letterCount == 26) {
            printf("frase completa\n");
        }
        else if(letterCount >= 13) {
            printf("frase quase completa\n");
        }
        else {
            printf("frase mal elaborada\n");
        }
    }
    return 0;
}
