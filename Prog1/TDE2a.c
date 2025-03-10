#include <stdio.h>

int main(){

int dataAtualD, dataAtualM, dataAtualA, dataNascimentoD, dataNascimentoM, dataNascimentoA;
int idade;

printf("Digite a data do seu nascimento(DD/MM/AAAA): ");
scanf("%d/%d/%d",&dataNascimentoD, &dataNascimentoM, &dataNascimentoA);

printf("Digite a data atual(DD/MM/AAAA): ");
scanf("%d/%d/%d",&dataAtualD, &dataAtualM, &dataAtualA);

if (dataAtualA>dataNascimentoA){
    idade = 2;
    if (dataAtualM<dataNascimentoM){
        idade = (dataAtualA - dataNascimentoA) - 1;
    }
    else if (dataAtualM==dataNascimentoM){
        if (dataAtualD<dataNascimentoD){
            idade = (dataAtualA - dataNascimentoA) - 1;
        }
    }
    else{
        idade = (dataAtualA - dataNascimentoA);
    }
    printf("Idade Atual: %d", idade);
}
else{
    printf("Datas informadas incoerentes");
}
}
