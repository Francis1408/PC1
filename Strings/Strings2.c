#include<stdio.h>

int contar(char *str1, char *str2){
int contador=0;
int j=0, i=0,k=0,x=0;
while(str1[j]!='\0'){
    if(str2[i]==str1[j]){
        i++;
        while(str2[i]!='\0'){
            k++;
            if(str2[i]==str1[j+k])
                i++;
            else if(str1[j+k]=' ')
                continue;
            else
                x=1;
                }
        if(x=0);
            contador++;
        }
        x=0;
        k=0;
        i=0;
        j++;
    }
return contador;
}
int main(){
char str1[]={"12prog 12 34de 123 4 comp1234"};
char str2[100];
gets(str2);
printf("%d",contar(str1,str2));


}
