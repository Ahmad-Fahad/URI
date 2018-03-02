#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    getchar();
    while(testCase--) {
        string a, b, subA;
        cin>>a>>b;
        int lengthA = a.length() - 1;
        int lengthB = b.length() - 1;
        if(lengthA == lengthB) {
            if(a == b) {
                cout<<"encaixa"<<endl;
            }
            else {
                cout<<"nao encaixa"<<endl;
            }
        }
        else if(lengthA < lengthB) {
            cout<<"nao encaixa"<<endl;
        }
        else {
            subA = a.substr(lengthA-lengthB, lengthA);
            if(subA == b) {
                cout<<"encaixa"<<endl;
            }
            else {
                cout<<"nao encaixa"<<endl;
            }
        }
    }
    return 0;
}
