# Decodificador Tabela ASCII

Este repositório contém um decodificador de mensagens baseado na tabela ASCII, implementado em linguagem C. O projeto visa demonstrar a manipulação de caracteres e a aplicação de uma função matemática para decodificação de dados.



## Estrutura do Projeto

O repositório é composto pelos seguintes arquivos:

- `decodificador.c`: O arquivo principal que contém a lógica de decodificação, a função matemática `f(x, b)` e a função `main` para interação com o usuário.
- `caractere.h`: Arquivo de cabeçalho que provavelmente contém declarações de funções ou definições relacionadas a caracteres (embora o conteúdo exato não tenha sido analisado).
- `Limite.c`: (Conteúdo não analisado, mas o nome sugere alguma funcionalidade de limite ou validação).
- `desafioextra.c`: (Conteúdo não analisado, provavelmente um desafio ou funcionalidade extra).
- `output/`: Diretório para arquivos de saída (como executáveis gerados).
- `decodificador.exe`: Executável do decodificador (para sistemas Windows).
- `desafioextra.exe`: Executável do desafio extra (para sistemas Windows).




## Como Usar

Para compilar e executar o decodificador, siga os passos abaixo:

1.  **Clone o repositório:**

    ```bash
    git clone https://github.com/eduuardo1st/Decodificador_tabela_ASCII.git
    ```

2.  **Acesse o diretório do projeto:**

    ```bash
    cd Decodificador_tabela_ASCII
    ```

3.  **Compile o código (usando GCC, por exemplo):**

    ```bash
    gcc decodificador.c -o decodificador -lm
    ```

    (Nota: A flag `-lm` é necessária para linkar a biblioteca matemática, devido ao uso de `pow` e `round` na função `f`.)

4.  **Execute o programa:**

    ```bash
    ./decodificador
    ```

    O programa solicitará o número de mensagens a serem decodificadas e, para cada mensagem, o valor de `b` e a mensagem codificada em hexadecimal.





## Contribuição

Contribuições são bem-vindas! Se você tiver sugestões, melhorias ou encontrar algum problema, sinta-se à vontade para abrir uma *issue* ou enviar um *pull request*.
