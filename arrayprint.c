#include<stdio.h>
int main(){
    char ch[20]= "Hey, this is Krishna";
    int i=0;
    while(ch[i] !='\0'){
      //  ch[1]=67;
        printf("%c",*(ch+i));
        
        i++;
        
    }
}
