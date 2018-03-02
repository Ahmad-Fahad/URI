#include<stdio.h>
int main(){
    char text[100000];
    int test,length = 0;
    scanf("%d",&test);
    getchar();
    while(test--){
    scanf("%s",&text);
    length = strlen(text);
    printf("%.2lf\n",0.01*length);
   }
   return 0;
}
