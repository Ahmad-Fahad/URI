#include<stdio.h>
int main()
{
    int i,n,arr[10000],k = 0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            k = i+1;
            break;
        }
    }
    printf("%d\n",k);
}
