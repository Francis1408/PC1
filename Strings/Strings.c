// Working with strings

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordem(char s[]){
int i=0,j=0;
char aux;
while(s[i]!='\0'){
    while(s[j]!='\0'){
        if(s[i]>s[j]){
            aux=s[i];
            s[i]=s[j];
            s[j]=aux;
            }
        j++;
        }
    s[j]='\0';
    i++;
    j=i;
    }
s[i]='\0';

}



int main(){
char s[100];
gets(s);
ordem(s);
int indice=0;
while(s[indice]!='\0'){
    printf("%c",s[indice]);
    indice++;
    }

}
