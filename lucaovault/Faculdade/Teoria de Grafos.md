[[Grafos]] - Em **programação** grafo é uma estrutura de dados que representa um conjuto de objetos e a relação entre eles
Um grafo é constituido de 2 conjuntos:
- Vértices (ou nós): são os pontos (extremidades) ou entidades
- Arestas (ou ligações): são as **conexões** entre os vértices

![[Pasted image 20250807122445.png]]

Um grafo pode ser representado por sua notação em:

---

$$
G = (V,E)
$$
- ***G*** é o **grafo**
- ***V*** é o **conjunto de vértices** (ou nós)
- ***E*** é o **conjunto de arestas** (ou ligações entre os vértices)

---

Em uma rede de computadores para contextualizar, podemos dizer que os **computadores**, são as **vértices** e as **arestas** são as conexões físicas (cabos, wi-fi).

> [!NOTE]
> Quando existe uma **aresta** ligando **dois vértices** dizemos que os **vértices** são ***adjacentes***, e que a **aresta** é incidente aos vértices.

[[Vértices adjacentes]] - Quando uma aresta liga **DOIS VÉRTICES**
[[Aresta incidente]] - Aresta que "toca" um vértice

O número de **vértices** será simbolizada por ***|V|***
O número de **arestas** será simbolizada por ***|E|*** ou ***|A|***

[[Grau de vértice]] - É quantas ligações (conexões) aquele ponto (vértice) tem com outros.
![[Pasted image 20250807135724.png]]

Suponhamos o vértice **6A** no grafo acima
6A - 7A
6A - 8B
6A - 7B 
Então o **grau de vértice** é de 3
Grau(6A) = 3


