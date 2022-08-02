// 

#include <stdio.h>

main(){
float sl, sb;
printf("Digite o salario: ");
scanf("%f", &sl);
if(sl < 1000){
    printf("O imposto e: $%.2f\n", sl*0.05);
    printf("O seu salario liquido e: $%.2f\n",sl-(sl*0.05));
    }
else if(sl<5000){
    printf("O imposto e: $%.2f\n",sl*0.11);
    printf("O seu salario liquido e: $%.2f\n", sl-(sl*0.11));
    }
else{
    printf("O imposto e: $%.2f\n", sl*0.35);
    printf("O imposto e: $%.2f\n", sl-(sl*0.35));
    }

}












