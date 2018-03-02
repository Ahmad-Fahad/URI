#include<stdio.h>
int main(){
    double increase = 0,temp = 0,salary = 0,x,y,z,result = 0;
    int i,t;
    x = 1000 * 8/100;
    y = 1500 * 18/100;
    scanf("%lf",&salary);
    if(salary >0 && salary <= 2000){
         printf("Isento\n");
    }
    else{
    if(salary > 4500){
        increase = salary - 4500;
               z = increase * 28/100;
          result = x + y + z;

    }
    else if(salary >= 3000.01 && salary <= 4500){
        increase = salary - 3000;
               z = increase * 18/100;
          result = z + x;
    }
    else if(salary >= 2000.01 && salary <=3000){
       increase  = salary - 2000;
               z = increase * 8/100;
          result = z;
    }
    printf("R$ %.2lf\n",result);
}
    return 0;
}
