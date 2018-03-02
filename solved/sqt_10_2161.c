#include<stdio.h>
int main()
{
  double n , denominator = 0,sqt = 0;
  scanf("%lf",&n);
  while(n--){
    denominator = 6 + denominator;
    denominator = 1.0 / denominator;
  }
  sqt  = 3 + denominator ;
  printf("%.10lf\n",sqt);
  return 0;
}
