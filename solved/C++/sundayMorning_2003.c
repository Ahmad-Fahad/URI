#include<stdio.h>
int main()
{
    int htime = 0,mtime = 0,delay = 0,ttime = 0;
    while(scanf("%d:%d",&htime,&mtime) != EOF){
        if(htime < 7){
            delay = 0;
        }
        else{
            if(htime == 8){
                delay = 60 + mtime;
            }
            else if(htime > 8){
                ttime = htime - 8;
                delay = ttime*60 + mtime + 60;
            }
            else if(htime < 8){
                delay = mtime;
            }
        }
        printf("Atraso maximo: %d\n",delay);
        delay = 0;
    }
    return 0;
}
