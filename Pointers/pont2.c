// exercises using pointers

#include<stdio.h>

int len(char *s){
char *ptr2=&s[0];
char *ptr1=&s[0];
while(*ptr2!='\0'){
    ptr2++;
    }
return (int) (ptr2-ptr1);
}


char *stins(char *dest, char *orig){
int i=len(orig);
int j=len(dest);
while(j>=0){
    dest[j+i]=dest[j];
    j=j-1;
    }
int k=0;
while(orig[k]!='\0'){
    dest[k]=orig[k];
    k++;
    }
return dest;
}
int main(){
char dest[100];
char orig[100];
gets(dest);
gets(orig);
printf("%s",stins(dest,orig));


}


