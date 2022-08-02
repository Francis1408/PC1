#include <stdio.h>
main(){
int n1,soma, produto,n2;
printf("Digite um numero: ");
scanf("%d",&n1);
soma=0;
produto=1;
n2=1;
while(n2<=n1){
    soma=soma+n2;
    produto=produto*n2;
    n2=n2+1;

}
printf("Soma: %d\nProduto: %d\n",soma,produto);





}
