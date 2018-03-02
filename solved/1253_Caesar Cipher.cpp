#include<bits/stdc++.h>
using namespace std;
int main()
{
        int testCase = 0;
        scanf("%d", &testCase);
        getchar();
        while (testCase--) {
                string message;
                int key = 0;
                cin>>message;
                scanf("%d",  &key );
                int length = message.length();
                for(int i=0; i<length; i++) {
                        int decoded = (int)message[i] - key;
                        decoded = decoded % 90;
                        if(decoded < 65) {
                                decoded = decoded + 26;
                        }
                        printf("%c", decoded );
                }
                cout<<endl;
        }
        return 0;
}
