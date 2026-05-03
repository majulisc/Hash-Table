#include <stdio.h>
#include <stdlib.h>
// 2 * 15 (quantidade de elementos)== 30 -> 29 (primo mais proximo)
// meu conjunto de dados apresenta apenas numeros inteiros positivos e nnega o 0
#define TAM  29 

void inicializarTabela (int tabelaHash[]){
    int i;
    for( i= 0; i < TAM; i++){
        tabelaHash[i] = 0; // acesso a tabela na posicao i e informo que ela ira receber o valor 0 passando por todos os indices--> inicializo com 0 

    }
}

int funcaoHash(int chave){ // a funcao hash vai calcular o indice com base no valor da chave
    return chave % TAM; // retorno do resto
} // a funcaoHash é a funcao de espalhamento

void inserir(int chave, int tabelaHash[]){ //funcao que descobre o indice e armazena a chave na tabela Hash
    int indice = funcaoHash(chave); //inserir no indice o valor da chave no indice correto
    
    while(tabelaHash[indice] != 0){ // caso seja != 0 isso indica que esse indice ja esta oculpado
        indice = funcaoHash (indice + 1); //pula pra o proximo indice TRATAMENTO E COLISAO
        //while termina quando achamos um indice vazio e armazenamos a chave nele!
    }
}

int busca (int tabelaHash[], int chave){
    int indice = funcaoHash(chave);
    while(tabelaHash[indice] != 0){
        if(tabelaHash[indice] == chave){
            return tabelaHash [indice];

        }
        else {
            indice = funcaoHash (indice + 1);
        }
    }
}

void imprimir (tabelaHash[]){
    int i;
    for (i = 0; i < TAM; i++){
        
    }
}

int main (){
    int tabela [TAM]; //o vetor de armazenamento é a nossa tabela hash e ela inicializa VAZIA 
}