#include<stdio.h>
int main()
{
    double a,b,c,d,media=0,reex=0,finalmedia = 0;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    media = (a*2 + b*3 + c*4 + d*1)/10;
    if(media >= 7){
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");
    }
    else if(media < 5){
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5 && media <= 6.9){
        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%lf",&reex);
        finalmedia = (media+reex)/2;

    if(finalmedia >= 7){

        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n",finalmedia);
    }
    else if(finalmedia < 5){

        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",finalmedia);
    }
}
    return 0;
}
