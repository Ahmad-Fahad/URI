#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vitamins[] = {120, 85, 85, 70, 56, 50, 34};
    string foods[] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
    while(1)
    {
        string foodName;
        int foodTakes = 0, nutrition = 0, amount = 0;
        scanf("%d", &foodTakes);
        if(!foodTakes)
        {
            break;
        }
        else
        {
            for(int i=0; i<foodTakes; i++)
            {
                cin>>amount;
                getchar();
                getline(cin, foodName);
                for(int j=0; j<7; j++)
                {
                    if(foodName == foods[j])
                    {
                        nutrition = nutrition + amount * vitamins[j];
                    }
                }
            }
        }
        if(nutrition >= 130)
        {
            printf("Menos %d mg\n", nutrition - 130);
        }
        else if(nutrition <= 110)
        {
            printf("Mais %d mg\n", 110 - nutrition);
        }
        else
        {
            printf("%d mg\n", nutrition);
        }
    }



    return 0;
}
