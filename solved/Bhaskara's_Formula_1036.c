#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d=0,r1=0,r2=0,dk=0;
    scanf("%lf %lf %lf",&a,&b,&c);
     dk = b*b - 4*a*c;
    if(a == 0){
        printf("Impossivel calcular\n");
    }
    else if(dk<0){
        printf("Impossivel calcular\n");
    }
    else{
        d = sqrt(dk);
        r1 = (-b + d) / (2*a);
        r2 = (-b - d) / (2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
return 0;
}
