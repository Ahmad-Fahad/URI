#include<stdio.h>
int main(){
     int totalHdogs = 0,contastant = 0;
     double avg = 0,average = 0;
    scanf("%d %d",&totalHdogs,&contastant);
    avg = (double)totalHdogs/contastant;

    printf("%.2lf\n",avg);
    return 0;
}
