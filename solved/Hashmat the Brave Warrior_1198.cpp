#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int teamOfhashmat,oponentTeam,difference;
    while(scanf("%lld %lld", &teamOfhashmat,&oponentTeam) != EOF)
    {
        if(teamOfhashmat > oponentTeam)
        {
            difference = teamOfhashmat - oponentTeam;
        }
        else
        {
            difference = oponentTeam - teamOfhashmat;
        }
        printf("%lld\n",difference);
        difference = 0;
    }
    return 0;
}
