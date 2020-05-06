#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int length = 0, position = 0, direction = 0, north = 0, east = 1, south = 2, west = 3;
        scanf("%d", &length);
        if(length == 0)
        {
            break;
        }
        else
        {
            getchar();
            string commands;
            cin>>commands;
            for(int i=0; i<length; i++)
            {
                if(commands[i] == 'D')
                {
                    position = position + 1;
                }
                else
                {
                    position = position - 1;
                    if(position < 0)
                    {
                        position = position + 4;
                    }
                }
                position = position % 4;
            }
            switch(position)
            {
            case 0:
                printf("N\n");
                break;
            case 1:
                printf("L\n");
                break;
            case 2:
                printf("S\n");
                break;
            case 3:
                printf("O\n");
                break;
            }
        }
    }

    return 0;
}
