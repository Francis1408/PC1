// Calculadora simples - Soma/ Subtração / Divisão / Multiplicação
// Simple calculator 

#include <stdio.h>

int main(){
float n1, n2;
char operador;
printf("Escreva a operacao: ");
scanf("%f%c%f",&n1,&operador,&n2);

if(operador=='+'){
    printf("\n%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
    }
else
    if(operador=='-'){
    printf("\n%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
    }
else
    if(operador=='*'){
    printf("\n%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
    }
else
    if(operador=='/'){
    printf("\n%.2f/%.2f = %.2f\n",n1,n2,n1/n2);
    }
else
    printf("\nOperador invalido\n");

}




