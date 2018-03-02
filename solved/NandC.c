#include<stdio.h>
int main(){
    int notes[] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    double input = 0;
    long long int note = 0,i,x;
    scanf("%lf",&input);
    input = input * 100;
    note  = (int)input;
    printf("NOTAS:\n");
    for(i=0; i<6;i++){
       x    = note/notes[i];
       note = note%notes[i];
       printf("%lld nota(s) de R$ %d.00\n",x,notes[i]/100);
    }
    printf("MOEDAS:\n");
    for(i=6; i<12;i++){
       x    = note/notes[i];
       note = note%notes[i];
       printf("%lld moeda(s) de R$ %.2lf\n",x,(double)notes[i]/100);
    }

return 0;
}
