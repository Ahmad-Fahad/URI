#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    int titanNumber = 0, wallHeight = 0;
    scanf("%d %d", &titanNumber, &wallHeight);
    getchar();
    int height = 0;
    string titan, temp, titanName[titanNumber];
    for(int i=0; i<titanNumber; i++) {
        getline(cin, titan);
        int endDigit = titan.length();
        int startDigit = 0;
        for(int i=0; i<endDigit; i++) {
            if(titan[i] >= 48 && titan[i] <= 58) {
                startDigit = i;
                break;
            }
        }
        string digits;
        digits = titan.substr(startDigit, endDigit);
        titan  = titan.substr(0, startDigit-1);
        stringstream strm;
        strm << digits;
        strm >> height;
        if(height > wallHeight) {
            titanName[k] = titan;
            k++;
        }
        strm.clear();
    }
    for(int l=0; l<k; l++) {
        cout<<titanName[l]<<endl;
    }
    return 0;
}
