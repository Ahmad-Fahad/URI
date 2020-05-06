#include<stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int n = min(x,y);
    int m = min(n,z);
    printf("%d\n",m);
    if(m == x){
        if(y<z){
            printf("%d\n%d\n",y,z);
        }
        else{
            printf("%d\n%d\n",z,y);
        }
    }
    if(m == y){
        if(x<z){
            printf("%d\n%d\n",x,z);
        }
        else{
            printf("%d\n%d\n",z,x);
        }
    }
    if(m == z){
        if(y<x){
            printf("%d\n%d\n",y,x);
        }
        else{
            printf("%d\n%d\n",x,y);
        }
    }
    printf("\n%d\n%d\n%d\n",x,y,z);

    return 0;
}
