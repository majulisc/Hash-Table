#include <stdio.h>
#include <stdlib.h>
// 2 * 15 (quantidade de elementos)== 30 -> 29 (primo mais proximo)
// meu conjunto de dados apresenta apenas numeros inteiros positivos e nnega o 0
#define TAM  29

void inicializarTabela (int tabela[]){
    int i;
    for( i= 0; i < TAM; i++){
        tabela[i] = 0; // acesso a tabela na psoicao i e informo que ela ira receber o valor 0--> inicializo com 0 

    }
}

int funcaoHash(int chave){ // a funcao hash vai calcular o indice com base no valor da chamee
    return chave % TAM; // retorno do resto
}

void inserir(int chave, int tabela[]){ //funcao que descobre o indice e armazena a chave na tabela Hash
    int indice = funcaoHash(chave);
    while(tabela[indice] != 0){ // caso seja != 0 isso indica que esse indice ja esta oculpado
        indice = funcaoHash (indice + 1); //pula pra o proximo indice
    }
}

int main (){
    int VetordeArmazenamento [TAM];
}