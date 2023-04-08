/*
 * Autor: Lucas de Sousa Rodrigues
 * RA:    2760482221021
 * Desafio de Linguagem de Programacao
 * Professor: Alexandre Ferreira
 *
 * Desafio
 * Criar um programa para verificar se uma senha digitada por um usuário está de acordo com as seguintes normas:
 *      Deve conter pelo menos 8 caracteres;
 *      Deve conter pelo menos uma letra maiúscula;
 *      Deve conter pelo menos uma letra minúscula;
 *      Deve conter pelo menos um número;
 *      Deve conter pelo menos um dos seguintes símbolos: !, ?, #, @, $;
 *      Não pode ser um palíndromo, i.e., revertendo-se os caracteres não podemos obter a mesma senha;
 *      Não pode conter nenhuma palavra reservada de um dicionário;
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MIN_TAM 8
#define MAX_TAM 50
void capturarSenha(char* senha);
void tamanho(char* senha);
void temMaiuscula(char* senha, int tam);
void temMinuscula(char* senha, int tam);
void temNumero(char* senha, int tam);
void temSimbolo(char* senha, int  tam);
void ePalindromo(char* senha, int tam);
void temPalavraReservada(char* senha, int tam);

int main(){
    char senha[MAX_TAM];
    int tam;
    capturarSenha(senha);
    tam = strlen(senha);
    printf("TAM: %d\n", tam);
    tamanho(senha);
    temMaiuscula(senha, tam);
    temMinuscula(senha, tam);
    temNumero(senha, tam);
    temSimbolo(senha, tam);
    ePalindromo(senha, tam);
    temPalavraReservada(senha, tam);
    return 0;
}
void capturarSenha(char* senha){
    printf("Digite a senha a ser testada: \n");
    fgets(senha, MAX_TAM, stdin);
    /*
     * Tratando a adicao o \n pelo fgets
     */
    if(senha[strlen(senha) - 1]  == '\n') senha[strlen(senha) - 1] = '\0';
}
void tamanho(char* senha){
    if(strlen(senha)-1 < MIN_TAM) printf("A senha deve conter pelo menos 8 caracteres\n");
}
void temMaiuscula(char* senha, int tam){
    for (int i = 0; i <= tam; ++i) {
        if(isupper(senha[i])){
            return;//Se encontrar algum caracter que satifaca a condicao encerra a funcao
        } else if(i == tam){
            printf("A senha deve conter pelo menos uma letra maiuscula\n");
        }
    }
}
void temMinuscula(char* senha, int tam){
    for (int i = 0; i <= tam; ++i) {
        if(islower(senha[i])){
            return;//Se encontrar algum caracter que satifaca a condicao encerra a funcao
        } else if(i == tam){
            printf("A senha deve conter pelo menos uma letra minuscula\n");
        }
    }
}
void temNumero(char* senha, int tam){
    for (int i = 0; i <= tam; ++i) {
        if(isdigit(senha[i])){
            return;//Se encontrar algum caracter que satifaca a condicao encerra a funcao
        } else if(i == tam){
            printf("A senha deve conter pelo menos um numero\n");
        }
    }
}
void temSimbolo(char* senha, int tam){
    for (int i = 0; i <= tam; ++i) {
        if(!isalnum(senha[i])){
            return;//Se encontrar algum caracter que satifaca a condicao encerra a funcao
        } else if(i == tam){
            printf("A senha deve conter pelo menos um simbolo\n");
        }
    }
}
void ePalindromo(char* senha, int tam){
    int busca = tam / 2;
    int palindromo = 0;
    tam = tam -1;
    for (int i = 0; i < busca; i++) {
        if (senha[i] == senha[tam - i]) palindromo++;
        printf("senha[%d] %c == senha[%d] %c \n", i, senha[i], tam-i, senha[tam-i]);
    }
    if (palindromo == busca) printf("A senha e um palindromo");
}
void temPalavraReservada(char* senha, int tam){}