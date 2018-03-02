#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase,playerNumber,cases = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        cases++;

        scanf("%d",&playerNumber);

        int ages[playerNumber];

        for(int i=0; i<playerNumber; i++)
        {
            scanf("%d",&ages[i]);
        }
        int mid = playerNumber / 2;

        printf("Case %d: %d\n",cases,ages[mid]);

    }
    return 0;
}
