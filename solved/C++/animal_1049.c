#include<stdio.h>
#include<string.h>
int main(){
    char w1[10];
    char w2[10];
    char w3[10];


    scanf("%s %s %s",&w1,&w2,&w3);
    if(strcmp(w1,"vertebrado") == 0){

      if(strcmp(w2,"ave") == 0){

        if(strcmp(w3,"carnivoro") == 0){
            printf("aguia\n");
        }
        else if(strcmp(w3,"onivoro") == 0){
            printf("pomba\n");
        }
       }
       else if(strcmp(w2,"mamifero") == 0){

         if(strcmp(w3,"onivoro") == 0){
            printf("homem\n");
         }
         else if(strcmp(w3,"herbivoro") == 0){
            printf("vaca\n");
         }
       }
    }
     if(!strcmp(w1,"invertebrado")){
                      if(!strcmp(w2,"inseto")){
                               if(!strcmp(w3,"hematofago")){
                                                   printf("pulga\n");
                               }
                               if(!strcmp(w3,"herbivoro")){
                                                   printf("lagarta\n");
                               }
                      }
                      if(!strcmp(w2,"anelideo")){
                               if(!strcmp(w3,"hematofago")){
                                                  printf("sanguessuga\n");
                               }
                               if(!strcmp(w3,"onivoro")){
                                                  printf("minhoca\n");
                               }
                      }
    }
return 0;
}
