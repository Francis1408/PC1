// Show the inverse of a number

#include <stdio.h>

void main()
{
int n1,n2,n3,n4,n5;
printf("Digite um numero de 4 digitos: ");
scanf("%d",&n1);
if(n1<1000)
    printf("Valor invalido");
else{
    n2=n1%10; /*678,3*/
    n3=n1/10%10; /*8*/
    n4=n1/100%10; /*7*/
    n5=n1/1000%10; /*6*/

    printf("O inverso e: %d%d%d%d",n2,n3,n4,n5);


}


}
