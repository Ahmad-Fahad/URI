#include<bits/stdc++.h>
using namespace std;
int main()
{
    int wordNumber = 0;
    scanf("%d", &wordNumber);
    string words[wordNumber];
    for(int i=0; i<wordNumber; i++) {
        cin>>words[i];
    }
    for(int i=0; i<wordNumber; i++) {
        int length = words[i].length();
        if(length == 3) {
            for(int j=0; j<3; j++) {
                if(words[i][j] == 'U') {
                    if(words[i][j+1] == 'R') {
                        words[i] = "URI";
                    }
                }
                else if(words[i][j] == 'u') {
                    if(words[i][j+1] == 'r') {
                        words[i] = "uri";
                    }
                }
                else if(words[i][j] == 'O') {
                    if(words[i][j+1] == 'B') {
                        words[i] = "OBI";
                    }
                }
                else if(words[i][j] == 'o') {
                    if(words[i][j+1] == 'b') {
                        words[i] = "obi";
                    }
                }
            }
        }
        cout<<words[i];
        if(i < wordNumber-1) {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
