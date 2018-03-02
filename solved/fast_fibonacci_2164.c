#include<stdio.h>
#include<math.h>
int power(int b,int p){
    int powr = 1,i;
    for(i=0; i<p; i++){
        powr = powr * b;
    }
    return powr;
}
int main()
{
    double nthfebo;
    int n;
    double rfive    = sqrt(5);
    double topleft  = (1 + rfive)/2;
    double topright = (1 - rfive)/2;
    scanf("%d",&n);
    double left  = power(topleft,n);
    double right = power(topright,n);
    nthfebo = (left-right)/rfive;
    printf("%.1lf\n",nthfebo);
}
