#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,length = 0,i;
    char number[100];
        scanf("%s",&number);
        int c = 0;
        length = strlen(number);
        for(i=0; i<length; i++)
        {
            if(number[i] == '1')
            {
                c++;
            }
        }
        if(c%2 == 0)
        {
            printf("%s",number);
            printf("0\n");
        }
        else
        {
            printf("%s",number);
            printf("1\n");
        }
    return 0;
}
