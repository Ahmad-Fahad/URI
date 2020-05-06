#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    cin>>number;
    int length = number.length();
    for(int i=length-1; i>=0; i--) {
        cout<<number[i];
    }
    cout<<endl;
    return 0;
}
