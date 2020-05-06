#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        string text, newString = "", preString = "";
        getline(cin, text);
        if(text == "0") {
            cout<<preString<<endl;
            break;
        }
        else {
            int length = text.length();
            int countChar = 0;
            for(int i=0; i<length; i++) {
                if(text[i] != ' ') {
                    countChar++;
                    newString = newString + text[i];
                }
                else if(text[i] == ' ' || (i == length - 2)) {
                    cout<<countChar;
                    countChar = 0;
                    int preLength = preString.length();
                    int newLength = newString.length();
                    if(newLength > preLength) {
                        preString = newString;
                    }
                    newString = "";
                    if(i != length) {
                        cout<<"-";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
