#include<stdio.h>
int main()
{
    int i;
    char number[5];
    gets(number);
    int length = 0;
    length = strlen(number);
    if(length == 3){
    switch(number[0]){
    case '1':
        printf("C");
        break;
    case '2':
        printf("CC");
        break;
    case '3':
        printf("CCC");
        break;
    case '4':
        printf("CD");
        break;
    case '5':
        printf("D");
        break;
    case '6':
        printf("DC");
        break;
    case '7':
        printf("DCC");
        break;
    case '8':
        printf("DCCC");
        break;
    case '9':
        printf("CM");
        break;
        }
    switch(number[1]){
    case '1':
        printf("X");
        break;
    case '2':
        printf("XX");
        break;
    case '3':
        printf("XXX");
        break;
    case '4':
        printf("XL");
        break;
    case '5':
        printf("L");
        break;
    case '6':
        printf("LX");
        break;
    case '7':
        printf("LXX");
        break;
    case '8':
        printf("LXXX");
        break;
    case '9':
        printf("XC");
        break;
        }
    switch(number[2]){
    case '1':
        printf("I");
        break;
    case '2':
        printf("II");
        break;
    case '3':
        printf("III");
        break;
    case '4':
        printf("IV");
        break;
    case '5':
        printf("V");
        break;
    case '6':
        printf("VI");
        break;
    case '7':
        printf("VII");
        break;
    case '8':
        printf("VIII");
        break;
    case '9':
        printf("IX");
        break;
        }
    }
    if(length == 2){
    switch(number[0]){
    case '1':
        printf("X");
        break;
    case '2':
        printf("XX");
        break;
    case '3':
        printf("XXX");
        break;
    case '4':
        printf("XL");
        break;
    case '5':
        printf("L");
        break;
    case '6':
        printf("LX");
        break;
    case '7':
        printf("LXX");
        break;
    case '8':
        printf("LXXX");
        break;
    case '9':
        printf("XC");
        break;
        }
    switch(number[1]){
    case '1':
        printf("I");
        break;
    case '2':
        printf("II");
        break;
    case '3':
        printf("III");
        break;
    case '4':
        printf("IV");
        break;
    case '5':
        printf("V");
        break;
    case '6':
        printf("VI");
        break;
    case '7':
        printf("VII");
        break;
    case '8':
        printf("VIII");
        break;
    case '9':
        printf("IX");
        break;
        }
    }
    if(length == 1){
    switch(number[0]){
    case '1':
        printf("I");
        break;
    case '2':
        printf("II");
        break;
    case '3':
        printf("III");
        break;
    case '4':
        printf("IV");
        break;
    case '5':
        printf("V");
        break;
    case '6':
        printf("VI");
        break;
    case '7':
        printf("VII");
        break;
    case '8':
        printf("VIII");
        break;
    case '9':
        printf("IX");
        break;
        }
    }
    printf("\n");
    return 0;
}
