[[Big Data]] - conjunto de dados que são extremamente grandes que não pode ser visualizados e gerenciados por ferramentas tradicionais.

São caracterizados por **5V**

> [!Características do Big Data]
> **Volume** - Quantidade **massiva** de dados
> **Velocidade** - Rapidez com que os dados são gerados
> **Variedade** - Diferentes **tipos** de dados
> **Veracidade** - **Confiabilidade** e **qualidade** dos dados
> **Valor** - Capacidade de gerar **insights** valiosos

> [!Formatos de Dados]
> **[[Dados estruturados]]**
> Organizados em formato tabular com esquema definido (DB relacional, planilhas)
> 
> [[Dados Semi-estruturados]]
> Possuem **alguma** organização, mas sem esquema rígido (JSON,XML,emails)
> 
> **[[Dados Não-estruturados]]**
> **SEM** estrutura predefinida (textos, imagens, áudios, vídeos)

> [!Papéis dos Dados]
> **[[Dados Operacionais]]**
> Suportam operações **diárias** e transações de negócios
> 
> **[[Dados Analíticos]]**
> Utilizados para **análises** e **descoberta** de padrões
> 
> **[[Dados Mestres]]**
> Informações **críticas** compartilhados por toda a organização (ex: RA de um aluno)
> 
> **[[Metadados]]**
> Dados sobre outros dados, descrevendo estrutura e contexto (ex: hora de um arquivo)

**[[Banco de Dados]]**
São sistemas **organizados** para armazenar gerenciar e recuperar informações de forma eficiente.

**Principais Tipos de DB**

**[[Relacionais (SQL)]]**
Baseados em tabelas com relações definidas entre elas. Utilizam **SQL** para consultas

**[[NoSQL]]**
Não seguem o modelo relacional. Flexíveis para dados **não estruturados** ou **semi-estruturados**.

**[[Data WareHouse (DW)]]**
É um repositório centralizado que integra dados de **múltiplas fontes** para suportar análises e tomada de decisões.

São caracterizados por:
- Orientado por assunto
- Dados processados
- Integrado e consistente
- Não volátil (histórico preservado)
- Variável no tempo

**[[Data Mart (DM)]]**
É um **subconjunto** de um **Data Warehouse** focado em uma área **específica** de negócio ou departamento

Suas características são:
- Implementação mais rápida
- Menor custo e complexidade
- Otimizado para consultas específicas

**[[Data Lake]]**
É um repositório centralizado que permite armazenar todos os tipos de dados em seu formato bruto originalm sem necessidade de estruturação prévia.

Características Principais:
- Mantém os dados em seu formato original (**dados brutos**)
- Projetado para crescer horizontalmente
- Não requer definição prévia de estrutura

**[[Data Mining]]**

É o processo de descoberta de **padrões**, **correlações** e **percepções** em grandes conjuntos de dados utilizando métodos de estatística, inteligência artifical e aprendizado de máquina.

**Objetivos do Data Mining** :
- Descobrir padrões **ocultos** nos dados
- Prever tendências e comportamentos futuros
- Identificar anomalias
- Extrair conhecimento acionável para tomada de decisões

**Técnicas comums de Data Mining** : 
- Classificação e Regressão
- Agrupamento (**clustering**)
- Regras de associação
- Detecção de Anomalias

**Processo de Data Mining** :
- **Definição do Problema**
-Identificar objetivos e requisitos do negócio
- **Preparação dos Dados**
-Coleta, limpeza e transformação dos dados
- **Modelagem**
-Aplicação de algoritmos para extrair padrões
- **Avaliação**
-Validação dos resultados e padrões encontrados
- **Implementação**
-Aplicação do conhecimento descoberto

