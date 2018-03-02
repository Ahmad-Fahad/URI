#include<stdio.h>
int main()
{
    int n = 0,i,k = 0;
    scanf("%d",&n);
    int t[n];
    for(i=0; i<n; i++){
        scanf("%d",&t[i]);
    }

    int min = t[0];
    for(i=0; i<n; i++)
    {
        if(min > t[i])
        {
            min = t[i];
            k = i;
        }
    }
    printf("%d\n",k+1);
    return 0;
}
