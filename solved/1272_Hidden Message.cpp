#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) {
        string text;
        getline(cin, text);
        if(text[0] != ' ') {
            cout<<text[0];
        }
        int length = text.length();
        for(int i=1; i<length; i++) {
            if(text[i] != ' ') {
                if(text[i-1] == ' ') {
                    cout<<text[i];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
