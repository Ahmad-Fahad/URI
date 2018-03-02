#include<stdio.h>
#include<math.h>
int main(){
  double x1,x2,y1,y2;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);


  double tempreslt1 = 0,tempreslt2 = 0,reslt = 0;
  tempreslt1 = (x2-x1) * (x2-x1);
  tempreslt2 = (y2-y1) * (y2-y1);

  reslt = sqrt(tempreslt1+tempreslt2);

  printf("%.4lf\n",reslt);





}
