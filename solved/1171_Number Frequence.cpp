#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, temp = 0, countFrequency = 0;
    scanf("%d", &n);
    int arr[2001];
    for(int i=0; i<2002; i++) {
        arr[i] = 0;
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        arr[temp]++;
    }
    for(int i=0; i<2001; i++) {
        if(arr[i] != 0) {
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }
    return 0;
}
