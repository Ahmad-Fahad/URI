#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int N = 0, a = 0, b = 0, player1Win = 0, player2Win = 0;
        cin>>N;
        if(N == 0)
        {
            break;
        }
        else
        {
            while(N--)
            {
                cin>>a>>b;
                if(a > b)
                {
                    player1Win++;
                }
                else if(a < b)
                {
                    player2Win++;
                }
            }
        }
        printf("%d %d\n", player1Win, player2Win);
    }


    return 0;
}
