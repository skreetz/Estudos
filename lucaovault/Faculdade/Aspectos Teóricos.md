
Conceitos de linguagens de programação - SEBESTA, Robert W

[[Sintaxe]] - Forma de escrever (regras da linguagem)
[[Semântica]] - Significado da escrita

**Sintaxe das Linguagens de Programação**

As linguagens de programação **NÃO** devem aceitar ambíguidade, para isso existe a sintaxe das linguagens

Campos **teóricos** importantes para computação:
- Teoria de linguagens
- Definições formais de gramáticas de linguagens de programação
- Definições de técnicas de reconhecedores de linguages

Garantia de quem um programa se comporte COMO foi especificado **SEM** ambiguidade

![[Pasted image 20250807123251.png]]

[[Analisador léxico]] - É um componente de um compilador que recebe como entrada um fluxo de caracteres e o converte em uma sequência de tokens. Esses tokens são unidades básicas de significado para a linguagem de programação, como palavras-chave, identificadores, operadores e literais.

[[Analisador sintático]] - É um componente de um compilador que analisa a estrutura sintática de uma sequência de tokens (palavras ou símbolos) e verifica se ela está de acordo com as regras gramaticais de uma linguagem específica.

[[Unidades léxicas]] - São os tokens

[[Compilação]] - Processo de tradução do código-fonte pra linguagem de máquina, que pode ser executada diretamente no computador, o .exe

Está inserido na compilação:
 - Analisador léxico
 - Analisador sintático
 - [[Gerador de código intermediário]] - Produz um programa em uma linguagem diferente, no nível intermediário entre o programa-fonte e a saída final do compilador.
 - [[Analisador semântico]] - Faz parte do gerador de código intermediário, verifica se há erros difíceis de serem detectados durante a **análise sintática**. (variáveis não inicializadas, compatibilidade de tipos, etc.)
 - [[Otimização]] - Torna os programanos menores e/ou mais rápidos.
 - [[Gerador de código]] - Converte o código intermediário para um programa em linguagem de máquina equivalente
 - [[Tabela de símbolos]] - Serve com BD para o **processo de compilação**. Seu conteúdo são informações sobre tipos e atributos de cada nome definido pelo usuário no programa.
 - [[Linkeditor]] - (Editor de ligações): Programa de sistema que realiza a vinculação e carregamento, que é o processo de coletar partes programas de siste(falta continuar)

[[Notação BNF]] - É uma forma de descrever a sintaxe de linguagens formais, como linguagens de programação, usando regras gramaticais. Ela emprega símbolos especiais para representar elementos como não-terminais, terminais e operadores de escolha e sequência, permitindo uma representação estruturada e formal da linguagem.

Principais elementos da BNF :

- **Não-terminais -** Representados entre colchetes angulares <>, denotando elementos que podem ser expandidos, ex: < palavra >
- **Terminais** - São símbolos **literais** ou **classes** que **NÃO** podem ser mais expandidos, ex: if, =, número inteiro.
- **:=** Atribuição/Definição - Indica que o **não-terminal** à esquerda pode ser substituído pela expressão à direita
- **|** Escolha - Separa alternativas dentro de uma produção, indicando que qualquer uma delas pode ser usada, ex: < sinal > := + | -
- **Sequência** - A sequência de símbolos é defenida pela justaposição na regra de produção, indicando que devem aparecer nessa ordem.

**Uso da BNF** :

A BNF é amplamente utilizada na especificação de linguagens de programação, protocolos de comunicação e outros formatos de dados. Ela fornece uma forma clara e concisa de descrever a estrutura sintática de uma linguagem, permitindo que compiladores e outras ferramentas interpretem e processem corretamente a linguagem definida.

[[Árvores de Análise (Parse Tree)]] - São estruturas sintáticas hierárquicas das linguagens definidas pela gramática


