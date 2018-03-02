#include<stdio.h>
int main(){
    char s[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int n = 0,i;
    scanf("%d",&n) ;
    if(n>=1 && n<=34){
    for(i=0; i<n; i++){
        printf("%c",s[i]);
    }
        printf("\n");
  }


    return 0;
}
