#include<stdio.h>
int main(){
    double salary =0,percent = 0,newSalary = 0,increace = 0;
    scanf("%lf",&salary);
    if(salary>=0 && salary<=400){
        percent = 15;
    }
    else if(salary>400.00 && salary<=800){
        percent = 12;
    }
    else if(salary>800.00 && salary<=1200 ){
        percent = 10;
    }
    else if(salary>1200.00 && salary<=2000){
        percent = 7;
    }
    else{
        percent = 4;
    }

    increace  = salary * (percent/100);
    newSalary = salary + increace;
    printf("Novo salario: %.2lf\n",newSalary);
    printf("Reajuste ganho: %.2lf\n",increace);
    printf("Em percentual: %d %%\n",(int)percent);
    return 0;
}
