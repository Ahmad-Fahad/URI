#include<stdio.h>
int main(){
    int h1,h2,m1,m2,hr,mr;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1<h2){

        if(m1<m2){
            mr = m2 - m1;
        }
        else{
            mr = 60 - m1 + m2;
            h1 = h1 + 1;
        }

         hr = h2 - h1;
          if(mr == 60){
            mr = 0;
            hr = hr + 1;
        }
    }
    else{

        if(m1<m2){
            mr = m2 - m1;
        }
        else{
            mr = 60 - m1 + m2;
            h1 = h1 + 1;
        }

         hr = 24 + h2 - h1;
          if(mr == 60){
            mr = 0;
            hr = hr + 1;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,mr);
}
