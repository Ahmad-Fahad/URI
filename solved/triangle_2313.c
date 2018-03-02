#include<stdio.h>
int main()
{
    long long int x,y,z,i,j,arr[3],t,x2,y2,z2;
    scanf("%lld %lld %lld",&x,&y,&z);
    x2 = x * x;
    y2 = y * y;
    z2 = z *z;
    if(x+y>z && y+z>x && z+x>y){
        if(x == y && y == z){
            printf("Valido-Equilatero\n");
        }
        else if(x != y && y != z && z != x){
            printf("Valido-Escaleno\n");
        }
        else if((x == y && x != z) || (x == z && x != y) || (z == y && y != x) ){
            printf("Valido-Isoceles\n");
        }
        if((x2 == y2+z2) || (y2 == z2+x2) || (z2 == y2+x2)){
            printf("Retangulo: S\n");
        }
        else{
             printf("Retangulo: N\n");
        }
    }
    else{
        printf("Invalido\n");
    }


    return 0;
}
