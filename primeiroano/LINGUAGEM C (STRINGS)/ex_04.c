#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras), levando em consideração que, ao digitar a string,
seja inserido caracteres em branco no início e fim da string. Faça os seguintes
cálculos e imprima na tela:
a) Quantidade total de caracteres da string.
b) Quantidade total de caracteres da string, retirando os caracteres em
branco do início da string lida do teclado.
c) Quantidade total de caracteres da string, retirando os caracteres em
branco do final da string lida do teclado.
d) Quantidade total de caracteres da string, retirando os caracteres em
banco do início e do final da string lida do teclado.
Ex.:
Entrada: “ maria “ - foram digitados 5 caracteres em branco no início
e 6 caracteres em branco no fim da palavra
Saída:
a) Total de caracteres: 16
b) Total de caracteres sem espaços em branco no início: 11
c) Total de caracteres sem espaços
*/

int main(){
    int contei = 0, s = 0, contf = 0;
    char sp[1001], ss[1001];

    printf("Digite uma frase: ");
    gets(sp);
    
    for(int i = 0; sp[i] != '\0'; i++){
        if(sp[i] != ' '){
            ss[s] = sp[i];
            s++;
        }
    }
    for(int i = strlen(sp)-1; i > 0; i--){
        if(sp[i] == ' ') contf++;
        else break;
    }
    
    for(int i = 0; sp[i] != '\0'; i++){
        if(sp[i] == ' ') contei++;
        else break;
    }

    
    printf("Total de caracteres: %d\n", strlen(sp));
    printf("Total de caracteres sem espacos em branco no inicio: %d\n", strlen(sp)-contei);
    printf("Total de caracteres sem espacos em branco no fim: %d\n", strlen(sp)-contf);
    printf("Total de caracteres sem espacos em branco: %d \n", strlen(ss));
    return 0;
}