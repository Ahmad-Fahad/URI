#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int dollar = 0, d = 0, cent = 0;
    while(scanf("%lld %lld", &dollar, &cent) != EOF) {
        d = dollar;
        int flag = 0;
        if(dollar == 0) {
            flag = 1;
        }
        int length = 0;
        while(d != 0) {
            length++;
            d = d/10;
        }
        long long int dlr[length];
        int c = 0;
        while(dollar != 0) {
            dlr[c++] = dollar % 1000;
            dollar = dollar/1000;
        }
        cout<<"$";
        if(flag == 1) {
            cout<<"0";
        }
        else {
        for(int i=c-1; i>=0; i--) {
            if(i == c-1) {
                cout<<dlr[i];
            }
            else{

                if(dlr[i] < 10) {
                    cout<<"00"<<dlr[i];
                }
                else if(dlr[i] < 100) {
                    cout<<"0"<<dlr[i];
                }
                else {
                    cout<<dlr[i];
                }
            }
            if(i != 0) {
                    cout<<",";
            }
        }
    }
        cout<<".";
        if(cent < 10) {
            cout<<"0"<<cent;
        }
        else {
            cout<<cent;
        }
        cout<<endl;
    }
    return 0;
}
