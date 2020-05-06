#include<stdio.h>
int absolute(int a,int b){
    int diff =0;
    diff     = a-b;
    if(diff<0){
        diff = diff * -1;
    }
    return diff;
}
int comp(int a,int b){
    int c=0;
    int major=0;
    c     = absolute(a,b);
    major = a+b+c;
    return major/2;
}
int main(){
    int x,y,z,n,m;
    scanf("%d %d %d",&x,&y,&z);
    m=comp(x,y);
    n=comp(m,z);
    printf("%d eh o maior\n",n);


}
