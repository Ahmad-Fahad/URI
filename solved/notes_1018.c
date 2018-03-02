#include<stdio.h>
int main(){
    int notes[] = {100,50,20,10,5,2,1};
    long long int n=0,r=0;
    int x,i;

    scanf("%lld",&n);
    printf("%d\n",n);
    for(i=0; i<7;i++){
       x=n/notes[i];
       n=n%notes[i];
       printf("%d nota(s) de R$ %d,00\n",x,notes[i]);
    }
    return 0;
}
