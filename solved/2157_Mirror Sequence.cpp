#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        int start = 0, ending = 0;
        stringstream strm;
        scanf("%d %d", &start, &ending);
        string sequence, temp;
        for(int i=start; i<=ending; i++) {
            printf("%d", i);
            strm << i;
            strm >> temp;
            sequence = sequence + temp;
            strm.clear();
        }
        reverse(sequence.begin(), sequence.end());
        cout<<sequence<<endl;
    }
    return 0;
}
