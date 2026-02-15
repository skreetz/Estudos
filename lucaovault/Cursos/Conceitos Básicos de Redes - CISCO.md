Cada bit pode ser 0 ou 1. 
Um conjunto de 8 bits formam 1 byte
[[Bit]] - é a abreviação de dígito binário e representa a menor parte de dados
[[Byte]] - 8 bits

Os caracteres são contruídos por bytes, por exemplo: 
```
A = 01000001
```
Os **bits** são convertidos em sinais, que possam ser enviados através da mídia de rede para o destino

[[Mídia]] - É o meio físico em que o sinal é transmitido (cobre, fibra óptica e onda eletromagnética)

Existem 3 tipos  de sinais:

- **[[Sinais elétricos]]** – A transmissão é obtida pela representação dos dados como pulsos elétricos em fios de cobre.

- **[[Sinais ópticos]]** – A transmissão é obtida pela conversão dos sinais elétricos em pulsos de luz.

- **[[Sinais sem fio]]** – A transmissão é obtida pelo uso de infravermelho, micro-ondas ou ondas de rádio pelo ar.

[[Mac Address]] (Controle de Acesso ao Meio)/Endereço Físico - Identificador único atribuído a uma interface de rede em uma rede **LAN**

Um **MAC Address** é composto por **48 bits (6 bytes)**
```
00:1A:2B:3C:4D:5E
```
Os primeiros 3 bytes, identificam o **fabricante do dispositivo**
Os últimos 3 bytes, é o identificador exclusivo de uma **interface de rede** *(NIC)* daquele fabricante

> [!NOTE]
> Kbps = **MILHARES** de *bits* por segundo
> MBps = **MILHÕES** de *bits* por segundo
> GBps = BILHÕES de *bits* por segundo
 
[[Largura de banda]] - É a capacidade **máxima** de um meio de transportar os dados.
[[Taxa de Transferência]] - É a quantidade **real** de dados que estão sendos transmitidos

A **quantidade de dados**, o **tipo de dados** e a **latência da rede** são combinados para fazer com que a taxa de transferência não corresponda à largura de banda.

A **largura de banda** costuma ser medida pelo número de bits que (teoricamente) podem ser enviados através do meio físico em um segundo.

[[Dados voluntários]] – São criados e compartilhados explicitamente por indivíduos, como perfis de redes sociais. Esses tipos de dados podem incluir arquivos de vídeo, texto, imagem ou áudio.

[[Dados observados]] – São capturados quando indivíduos registram suas atividades, como dados de localização de celulares.

[[Dados inferidos]] – São baseados na análise de dados voluntários ou observados, como uma pontuação de crédito.
 
**Todos** os computadores conectados a uma rede que participam diretamente na comunicação de rede são classificados como hosts. Os **hosts** podem **enviar** e **receber** mensagens na rede. Nas redes modernas, um **host** pode atuar como **cliente, servidor ou ambos**. O **software** **instalado** no computador determina qual função o computador desempenha.

[[Rede P2P]] - São computadores que funcionam como servidores e clientes na rede.

A **rede ponto-a-ponto** mais simples consiste em dois computadores diretamente conectados por uma conexão com ou sem fio. Ambos os computadores podem usar essa rede simples para trocar dados e serviços entre si, atuando como cliente ou servidor conforme necessário 

A **principal desvantagem** de um ambiente ponto-a-ponto é que o ***desempenho*** de um host pode ser **reduzido** se ele estiver atuando como **cliente e servidor ao mesmo tempo**

A infraestrutura de rede contém três categorias de componentes de rede: 

[[Dispositivos finais (endpoints)]] - computador desktop, notebooks, celulares, impressoras, televisão, tablet etc

[[Dispositivos intermediários]] - roteador sem fio, switch, firewall

[[Meios de rede]] - meios sem fio, lan ou wan

[[ISP]] -Um provedor de serviços de Internet (**ISP**) fornece o link entre a rede doméstica e a Internet.

A **interconexão de ISPs**, que forma a espinha dorsal da internet, é uma teia complexa de cabos de fibra ótica com switches e roteadores de rede caros que direcionam o fluxo de informações entre os hosts de origem e destino.

Os dois métodos mais comuns são **cabo** e **DSL**.

[[Cabo]] - Normalmente oferecido por provedores de serviços de televisão a cabo, o sinal de dados de internet é transportado no mesmo **cabo coaxial** que entrega a televisão a cabo. Ele fornece uma conexão com a internet sempre ativa com *alta largura de banda*. Um **cable modem especial** separa o sinal de dados da Internet dos outros sinais transmitidos pelo cabo e fornece uma conexão Ethernet para um computador host ou LAN.

[[DSL]] - **Linha digital do Assinante** fornece uma conexão com a internet sempre ativa e com *alta largura de banda*. Ele **requer um modem especial** de alta velocidade que ***separa o sinal DSL do sinal de telefone*** e fornece uma conexão Ethernet para um computador host ou LAN. 
A **DSL** passa por uma linha telefônica, com a linha dividida em **três** **canais**.

Um canal é usado para **chamadas telefônicas**. Esse canal permite que um indivíduo receba chamadas telefônicas sem se desconectar da Internet. 

Um **segundo canal** é um canal de **download mais rápido**, usado para *receber informações da Internet*.

O **terceiro canal** é usado para *enviar ou carregar informações*. Esse canal geralmente **é um pouco mais lento do que o canal de download**. A **qualidade** e a **velocidade** da conexão **DSL** *depende principalmente da qualidade da linha telefônica e da distância da central telefônica da operadora de telefonia*. Quanto **mais longe** você estiver da central telefônica, **mais lenta** será a conexão.


Os softwares de **cliente** e **de** servidor geralmente são executados em **computadores separados**, mas também é possível que **um computador** execute as *duas funções* ao mesmo tempo.

Em **pequenas empresas e em casas**, muitos computadores funcionam como servidores e clientes na rede. Esse tipo de rede é chamado de *rede-ponto-a-ponto*(**P2P**).
Em **empresas de grande porte**, devido ao potencial para quantidades **altas** de tráfego de rede, geralmente é necessário ter *servidores dedicados* para suportar o número de solicitações de serviço.

As *redes P2P* são **fáceis** de configurar, menos complexas, de custo mais baixo e podem ser usadas para tarefas simples, como transferência de arquivos e compartilhamento de impressoras. No entanto, não existe uma administração centralizada.
Elas têm **menos segurança**, **não são escaláveis** e podem ter um **desempenho mais lento**.

**RESUMÃO**

> [!NOTE]
> A forma de **rede ponto-a-ponto** mais simples consiste em dois computadores diretamente conectados por meio de uma conexão cabeada ou sem fio.

> [!NOTE]
> Os **dispositivos finais** originam os dados que fluem na rede.

> [!NOTE]
> Os dispositivos intermediários direcionam os dados por caminhos alternativos em caso de falhas de link e filtram o fluxo de dados para melhorar a segurança.

> [!NOTE]
> O **meio físico de rede** é o canal que as mensagens percorrem na rede.

> [!NOTE]
> **DSL** é a melhor tecnologia para usar em linhas telefônicas existentes. Muitos ISPs têm uma pesquisa em seu site onde você pode inserir seu número de telefone e ver se eles podem oferecer o serviço.

> [!NOTE]
> O **serviço de Internet via satélite** fornece a melhor opção para um usuário doméstico que, de outra forma, não teria nenhuma conexão à Internet. A Internet do celular está disponível somente em áreas com cobertura de telefone celular.

> [!NOTE]
> **ISP** significa Provedor de Serviços de Internet. Um **ISP** é responsável por fornecer o link entre uma rede privada, tal como uma rede doméstica ou comercial, e a Internet.
> 

> [!NOTE]
> Um **dispositivo intermediário** envia mensagens de rede para um destino final. Exemplos de dispositivos intermediários incluem um *firewall*, *roteador*, *switch*.

> [!NOTE]
> Em uma **rede ponto-a-ponto**, **NÃO** há um servidor dedicado ou centralizado. Um computador do usuário pode ser um cliente que solicita o serviço de outro computador do usuário, e um servidor que compartilha um recurso de rede (como uma impressora) com outros usuários.

> [!NOTE]
> Os **servidores** são dispositivos com um software instalado que possibilitam que eles forneçam informações, como páginas da Web ou e-mails.

Quando um dispositivo **Bluetooth** está no *modo detectável*, ele transmite as seguintes informações quando outro dispositivo **Bluetooth** as solicita:

```
Nome

Classe de Bluetooth

Serviços que o dispositivo pode usar

Informações técnicas, como funcionalidades ou a especificação de Bluetooth compatível
```

Durante o processo de emparelhamento, um número de identificação pessoal (**PIN**) pode ser solicitado para autenticar o processo de emparelhamento. O **PIN** é muitas vezes um número, mas também pode ser um código numérico ou senha. O **PIN** é armazenado usando serviços de emparelhamento.

**RESUMÃO** 

> [!NOTE]
> Os celulares usam **ondas de rádio** para transmitir *sinais de voz* a antenas montadas em torres localizadas em regiões específicas.
> Quando é feita uma **ligação telefônica**, o sinal de voz é **retransmitido** de **uma torre a outra até chegar ao destino**.
> Esse tipo de rede é usado quando você faz uma chamada para outro telefone celular ou para um telefone fixo.

> [!NOTE]
> Também serve para enviar mensagens diretamente do telefone. O tipo mais comum de rede de telefonia celular é uma rede GSM. As abreviações 3G, 4G, 4G-LTE e 5G são usadas para **descrever** as redes de celular avançadas que foram otimizadas para transmissão rápida de dados. 

Além dos transmissores e receptores GSM e 4G/5G, os smartphones fazem conexões de várias maneiras.

[[Bluetooth]] - É uma **tecnologia sem fio** que permite que os dispositivos se comuniquem em *distâncias pequenas*. É possível conectar vários dispositivos ao mesmo tempo com Bluetooth.

[[IEEE]] - É um instituto responsável por desenvolver **padrões globais**, para garantir que dispositivos e sistemas funcionem de forma compatível e segura.

[[IEEE 802.11]] - Controla o ambiente WLAN

[[Wi-Fi Alliance]] - É responsável por testar dispositivos de LAN sem fio de diferentes fabricantes. O logotipo de Wi-Fi em um dispositivo significa que esse equipamento atende aos padrões e deve operar com outros dispositivos que usam o mesmo padrão

> [!802.11]
> O protocolo **802.11** pode fornecer melhor taxa de transferência, dependendo do ambiente de rede sem fio. Se **todos os dispositivos** sem fio se conectarem com o **mesmo padrão 802.11**, poderão ser obtidas as **velocidades máximas** desse padrão.
> Se o ponto de acesso estiver configurado para aceitar apenas um padrão 802.11, os dispositivos que **NÃO** usarem esse padrão **não** poderão se conectar ao access point.

Um ambiente de **rede sem fio** com modo misto pode incluir dispositivos que utilizem qualquer padrão Wi-Fi atual. Esse ambiente oferece acesso fácil para dispositivos antigos que precisam de uma conexão sem fio, mas não são compatíveis com os padrões mais recentes.

[[SSID]] - Serve para informar aos dispositivos sem fio(endpoints) ou **estações STA**, a qual rede **WLAN** eles podem se conectar.
[[STA]] - Ou Estações STA, é um termo técnico, que se refere a dispositivos endpoints, que vão se conectar na rede, celular,tablet,tv etc.

[[Temporização]] - Determina a velocidade com que os bits são transmitidos na rede. também afeta quando um host individual pode enviar dados e quantidade total de dados que pode ser enviada em qualquer transmissão.

[[Encapsulamento]] - Cada mensagem transmitida em uma rede deve incluir um cabeçalho com informações de endereçamento que identifique os hosts de origem e destino.
Caso contrário, ela não poderá ser entregue.
Encapsulamento é o processo de adicionar essas informações aos dados que compõem a mensagem. Além do endereçamento, podem existir outras informações no cabeçalho que garantem que a mensagem foi entregue ao aplicativo correto no host de destino.

[[Codificação]] - Mensagens enviadas pela rede são **convertidas** primeiramente em **bits** pelo host emissor. Cada bit é codificado em um padrão de sons, de ondas de luz ou de impulsos elétricos, dependendo da mídia de rede em que os bits são transmitidos.
O host de destino recebe e **decodifica** os sinais para interpretar a mensagem

[[Padrão da Mensagem]] - Algumas mensagens exigem uma **confirmação** antes que a próxima mensagem possa ser enviada.
Esse tipo de padrão de solicitação/resposta é um aspecto comum em muitos protocolos de rede. No entanto, existem outros tipos de mensagens que podem ser simplesmente transmitidas pela rede, sem a preocupação de chegarem ao seu destino.

[[Protocolos]] - É um **conjunto de regras e padrões** que definem **como** os dispositivos se comunicam entre si em uma rede de computadores

Um padrão da Internet é o resultado final de um ciclo completo de discussão, solução de problemas e testes.
Esses diferentes padrões são desenvolvidos, publicados e mantidos por diversas organizações. Quando um novo padrão é proposto, cada etapa do processo de desenvolvimento e aprovação é registrada em um documento numerado de Solicitação de Comentários (Request for Comments - **RFC**), para que a evolução do padrão seja monitorada.
As RFCs sobre padrões da Internet são publicadas e gerenciadas pelo IETF (Internet Engineering Task Force).

[[IETF]] - É a comunidade que **desenvolve** os **protocolos*** utilizados na Internet, e publicam as **RFCs** como referência oficial para protocolos e tecnologias
[[RFC]] - São **documentos** que *documentam* os protocolos desenvolvidos pela **IETF**.

| IETF    | Comunidade técnica que desenvolve e padroniza protocolos da internet                             |
| ------- | ------------------------------------------------------------------------------------------------ |
| **RFC** | Documento técnico publicado pela **IETF**, que descreve **oficialmente** os protocolos e padrões |
[[Modelo TCP/IP]] - É uma **arquitetura de rede** usada para organizar e padronizar a comunicação entre computadores em redes. Ela descreve como os dados são **transmitidos** desde a **origem** até o **destino**.

- **Aplicação** - Interface com o usuário (HTTP, FTP)

- **Transporte** - Entrega de dados (TCP, UDP)

- **Internet** - Endereçamento e roteamento (IP)

- **Acesso à rede** - Comunicação com o meio físico (Ethernet, Wi-Fi)

  

existem 2 tipos de modelos para descrever as funções que devem ocorrer para que as comunicações de rede sejam bem-sucedidas: modelos de protocolo e modelos de referência.

  

modelo de protocolo - corresponde à estrutura de um conjunto específico de protocolo. um conjunto de protocolos inclui o conjutno de protocolos relacionados que normalmente fornecem toda a funcionalidades necessária para as pessoas se comunicarem com a rede de dados. O modelo TCP/IP é um modelo de protocolo porque descreve as funções que ocorrem em cada camada de protocolos dentro da suíte TCP/IP.

  

modelo de referência - descreve as funções que devem ser concluídas em uma determinada camada, mas não especifica exatamente como uma função deve ser realizada. um modelo de referência não deve fornecer um nível suficiente de detalhes para definir com precisão como cada protocolo deve trabalhar em cada camada. a principal finalidade de um modelo de referência é ajudar a entender melhor as funções e os processos necessários para as comunicações de rede.

  

OSI (Organização Internacional de Padronização)

  

1 físico - os protocolos da camada física descrevem os meios mecânicos, elétricos funcionais e procedimentais para ativar, manter e desativar conexões físicas para uma transmissão de bits de e para um dispositivo de rede

  

2 enlace de dados - os protocolos da camada de enlace de dados descrevem métodos para a troca de quadros de dados entre os dispositivos em um meio físico comum.

  

3 rede - a camada de rede fornece serviços para trocar dados individuais pela rede entre dispositivos finais identificados

  

4 transporte - a camada de transporte define serviços para segmentar, transferir e reagrupar os dados para comunicações individuais entre os dispositivos finais

  

5 sessão - a camada de sessão fornece serviços à camada de apresentação para organizar o diálogo e gerenciar a troca de dados.

  

6 apresentação - a camada de apresentação fornece a representação comum de dados transferidos entre serviços da camada de aplicação

  

7 aplicação - a camada de aplicação contém protocolos usados para comunicações processo a processo.

  

o TCP/IP é um conjunto de protocolo usado nas comunicações de internet

O modelo TCP/IP é um método para visualizar as interações dos diversos protocolos que compõem o conjunto de protocolos TCP/IP, ele não descreve as funções gerais que são necessárias para todas as comunicações em rede. Ele descreve as funções de rede específicas para os protocolos em uso na pilha de protocolos TCP/IP

Os protocolos que compõem o TCP/IP pode ser descrito em termos no modelo OSI.

As funções que ocorrem na cama de internet do modelo TCP/IP estão incluídas na camada de rede do modelo OSI

  

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfOSHoB5Cee5onyNLDHpePElujdzH59qf_-uW6di3nfFdGD1uwtKawJsrjpm2iULYPAb4IYvvq2LFIoeYhfbr8uAgcHXwx_gs1hVzhBPBH_oDTjkM7mjxRYml8Ny2CTa255Y81KTg?key=Ilm-eBPMRP7iIekv_m9fmQ)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcDBjgxRb5gL5xsnsCGFH2XrU3JdG6ALncTmg5m_HOY-SaHgmguLr0-JX4Tz7AsSk_vzAcz2pSqamjNRc6vGn4tUP30yFvi4YepERXbgR6esdRYCS3HeYInmjPrOdwy7UFYH6Jteg?key=Ilm-eBPMRP7iIekv_m9fmQ)

O protocolo TCP é usado para garantir a entrega confiável de informações

O protocolo Internet (IP) é usado pelos roteadores para encaminhar mensagens.

  

PROTOCOLO DE COMUNICAÇÃO

  

Os protocolos são necessários para que os computadores se comuniquem corretamente na rede. Isso inclui formato de mensagem, tamanho de mensagem, temporização, codificação, encapsulamento e padrões de mensagem.

  

- Formato da mensagem - Quando uma mensagem é enviada, ela deve usar um formato ou estrutura específica
    
- Tamanho da mensagem - As regras que regem o tamanho das peças comunicadas pela rede são muito rígidas. Eles também podem ser diferentes, dependendo do canal usado.
    
- Temporização - A temporização determina a velocidade na qual os bits são transmitidos pela rede. Também afeta quando um host individual pode enviar dados e a quantidade total de dados pode ser enviada em qualquer transmissão.
    
- Codificação - As mensagens enviadas pela rede são primeiro convertidas em bits pelo host de envio. Cada bit é codificado em um padrão de sons, de ondas de luz ou de impulsos elétricos, dependendo da mídia de rede em que os bits são transmitidos.
    
- Encapsulamento - Cada mensagem transmitida em uma rede deve incluir um cabeçalho que contenha as informações de endereçamento que identifiquem os host de origem e destino. Encapsulamento é o processo de adicionar essas informações aos dados que compõem a mensagem.
    
- Padrão de mensagem - Algumas mensagens requerem uma confirmação antes que a próxima possa ser enviada. Esse tipo de padrão de solicitação/resposta é um aspecto comum em muitos protocolos de rede. No entanto, existem outros tipos de mensagens que podem ser simplesmente transmitidas pela rede, sem a preocupação de chegarem ao seu destino.
    

PADRÕES DE COMUNICAÇÃO

  

As topologias nos permitem ver a rede usando a representação de dispositivos finais e dispositivos intermediários. Um dispositivo só vê suas próprias informações de endereçamento. O dispositivo só sabe que está na mesma rede que outros por conta dos protocolos de rede. A maioria das comunicações de rede é divididas em unidades de dados menores (pacotes).

  

Um padrão é um conjunto de regras que determina como algo deve ser feito. Os padrões de rede e de Internet asseguram que todos os dispositivos conectados à rede implementem o mesmo conjunto de regras ou protocolos. O uso de padrões permite que diferentes tipos de dispositivos enviem informações entre si pela internet

  

Um padrão da Internet é o resultado final de um ciclo completo de discussão, solução de problemas e testes. Quando um novo padrão é proposto, cada etapa é registrada em um documento (RFC), As RFCs de padrões da Internet são publicadas e gerenciadas pelo IETF

  

MODELOS DE COMUNICAÇÃO DE REDE 

  

Os protocolos são as regras que regem as comunicações, uma comunicação bem sucedida entre hosts requer interação entre vários protocolos. HTTP, TCP, IP e Ethernet por exemplo.

A interação entre os diferentes protocolos em um dispositivo pode ser ilustrada como uma pilha de protocolos. Uma pilha ilustra os protocolos como uma hierarquia em camadas, com cada protocolo de alto nível dependendo dos serviços dos protocolos mostrados nos níveis inferiores. A separação das funções permite que cada camada na pilha opere de forma independente das outras.

  

A suíte de protocolos TCP/IP que é usada para comunicações na Internet segue a estrutura deste modelo:

  

- Aplicativo - Representa dados para o usuário, além da codificação e controle de diálogo
    
- Transporte - Suporta a comunicação entre vários dispositivos em diversas redes
    
- Internet - Determina o melhor caminho através da rede
    
- Acesso à rede - Os dispositivos de hardware e mídia que compõem a rede.
    

  

Um modelo de referência descreve as funções que devem estar em uma camada específica, mas não especifica exatamente como uma função deve ser realizada.

O modelo de referência de internetwork mais conhecido foi criado pelo projeto OSI.

DESCRIÇÃO DAS CAMADAS DO MODELO OSI: 

  

- 1 Física - Protocolos da camada física descrevem os meios mecânicos, elétricos, funcionais e procedimentais para ativar, manter e desativar conexões físicas para uma transmissão de bits de e para um dispositivo de rede.
    
- 2 Enlace de dados - Descreve métodos para troca de quadros de dados entre dispositivos em uma mídia comum
    
- 3 Rede - Fornece serviços para troca de dados individuais pela rede entre endpoints identificados
    
- 4 Transporte - Define serviços para segmentar, transferir e remontar os dados para comunicações individuais entre os endpoints.
    
- 5 Sessão - Fornece serviços à camada de apresentação para organizar seu diálogo e gerenciar a troca de dados
    
- 6 Apresentação - Fornece uma representação comum dos dados transferidos entre os serviços da camada de aplicação
    
- 7 Aplicação - Contém protocolos usados para comunicações entre processos
    

  

A comunicação é transmitida pela rede através de uma mídia:

Fios de metal dentro de cabos - Os dados são codificados em impulsos elétricos

Fibras de vidro ou plástico nos cabos (cabo de fibra óptica) - Os dados são codificados em pulsos de luz

Transmissão sem fio - Os dados são codificados através da modulação de frequências específicas de ondas eletromagnéticas.

  

ENCAPSULAMENTO

Ao enviar uma carta, quem a escreve usa um formato aceito para garantir que ela seja entregue e compreendida pelo destinatário. Da mesma forma, a mensagem enviada por uma rede de computadores segue regras específicas de formato para que seja entregue e processada.

O processo de colocar um formato de mensagem (a carta) em outro formato de mensagem (o envelope) é chamado de encapsulamento. O desencapsulamento ocorre quando o processo é invertido pelo destinatário e a carta é retirada do envelope. Assim como uma carta é colocada dentro de um envelope para ser entregue, no caso das mensagens de computador elas são encapsuladas.![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXePgvezv8wFB1d6xh_UeY_YNf_Krpn9bsCGF0JKV9nvxcoxbfgN2KiTy3g9cr83jn_cNd1_hEnQEY7X39A424eoxo3EGfCTIdT9Zt51-3cSawEtgF41Y-AmuEk7yUZH1cG6rXGG?key=Ilm-eBPMRP7iIekv_m9fmQ)

Encapsulamento é o processo de anexar um prefixo de informações de protocolo, com informações de outro protocolo.

Quando um quadro Ethernet é enviado em uma interface, o endereço MAC de destino indica o endereço MAC do dispositivo, que está nesta rede e que receberá o quadro Ethernet

O preâmbulo e o Delimitador de Início de Quadro (SFD- Start Frame Delimiter) indicam o início de um quadro Ethernet

  

Um switch Ethernet é um dispositivo usado na camada 2. Quando um host envia uma mensagem para outro host conectado à mesma rede comutada, o switch aceita e decodifica os quadros para ler a parte do endereço MAC da mensagem. Uma tabela no switch, chamada de tabela de endereços MAC, contém uma lista de todas as portas ativas e dos endereços MAC de host conectados a elas. Quando uma mensagem é enviada entre hosts, o switch verifica se o endereço MAC de destino está na tabela. Se estiver, o switch criará uma conexão temporária, chamada de circuito, entre as portas de origem e de destino. Os switches Ethernet também permitem o envio e o recebimento de quadros no mesmo cabo Ethernet simultaneamente. Isso melhora o desempenho da rede eliminando colisões.

  

Um switch cria a tabela de endereços MAC examinando o endereço MAC de origem de cada quadro enviado entre hosts. Quando um novo host envia uma mensagem ou responde a uma mensagem inundada, o switch descobre imediatamente o endereço MAC e a porta à qual ele está conectado. A tabela é atualizada dinamicamente toda vez que um novo endereço MAC de origem é lido pelo switch.![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd2aw6_RnqHuB9YRkY0NAG1TiKS627_KWo7idH13EIQCD_CbyjuWq7XaFOiVJMHWyShZzCSwOC-rOIBGXlo3dwwsedALc8eIljAvGqj4fHnxl6wR2I2W8-M7FSi2Hkva4aCTb6VqQ?key=Ilm-eBPMRP7iIekv_m9fmQ)

  
  

Protocolo de Internet (IP)

Todo host precisa de um endereço IPv4, um endereço de rede lógico que identifica um host específico na rede, e cada endereço IPv4 é atribuído à conexão de interface de rede de um host, geralmente uma placa de interface de rede (NIC)

Cada pacote enviado pela Internet tem um endereço IPv4 de origem e de destino. Essa informação é necessária para os dispositivos de rede garantirem que os dados cheguem ao destino e que as respostas sejam retornadas à origem.

Endereços IPv4 têm 32 bits no total, para facilitar são agrupados em quatro bytes, de 8 bits chamado octeto.

O endereço IPv4 é hierárquico e dividido em 2 partes, a rede e o host.

Todo endereço IPv4 possui uma máscara de sub-rede que é usada para identificar a rede à qual o host está conectado.

192.168.15.2

De verde o número da rede

De azul o número do host

192.168.15.2

│   │   │  └── Host (identifica o dispositivo)

│   │   └──── Sub-rede (ou grupo de IPs dentro da rede)

│   └──────── Parte da rede

└──────────── Parte da rede

- Endereço IP– Identifica o computador na rede.
    
- Máscara de Sub-rede - Identifica a rede à qual o host está conectado
    
- Gateway padrão – Identifica o dispositivo de rede que o host usa para acessar a Internet ou outra rede remota.
    

  

Cada octeto (parte de 8 bits) do endereço IP pode variar de 0 a 255. Isso significa que o intervalo total de endereços IP válidos vai de 0.0.0.0 a 255.255.255.255.

Hosts na mesma rede, podem comunicar entre si, por estarem na mesma rede.

O host A está na rede 172.16.0.0. Portanto, os dispositivos com os endereços IPv4 172.16.4.99 e 172.16.0.1 estão na mesma rede.

Existem diferentes tipos de transmissão de pacotes IPv4, como unicast, broadcast e multicast.

O unicast refere-se a um dispositivo que envia uma mensagem para outro dispositivo em comunicação um-para-um, ou seja somente UM único destinatário. O endereço IP de origem só pode ser um endereço unicast, porque o pacote só pode originar-se de UMA única origem.

Os endereços de host unicast IPv4 estão no intervalo de endereços de 1.1.1.1 a 223.255.255.255, porém dentro desses intervalos há muitos endereços já reservados para fins especiais.

Quando um IPv4 possui / e algum número após, ele está se referindo a quantos bits a máscara de sub-rede possui. 

192.168.15.1/24

Nesse caso, a máscara possui 24 bits

O broadcast refere-se a um dispositivo enviando uma mensagem para todos os dispositivos em uma rede, ou seja, comunicação de um para todos.

O IPv4 USA broadcast, já o IPv6 NÃO usa broadcast

O broadcast pode ser direcionado ou limitado, o direcionado é enviado para todos os hosts em uma sub-rede, já o limitado é enviado para todos os dispositivos da LAN.

(255.255.255.255)

Pacotes de transmissão usam recursos na rede e fazem com que todos os hosts receptores da rede processem o pacote. Portanto, o tráfego broadcast deve ser limitado para não prejudicar o desempenho da rede ou dos dispositivos. Como os roteadores separam domínios de broadcast, subdividir as redes pode melhorar seu desempenho ao eliminar o excesso de tráfego broadcast.

O multicast transmite um único pacote para um conjunto de hosts selecionados que participem de um grupo multicast.

Um pacote multicast, é um pacote com um endereço IP de destino que é um endereço multicast.

Os hosts que recebem pacotes multicast específicos são chamados de clientes multicast.

Cada grupo multicast é representado por um único endereço IPv4 multicast de destino. Quando um host IPv4 se inscreve em um grupo multicast, o host processa pacotes endereçados tanto a esse endereço multicast como a seu endereço unicast alocado exclusivamente.

Endereços IPv4 públicos são endereços roteados globalmente do provedor de Internet, ao acessar o site [meuip.com](http://meuip.com) por ex, o IP fornecido é o IPv4 público.

No entanto, nem todos os endereços IPv4 disponíveis são públicos, existem blocos de endereços conhecidos como endereços privados que são usados pela maioria das organizações para atribuir endereços IPv4 a hosts internos.

Endereços privados são definidos no RFC 1918 e às vezes referido como espaço de endereço RFC 1918.

O NAT (Conversão de Endereços de Rede) é usado para converter entre endereços IPv4 privados e IPv4 públicos. Isso geralmente é feito no roteador que conecta a rede interna à rede ISP.

Endereços de loopback (127.0.0.0/8 ou 127.0.0.1 a 127.255.255.254) são comumente identificados apenas como 127.0.0.1 são endereços especiais usados por um host para direcionar tráfego para ele mesmo.

  

Começou com 10. → Privado  
  

Começou com 192.168. → Privado  
  

Começou com 172.16. até 172.31. → Privado  
  

Qualquer outro? → Provavelmente Público

  

Os endereços locais de link (169.254.0.0 / 16 ou 169.254.0.1 a 169.254.255.254) são mais conhecidos como endereços APIPA ( endereçamento IP privado automático ) ou endereços auto-atribuídos. Eles são usados por um cliente Windows para se autoconfigurar caso o cliente não consiga obter um endereçamento IP por outros métodos. Endereços de link local podem ser usados em uma conexão ponto a ponto, mas não são comumente usados para esse fim.

  

Em 1981 (descontinuado), os endereços IPv4 foram atribuídos usando o endereço classful, conforme definido na RFC 790

  

|   |   |   |   |   |
|---|---|---|---|---|
|Classe|Intervalo Inicial|Máscara padrão|Faixa de Endereços|Uso|
|A|0.0.0.0 – 127.255.255.255|255.0.0.0 (/8)|1.0.0.0 – 126.255.255.255|Grandes redes|
|B|128.0.0.0 – 191.255.255.255|255.255.0.0 (/16)|128.0.0.0 – 191.255.255.255|Redes médias|
|C|192.0.0.0 – 223.255.255.255|255.255.255.0 (/24)|192.0.0.0 – 223.255.255.255|Redes pequenas|
|D|224.0.0.0 – 239.255.255.255|—|224.0.0.0 – 239.255.255.255|Multicast|
|E|240.0.0.0 – 255.255.255.255|—|Reservado para pesquisa||

Endereços IPv4 públicos são endereços roteados globalmente pela Internet. Endereços IPv4 públicos devem ser exclusivos.

  

Os endereços IPv4 e IPv6 são gerenciados pela IANA (Internet Assigned Numbers Authority). A IANA gerencia e aloca blocos de endereços IP aos registros regionais de Internet (RIRs).

  

Os RIRs são responsáveis por alocar endereços IP aos ISPs que fornecem blocos de endereços IPv4 para organizações e ISPs menores. As organizações também podem obter seus endereços diretamente de um RIR (sujeito às políticas desse RIR).

  

Em uma LAN Ethernet, os dispositivos usam broadcast e o ARP (Protocolo de Resolução de Endereços) para localizar outros dispositivos.

  

O ARP envia broadcasts para um endereço IPv4 conhecido na rede local para descobrir o endereço MAC associado.

  

Um host normalmente adquire sua configuração de endereço IPv4 usando o protocolo DHCP (Dynamic Host Configuration Protocol) que envia broadcasts na rede para localizar um servidor DHCP.

  

Roteadores não propagam broadcasts, cada interface do roteador (porta LAN), se conecta a um domínio de broadcast (um conjunto de dispositivos em uma rede que recebem um broadcast) e as transmissões são propagandas apenas dentro desse domínio específico.

  

Um GRANDE domínio de broadcasts, podem gerar broadcasts em excesso e afetar negativamente a rede, a solução é reduzir o tamanho da rede para criar menores domínios de broadcast, em um processo denominado divisão em sub-redes. Os espaços de rede menores são chamados de sub-redes.

  

Projetado para ser o sucessor do IPv4 o IPv6, tem um espaço de endereço de 128 bits, o IPv4 possui 32 bits, o IPv6 fornece 340 undecilhões de endereços possíveis.

  

Quando a IETF começou o desenvolvimento do sucessor do IPv4, ela aproveitou para corrigir as limitações do IPv4, incluindo aprimoramentos. Um exemplo é o ICMPv6 (Internet Control Message Protocol v6), que inclui a resolução de endereços e a configuração automática de endereços, não encontradas no ICMP para IPv4.

  

Existe uma coexistência entre IPv4 e IPv6, existem três categorias de migração:

  

Pilha Dupla - Permite que ambas coexistem no mesmo segmento de rede. Os dispositivos de pilha dupla executam os mesmos protocolos IPv4 e IPv6 simultaneamente

  

Tunelamento - Método de transporte de pacote IPv6 através de uma rede IPv4. Encapsula pacotes IPv6 dentro de pacotes IPv4, para que eles possam ser transmitidos por redes que ainda não suportam IPv6 nativamente.

  

Conversão - O NAT64(Network Address Translation 64) traduz um pacote IPv6 para um pacote IPv4 e vice-versa.

  

O tunelamento e a tradução só devem ser usados quando necessário. O objetivo deve ser comunicações IPv6 nativas da origem até o destino.

  

ENDEREÇAMENTO IPV6

  

IPv4 - Decimal |32 bits|

IPv6 - Hexadecimal (0123456789ABCDEF) |128 bits|

  

Cada 4 bits são representados por UM dígito hexadecimal.

No IPv4, chamamos de octeto cada grupo de 8 bits.

No IPv6, chamamos de hexteto cada grupo de 16 bits.

  

X:X:X:X:X:X:X:X

X -> 0000 até ffff 

4 hex = 16 binários

  

Formato preferencial significa que o endereço IPv6 é gravado usando todos os 32 dígitos hexadecimais, isso não significa necessariamente que é o método ideal para representar o endereço IPv6.

  

Existem 2 regras para otimizar a visualização de um endereço IPv6

  

Omitir zeros à esquerda - Omitindo os 0’s à esquerda de qualquer hexteto

01AB vira 1AB

09f0 vira 9f0

Dois pontos duplos - Só pode ser usado UMA vez, para remover um hexteto de zeros

  

AS REGRAS PODEM E DEVEM SER USADAS JUNTAS

  

2001:0DB8:0000:1111:0000:0000:0000:0200

2001:db8:0:1111::200

  

o hexadecimal, NÃO é case sensitive

  
  

ENDEREÇAMENTO DINÂMICO COM DHCP

  

O servidor DHCP atribui um endereço IPv4 automaticamente para cada host novo na rede, em redes residenciais, normalmente o servidor DHCP está localizado no ISP (provedor). Um host na rede residencial recebe a configuração IPv4 diretamente do ISP.

  

- Endereço IP– Identifica o computador na rede.
    
- Máscara de Sub-rede - Identifica a rede à qual o host está conectado
    
- Gateway padrão – Identifica o dispositivo de rede que o host usa para acessar a Internet ou outra rede remota.![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdI6Fi-c2IpSm9gofwC2hN_qDlGrNoZ54CC339S1P3id9rR_WhPf6S441ANSNpPExTTK_y5rAk2LdnII11eM7Od0tkDfG8_j8Enm4ylN2ph3omiy6ErjHiUHPkHo-dcpa-bfiE5eg?key=Ilm-eBPMRP7iIekv_m9fmQ)
    

  
  
  
  
  
**