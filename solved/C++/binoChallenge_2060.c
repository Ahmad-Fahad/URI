#include<stdio.h>
int main()
{
    int n,i,data[100000],c = 0, k = 0,j,q = 0;
    int values[] = {2,3,4,5};
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&data[i]);
    }
   for(i=0; i<4; i++){
        for(j=0; j<n; j++){
            if(data[j]%values[i] == 0){
                c++;
            }
        }
       printf("%d Multiplo(s) de %d\n",c,values[i]);
       c = 0;
   }

return 0;
}
