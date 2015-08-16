#include<stdio.h>
int Ant,Atual,NumAux,Cont;
int main(){
Ant=0;
Atual=1;
Cont=1;
printf("%d\n",Ant);
printf("%d\n",Atual);
while(Cont<10000){
    NumAux=Ant+Atual;
    printf("%d\n",NumAux);
    Ant=Atual;
    Atual=NumAux;
    Cont++;

    }

}

