#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

 char* fizzbuzz(int number ){
char *ret;
ret="";
if (number==0){
    ret="0";
}else if (number%5==0&&number%3==0){
    ret="fizzbuzz";
}else if (number%5==0){
    ret="buzz";
}else if(number%3==0){
    ret="fizz";
}else{
char ret2[4];
sprintf(ret2,"%d",number);
ret=ret2;
}

return ret;
}
int main(int argc, char *argv[]){
    char x[4]="";
    int ver=1;
if(argc>2 || isdigit(*(*argv+1))==0){

        while(strcmp(x,"")==0 || ver==0){

    puts("the argument need to be a  number 999<, please and only one argument please try again! \n");
        fgets(x,4,stdin);
        fflush(stdin);
        for(int i=0;i<3;i++){
            if(isalpha(x[i])!=0){
            if(isdigit(x[i])==0){
                ver=0;
            }
            }
        }
        }
}
int number =atoi(x);
char *c;
for (int i=0;i<=number;i++){
    c=fizzbuzz(i);
    puts(c);
}

return 0;
}
