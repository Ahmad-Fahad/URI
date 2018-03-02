#include<stdio.h>
#include<string.h>
int main()
{
    char text[1000];
    int length = 0;
    gets(text);
    length = strlen(text);
    if(length <= 80){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
