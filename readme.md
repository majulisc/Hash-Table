#  Hash Table em C

Nesse rep foi desenvolvida uma Tabela Hash em um vetor de armazenamento de dados.

---

##  O que é uma Tabela Hash?

A tabela Hash é uma estrutura de dados que proporciona buscas direcionadas em uma tabela (vetores, listas etc).
A tabela Hash escolhida irá armazenar números inteiros diferentes de 0.

---

##  Fórmulas Matemáticas

### Tamanho do vetor de armazenamento

```
TabelaHash = quantidadeDeElementosParaArmazenar * 2
```

Com o valor de TabelaHash foi escolhido o primo mais próximo para definir o tamanho de TabelaHash.

| Cálculo | Resultado |
|---|---|
| 15 * 2 | 30 |
| Primo mais próximo de 30 | 29 ou 31 |
| Escolhido | **29** → `#define TAM 29` |

---

### Função de Espalhamento (Função Hash)

```
FuncaoDeEspalhamento = chave % TAM
```

Essa função seleciona uma chave e divide pelo primo — o resto da divisão indica seu índice de alocamento.

> **Exemplo:** Imagina que o usuário digita o número **5897**. Você não pode usar esse número diretamente como índice, porque seu vetor só tem 29 posições (0 a 28). A função de espalhamento resolve isso:
>
> `5897 % 29 = 20` → armazena na posição 20
>
> O resto de qualquer divisão por 29 sempre será um número entre **0 e 28**.

---

## Variáveis

| Variável | Descrição |
|---|---|
| `TAM = 29` | Constante que define o tamanho de `TabelaHash[]` |
| `TabelaHash[]` | Vetor que representa a Tabela Hash, com tamanho 29 |
| `i` | Variável contadora |
| `chave` | Valores que serão armazenados na `tabelaHash[]` (um CPF, por exemplo). *Digitados pelo usuário na função Inserir* |
| `indice` | Indica a posição de armazenamento no vetor `TabelaHash[]` |

---

## Funções e Procedimentos

| Assinatura | Tipo | Descrição |
|---|---|---|
| `void inicializarTabela` | Procedimento | Inicializa `TabelaHash[]`, mas não retorna nada para o usuário |
| `int funcaoHash` | Função | Aponta o índice de alocamento no vetor `TabelaHash[]` de cada variável chave; retorna o resto da divisão, que é o índice de alocamento |
| `void inserir` | Procedimento | Percorre o vetor `tabelaHash[]` e aloca a chave no seu índice correto |
| `int busca` | Função | Busca dentro do vetor `tabelaHash[]` uma chave cadastrada pelo usuário no procedimento inserir, e retorna o índice de alocamento para o usuário |
| `void imprimir` | Procedimento | Mostra na tela todo o vetor `tabelaHash[]` para o usuário |
| `int main` | Função | Função principal de um código em C que armazena as estruturas de contato com o usuário — nesse caso o Switch Case |