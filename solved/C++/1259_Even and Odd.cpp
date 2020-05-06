#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int length = 0, n = 0, evn = 0, od = 0;
    scanf("%lld", &length);
    vector <long long int> numbers, even, odd;
    for(int i=0; i<length; i++) {
        scanf("%lld", &n);
        numbers.push_back(n);
    }
    for(int i=0; i<length; i++) {
        if(numbers[i]%2 == 0) {
            even.push_back(numbers[i]);
        }
        else {
            odd.push_back(numbers[i]);
        }
    }
    evn = even.size();
    od  = odd.size();

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for(int i=0; i<evn; i++) {
            printf("%lld\n", even[i]);
    }
    for(int i=od-1; i>=0; i--) {
            printf("%lld\n", odd[i]);
    }
    return 0;
}
