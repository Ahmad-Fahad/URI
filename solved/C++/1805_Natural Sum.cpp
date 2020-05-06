#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int start = 0, finish = 0, sum = 0;
    cin>>start>>finish;
    start   = start - 1;
    start   = (start * (start + 1) ) / 2;
    finish  = (finish * (finish + 1)) / 2;
    sum = finish - start;
    cout<<sum<<endl;
    return 0;
}
