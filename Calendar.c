#include <stdio.h>

int ano_bissexto(int a1){
if(a1%100!=0 && a1%4==0)
    return 1;
else if(a1%100==0 && a1%400==0)
    return 1;
else
    return 0;}



int dias_ano(int m1,int d1, int n1){
int total,contador;
if(n1){
    if(m1<=7){
        contador=1; total=0;
        while(contador<m1){
            if(contador%2==0 && contador!=2)
                total=total+30;
            else if(contador==2)
                total=total+29;
            else if(contador%2!=0)
                total=total+31;
            contador=contador+1;
        }
        total=total+d1;
    }
    else if(m1>7){
        contador=8; total= 213;
            while(contador<m1){
                if(contador%2==0)
                    total=total+31;
                else if(contador%2!=0)
                    total=total+30;
                contador=contador+1;
            }
          total=total+d1;
    }

}
   else{
        if(m1<=7){
        contador=1; total=0;
        while(contador<m1){
            if(contador%2==0 && contador!=2)
                total=total+30;
            else if(contador==2)
                total=total+28;
            else if(contador%2!=0)
                total=total+31;
            contador=contador+1;
        }
        total=total+d1;
    }
    else if(m1>7){
        contador=8; total= 213;
            while(contador<m1){
                if(contador%2==0)
                    total=total+31;
                else if(contador%2!=0)
                    total=total+30;
                contador=contador+1;
            }
          total=total+d1;
   }

}
return total;
}

int main(){
int a1,m1,d1,n1;
printf("Digite o ano: ");
scanf("%d",&a1);
printf("Digite o mes: ");
scanf("%d",&m1);
printf("Digite o dia: ");
scanf("%d",&d1);

ano_bissexto(a1);
n1=ano_bissexto(a1);
dias_ano(m1,d1,n1);
printf("\nForam transcorridos %d dias em %d\n",dias_ano(m1,d1,n1),a1);


}

