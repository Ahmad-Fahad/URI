#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    string name, test;
    cin>>name;
    int length = name.length();
    for(int i=0; i<length; i++) {
        if(name[i] == 'z') {
            test = name.substr(i, i+5);
            if(test == "zelda") {
                flag = 1;
                break;
            }
        }
    }
    if(flag != 1) {
        cout<<"	Link Tranquilo"<<endl;
    }
    else {
        cout<<"	Link Bolado"<<endl;
    }
    return 0;
}
