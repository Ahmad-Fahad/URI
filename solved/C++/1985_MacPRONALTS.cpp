#include<bits/stdc++.h>
using namespace std;
int main()
{
    int transaction = 0, id = 0;
    double sum = 0;
    cin>>transaction;
    while(transaction--) {
        double amount = 0, price = 0;
        cin>>id>>amount;
        switch(id) {
        case 1001:
            price = 1.50;
            break;
        case 1002:
            price = 2.50;
            break;
        case 1003:
            price = 3.50;
            break;
        case 1004:
            price = 4.50;
            break;
        case 1005:
            price = 5.50;
            break;
        }
        sum = sum + (amount * price);
    }
    cout << setprecision (2) << fixed << sum<<endl;

    return 0;
}
