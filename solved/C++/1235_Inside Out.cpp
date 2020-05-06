#include<bits/stdc++.h>
using namespace std;
int main() {
    int lines = 0;
    scanf("%d", &lines);
    getchar();
    while(lines--) {
        string text;
        getline(cin, text);
        int length = text.length();
        int mid    = length / 2;
        for(int i=mid-1; i>=0; i--) {
            cout<<text[i];
        }
        for(int i=length-1; i>=mid; i--) {
            cout<<text[i];
        }
        cout<<endl;
    }

    return 0;
}
