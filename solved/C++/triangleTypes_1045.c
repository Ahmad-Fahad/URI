#include<stdio.h>
int main()
{
    int i,j;
    double a,b,c;
    double triangle[3],temp;
    for(i=0; i<3; i++){
        scanf("%lf",&triangle[i]);
    }

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if(triangle[j] < triangle[j+1]){
                temp          = triangle[j+1];
                triangle[j+1]   = triangle[j];
                triangle[j] = temp;
            }
        }
    }
    a = triangle[0];
    b = triangle[1];
    c = triangle[2];
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == b*b + c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b &&  b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || a == c || b == c ){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
