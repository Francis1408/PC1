// Indica as letras com quantidade N em um frase
// Shows the letters which repeats N times in a phrase  

#include<stdio.h>
#include<stdlib.h>


int confere(char letra,char *let){
int i;
for(i=0;let[i]!='\0';i++){
    if(letra==let[i])
        return 0;
     else
        i++;
    }
return 1;
}

void contador(char *frase, char *let){
int i=0,j=0,contador=0,maior=0,indice=1;
char letra;
for(i=0;frase[i]!='\0';i++,contador=0){
    for(j=0;frase[j]!='\0';j++){
        if(frase[i]==frase[j])
            contador++;
        }
    if(contador>maior){
        let=realloc(let,sizeof(char)*1);
        let[0]=frase[i];
        maior=contador;
        let[1]='\0';
        indice=1;
        }
    if(contador==maior){
        letra=frase[i];
        if(confere(letra,let)){
            indice++;
            let=realloc(let,sizeof(char)*indice);
            let[indice-1]=frase[i];
            let[indice]='\0';
            }
        }
    }
for(i=0;let[i]!='\0';i++)
    printf("%c",let[i]);
}

int main(){
char frase[200];
char let=0;
int N;
int i=0;
scanf("%d",&N);
getchar();
while(i<N){
    gets(frase);
    contador(frase,let);
    printf("\n");
    let=0;
    i++;
    }
}
