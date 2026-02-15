Prova 1 : 2,0
Prova 2 : 2,0 
Prova 3 : 2,0 
Educa : 1,0
Atividades AVA : 1,0

[[Protocolos]] - Regras que permitem que as informações sejam transmitidas

[[Sistemas numéricos]] - São formas de representar números usando símbolos e regras específicas

[[Decimal]] - Base 10 (**0 a 9**). É oque usamos no dia a dia
[[Binário]] - Base 2 (**0 e 1**). Muito usado em computação
[[Octal]] - Base 8 (**0 a 7**).
[[Hexadecimal]] - Base 16 (**0-9 e A-F**).

[[Portas Lógicas]] - São portas que abrem ou fecham

> [!NOTE]
> 0 = FALSE, 1 = VERDADEIRO

> [!NOTE]
> '+' = OU/OR
> '*' = E/AND
> ' = NÃO/NOT

> [!NOTE] ORDEM DE PRIORIDADES
> **Sem** o parênteses a ordem de prioridade é
> NOT, AND e OR
> O parênteses **força a prioridade**

[[Porta NOT]] |>**°** ou inversor - Para a saída ser **verdadeira**, a **entrada** deve ser **falsa**.
[[Porta AND]] |) - Para a saída ser **verdadeira**, **TODAS** as entradas devem ser **verdadeiras**.
[[Porta OR]] )> - Para a saída ser **verdadeira**, pelo menos **UMA** das entradas deve ser **verdadeiras**.
[[Porta XOR]] ))> - Para a saída ser **verdadeira**, apenas **UMA** das entradas deve ser **verdadeiras**.

*Resumindo* :
- **AND** só da 1 se os dois forem 1.
- **OR** dá 1 se pelo menos um for 1
- **NOT** inverte: transforma 0 em 1 e 1 em 0.

[[Álgebra Booleana]]
É a "gramática" que as portas seguem.

1.[[Identidade]]
- A + 0 = A -> OR com 0 não muda nada.
- A * 1 = A -> AND com 1 não muda nada.
```
zero não atrapalha no OR, um não atrapalha no AND
```
2.[[Nulo]]
- A + 1 = 1 -> OR com 1 sempre dá 1
- A * 0 = 0 -> AND com 0 sempre dá 0.
```
1 domina no OR, 0 domina no AND
```
3.[[Idempotência]]
- A + A = A
- A * A = A
```
duas vezes o mesmo é igual a uma
```
4.[[Complemento]]
- A + A' = 1 -> (algo **OU** seu inverso é sempre 1).
- A * A' = 0 -> (algo **E** seu inverso é sempre 0).
```
ou um ou outro = sempre 1; os dois juntos = impossível (0)
```
5.[[Comutatividade]]
- A + B = B + A
- A * B = B * A
```
tanto faz a ordem, o resultado é o mesmo
```
6.[[Associatividade]]
- (A + B) + C = A + (B + C)
- (A * B) * C = A * (B * C)
```
parênteses não mudam NADA
```
7.[[Distributividade]]
- A * (B + C) = (A * B) + (A * C)
- A + (B * C) = (A + B) * (A + C)
```
AND entra no OR, OR entra no AND - dá no mesmo
```

O A com linha em cima quer dizer **NEGAÇÃO**, ou seja a **INVERSÃO**.
A=1, A(overline)=0
Já a linha **DUAS VEZES** **cancela** a negação, ou seja retorna ao valor original