# 📊 Organizador de Dados com Algoritmos de Ordenação em C

Um programa em C desenvolvido para unir dois conceitos fundamentais da programação: **manipulação de arquivos** e **algoritmos de ordenação**. 

O sistema lê dados numéricos desordenados de um arquivo de texto, permite escolher diferentes métodos de organização por meio de um menu interativo e salva o resultado ordenado em um novo arquivo.

## 🚀 Funcionalidades
- **Leitura de Arquivos:** Importa dados numéricos do arquivo `dados.txt`.
- **Múltiplos Algoritmos:** Permite escolher entre 5 métodos diferentes de ordenação:
  1. Bubble Sort
  2. Insertion Sort
  3. Selection Sort
  4. Merge Sort
  5. Quick Sort
- **Persistência de Dados:** Gera automaticamente o arquivo `ordenado.txt` com os números organizados.

## 💻 Como Executar
1. Certifique-se de ter um compilador de C instalado (como GCC).
2. Crie um arquivo chamado `dados.txt` na mesma pasta do código, contendo números inteiros separados por quebras de linha.
3. Compile e execute o programa:
   ```bash
   gcc programa.c -o programa
   ./programa
