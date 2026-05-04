    Nesse rep foi desenvolvida uma Tabela Hash em um vetor de armazenamento de dados;
-> O que é uma tabela Hash?
  A tabela Hash é uma estrutura de dados que proporciona buscas direcionadas em uma tabela (vetores,listas etc).

A tabela Hash escolhida irá armazenar numeros inteiros diferente de 0;   

              FORMULAS MATEMÁTICAS:

  
A formula matemáticas usada para definir o tamanho do vetor de armazenamento foi:
  TabelaHash = quantidadeDeElementosParaArmazenar * 2;
  Com o valor de TabelaHash foi escolhido o primo mais próximo para definir o tamanho de TabelaHash.
  Na tabela Hash do problema -> 15 * 2 = 30;
  Primo mais próximo de 30 = 29 ou 31;
  Escolhemos o 29 (#define TAM  29);
  
  
A formula matemática usada para indicar o indice do armazenamento de cada chave *FUNCAO DE ESPALHAMENTO ou FUNCAO HASH* foi:
  FuncaoDeEspalhamento = chave % TAM;
  Essa funcao seleciona uma chave e divide pelo primo, o resto da divisao indica seu indice de alocamento;
  Imagina que o usuário digita o número 5897. Você não pode usar esse número diretamente como índice, porque seu vetor só tem 29 posições (0 a 28). A função de espalhamento resolve isso:
  5897 % 29 = 20  →  armazena na posição 20;
  O resto de qualquer divisão por 29 sempre será um número entre 0 e 28;
  

    Variáveis:
TAM  29  -> Constante que define o tamanho de TabelaHash[];
TabelaHash[] -> é o vetor que representa a Tabela Hash e contém tamanho 29;
i -> Variável Contadora;
chave -> São os valores que serão armazenados na tabelaHash[]; (um CPF por exemplo);
  *Esses valores serão digitados pelo usuário na funçao Inserir*
indice -> Indica a posição de armazenamento no vetor TabelaHash[];

    Funçoes e Procedimentos:
void inicializarTabela -> Procedimento que inicializa TabelaHash mas não retorna nada para o usuário;
int funcaoHash -> Funcao que aponta o indice de alocamento no vetor TabelaHash[] de cada variavel chave, ela retorna o resto da divisao que é o indice de alocamento;
void inserir -> Procedimento que percorre o vetor(tabelaHash[]) e aloca a chave no seu indice correto;
int busca -> Funcao que busca dentro do vetor (tabelaHash[]) uma chave cadastrada pelo usuario no procedimento inserir, e retorna o indice de alocamento para o usuario;
void imprimir -> Procedimento que mostra na tela todo o vetor (tabelaHash[]) para o usuário;
int main -> Funcao principal de um código em C que armazena as estruturas de contato com usuário nesse caso o Switch Case;



