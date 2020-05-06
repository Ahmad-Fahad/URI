#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        long long int flag = 0, languageNo = 0, i = 0;
        scanf("%lld", &languageNo);
        getchar();
        string language, tempString = "";
        while(languageNo--) {
            cin>>language;
            if((tempString != language) && i>0) {
                flag = 1;
            }
            tempString = language;
            i++;
        }
        if(flag == 1) {
            printf("ingles\n");
        }
        else {
            cout<<language<<endl;
        }
    }
    return 0;
}
