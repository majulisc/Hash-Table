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
    tabelaHash[indice] = chave;
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
    return 0;
}


void imprimir (int tabelaHash[]){
    int i;
    for (i = 0; i < TAM; i++){
        printf ("%d = %d\n", i, tabelaHash[i]);

    }
}

int main (){
    int tabela [TAM], opcao, retornoDaFuncaoBusca; //o vetor de armazenamento é a nossa tabela hash e ela inicializa VAZIA 
    do{
            printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Buscar\n\t3 -Imprimir\n");
            scanf("%d", & opcao);
    switch(opcao){
    
    case 1:
        printf("Qual valor deseja inserir");
        scanf("%d", &valor);
        inserir(valor, tabela);
        break;
    case 2:
        printf("Qual valor deseja buscar");
        scanf("%d", & valor);
        retornoDaFuncaoBusca = busca(tabela, valor);
        if(retornoDaFuncaoBusca !=0){
            printf("Valor encontrado %d!\n", retornoDaFuncaoBusca)
        }
        else{
            printf(" valor nao encontrado");
        }
        break;
    case 3:
        imprimir(tabela);
        break;
    default:
        printf("OPÇAO INVALIDA!");     
    }
}
while (opcao != 0);
return 0;
     

}