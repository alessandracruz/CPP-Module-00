# CPP-Module-00

Deixando registrado meu caminho de aprendizado para C++ e o que cada lista espera que eu aprenda.

## CPP00
### ex00
Função simples para tornar letra maiúsucula qualquer entrada de letras no terminal.
### ex01
Começa a trabalhar a sintaxe e os pilares da POO
Encapsulamento (incluindo Atributo), Herança e Polimorfismo.
Aprendemos a montar as classes privadas e públicas de cada objeto. 

## CPP01
### ex00
Este exercício serve para praticar a criação de classes em C++, bem como a alocação e desalocação de memória.Mas qual o objetivo real do exercício? Entender em que caso é melhor alocar os zumbis na pilha (stack) ou no heap para analisar quais são as vantagens e desvantagens de uma escolha para a outra. A escolha entre alocar objetos na pilha (stack) ou no heap é uma parte importante do gerenciamento de memória em C++ e pode impactar tanto a performance quanto a segurança do programa.

## Alocação na Pilha (Stack):
## Vantagens:
- Alocação e desalocação rápidas. A alocação na pilha é basicamente um movimento do ponteiro da pilha, o que é muito eficiente.
- Não é necessário gerenciar explicitamente a memória. Os objetos são destruídos automaticamente quando o escopo em que foram declarados é encerrado.
## Desvantagens:
- Tamanho limitado. A pilha tem um tamanho muito menor que o heap, e uma grande alocação de memória pode resultar em estouro de pilha (stack overflow).
- Tempo de vida limitado. Você não pode retornar um ponteiro ou uma referência para um objeto na pilha para o chamador de uma função, já que ele será destruído quando a função retornar.

## Alocação no Heap:
## Vantagens:
- Tamanho dinâmico e flexibilidade. Você pode alocar uma quantidade muito maior de memória no heap, e é possível aumentar ou diminuir o tamanho alocado se necessário.
- Tempo de vida controlado pelo programador. Você decide quando alocar e desalocar a memória, o que permite que o objeto seja acessado de qualquer parte do programa e sobreviva ao escopo em que foi criado.
## Desvantagens:
- Mais lenta do que a alocação na pilha, pois envolve chamadas ao sistema para gerenciar a memória.
- Risco de vazamentos de memória. Se você esquecer de desalocar a memória (com delete ou delete[]), ela permanecerá alocada até que o programa termine, o que é um vazamento de memória.

A decisão de usar a pilha ou o heap geralmente depende do contexto e dos requisitos específicos do programa. Se você precisa de um objeto que deve ter um tempo de vida mais longo que o escopo de criação ou que pode precisar ser acessado por diferentes partes do programa, a alocação no heap é o caminho. Por outro lado, para objetos pequenos e de curta duração, a alocação na pilha é geralmente mais simples e rápida. Mas a forma com que o exercício foi apresentado para mim, é mais complicado de entender isso na prática. E, para fixar melhor isso, preferi montar outro exercício para o mesmo raciocínio usando exemplos mais palatáveis para mim, usando como exemplo uma pilha de livros e uma biblioteca.

## Imaginei como organizar livros em uma prateleira:

## Stack (Pilha):

Pensei na pilha como uma pequena prateleira ao lado da minha mesa de trabalho. Coloco um livro lá quando começo a trabalhar e retiro quando termina.
Cada livro representa uma variável que eu declarei dentro de uma função.
Quando a função termina, o livro é automaticamente retirado da prateleira (isto é, a variável é destruída).

## Heap:

O heap é como uma biblioteca enorme, onde eu tenho que ir e registrar um livro (alocar memória) e depois devolvê-lo manualmente (desalocar memória).
É mais flexível, porque eu posso pegar e devolver livros quando quiser, mas é responsabilidade minha lembrar de devolver.

## ex01
É preciso criar uma horda de zumbis.

## Implementar a Função zombieHorde:
- Esta função deve alocar N objetos Zombie em uma única alocação.
- Cada zumbi deve ser inicializado com o nome passado como parâmetro.
- A função retorna um ponteiro para o primeiro zumbi alocado.
  
### Testes:
- Implementar testes que provem que a função zombieHorde funciona como esperado. Isso envolve usar a função e, em seguida, iterar pela horda alocada para chamar o método announce de cada zumbi e liberar a memória alocada ao final dos testes para evitar vazamento de memória.

## Imaginei uma caixa de brinquedos:
Para tornar mais palatável a alocação e desalocação de memória em C++, vou imaginar que estou gerenciando uma pequena caixa de brinquedos.

### Criar a caixa: 
- Criar uma caixa que pode conter um certo número de brinquedos. Em termos de programação, isso seria como alocar um array na heap para guardar esses brinquedos (objetos).
### Preencher a caixa:
- Colocar brinquedos (inicializar objetos) na caixa, um por um, até que a caixa esteja cheia.
### Brincar com os brinquedos:
- Usar os brinquedos, o que em C++ seria como acessar e utilizar os objetos no array.
### Arrumar a caixa:
- Depois de brincar, vou limpar, o que significa desalocar a memória que reservada para a caixa de brinquedos, para que eu possa ter espaço para brincar com outras coisas.
```cpp
#include <iostream>

class Toy {
public:
    void playWith() const {
        std::cout << "Playing with the toy!" << std::endl;
    }
};

int main() {
    int numberOfToys = 3; // Número de brinquedos que quero na caixa.
    
    // Passo 1: Criar a caixa (alocar memória).
    Toy* toyBox = new Toy[numberOfToys];
    
    // Passo 2: Preencher a caixa (Inicializar os objetos).
    // Não precisa fazer nada neste passo porque a classe Toy é simples.
    
    // Passo 3: Brincar com os brinquedos (Usar os objetos).
    int i = 0; 
    while (i < numberOfToys) {
        toyBox[i].playWith();
        i++; 
    }
    
    // Passo 4: Arrumar a caixa (desalocar memória).
    delete[] toyBox;
    return 0;
}
```
## ex02
O objetivo deste exercício é desmistificar referências que podem
parecer completamente novas. Embora existam algumas pequenas diferenças, essa é outra sintaxe para algo que já estamos acostumados a fazer: manipulação de endereços. Este exercício é focado em referências e ponteiros, assim como na impressão de endereços de memória e valores associados.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // Imprime os endereços
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    // Imprime os valores
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}
```
### Retorno do terminal ao dar "make":

0x7ffd4b40bc20\
0x7ffd4b40bc20\
0x7ffd4b40bc20\
HI THIS IS BRAIN\
HI THIS IS BRAIN\
HI THIS IS BRAIN

### Entendendo o retorno linha a lina:

1. 0x7ffd4b40bc20: Este é o endereço de memória da variável str. Quando uso o operador "&" com uma variável, ele fornece o endereço de memória onde essa variável está armazenada.
2. 0x7ffd4b40bc20: Este é o endereço de memória armazenado no ponteiro stringPTR. Como o ponteiro está apontando para str, o endereço é o mesmo que o da variável str.
3. 0x7ffd4b40bc20: Este é o endereço de memória associado à referência stringREF. Em C++, uma referência é basicamente um outro nome para a mesma variável, então ela compartilha o mesmo endereço de memória.
   
As três primeiras linhas mostram que tanto a variável original quanto o ponteiro e a referência têm o mesmo endereço de memória, o que significa que todos eles estão referenciando o mesmo conteúdo na memória.

4. HI THIS IS BRAIN: Esta é a string armazenada na variável str. Estou acessando diretamente o valor da variável.
5. HI THIS IS BRAIN: Esta é a string para a qual o ponteiro stringPTR está apontando. Usando o operador de derreferenciação "*", estou acessando o valor na memória apontada pelo ponteiro, que é a mesma string str.
6. HI THIS IS BRAIN: Este é o valor referenciado por stringREF. Como mencionado anteriormente, a referência é apenas um outro nome para a mesma variável, então ela também tem o mesmo valor que str.

Essencialmente, todas as três abordagens - acesso direto, através de um ponteiro ou através de uma referência - levam ao mesmo local na memória e, portanto, fornecem o mesmo valor. Isso demonstra a equivalência entre usar a própria variável, um ponteiro para ela e uma referência a ela em C++.

- Criar uma variável do tipo std::string com o conteúdo "HI THIS IS BRAIN".
- Criar um ponteiro stringPTR para essa string.
- Criar uma referência stringREF para essa string.
- Imprimir o endereço da memória da string usando a variável, o ponteiro e a referência.
- Imprimir o valor da string usando a variável, o ponteiro e a referência.

## Imaginei uma caixa de correios em frente a minha casa:

1. Caixa de Correios:
A caixa de correios em frente a minha casa é como um ponteiro em C++. A caixa em si tem um endereço fixado nela, digamos "Rua A, Número 100". Esse endereço é o ponteiro (stringPTR), indicando onde encontrar o conteúdo, que no caso real, é a caixa de correios física.

2. Carta dentro da Caixa:
Dentro da caixa de correios, tem uma carta. Essa carta contém uma mensagem, "Você é convidado para uma festa!". A mensagem dentro da carta é o valor da string que o ponteiro aponta. Em C++, quando acessamos o valor apontado por stringPTR usando *stringPTR, estamos lendo o conteúdo da carta.

3. Referência à Carta:
Se alguém (vou chamar essa pessoa de "Referência") tem permissão direta para abrir a caixa de correios e ler a carta sempre que quiser, essa pessoa é como uma referência em C++. A referência (stringREF) não precisa do endereço porque já tem acesso direto ao conteúdo da carta. Quando ela lê a carta, está acessando diretamente o mesmo conteúdo que o ponteiro aponta.

```cpp
#include <iostream>
#include <string>

int main() {
    std::string message = "Você é convidado para uma festa!";
    std::string* mailboxPTR = &message; // Ponteiro para a mensagem
    std::string& mailRef = message; // Referência direta para a mensagem

    // Imprimir o endereço e o conteúdo usando o ponteiro
    std::cout << "Endereço na caixa de correios: " << mailboxPTR << std::endl;
    std::cout << "Conteúdo da carta: " << *mailboxPTR << std::endl;

    // Acessar o conteúdo diretamente via referência
    std::cout << "Leitura direta pela Referência: " << mailRef << std::endl;

    return 0;
}
```
### Neste código:
- message é a mensagem na carta.
- mailboxPTR é o endereço da caixa de correios, ou seja, onde encontrar a mensagem.
- mailRef é como uma pessoa que tem acesso direto para ler a mensagem sem precisar do endereço.

## ex03
O objetivo desse exercício é lidar com classes que envolvem manipulação de armas e ataques por personagens fictícios, HumanA e HumanB. Ainda é sobre ponteiro, conteúdo e referência do mesmo.

- Implementar uma classe Weapon que contém um tipo de arma como um atributo privado e métodos para obter e definir esse tipo.
- Criar duas classes, HumanA e HumanB, que representam personagens que usam armas para atacar. A diferença chave entre essas duas classes é como elas associam suas armas:
HumanA tem uma arma desde sua criação, que é passada por referência no construtor.
HumanB pode ou não ter uma arma inicialmente e sua arma pode ser definida depois de ser criado, usando um ponteiro.

### Por que usar uma referência em HumanA e um ponteiro em HumanB?
- HumanA deve sempre ter uma arma; portanto, uma referência (que não pode ser nula e não pode ser reatribuída) é apropriada.
- HumanB pode ou não ter uma arma inicialmente, e sua arma pode mudar ao longo do tempo, então um ponteiro (que pode ser nulo e reatribuído) é mais adequado.

### Entendendo o retorno do terminal:

Bob attacks with their crude spiked club\
Bob attacks with their some other type of club\
Jim has no weapon to attack with\
Jim attacks with their crude spiked club\
Jim attacks with their some other type of club

Os comportamentos esperados das classes HumanA e HumanB e serve para demonstrar a diferença fundamental entre usar uma referência e um ponteiro para gerenciar dependências de objetos em C++.

### HumanA (Bob):
- Bob tem uma arma (Weapon) passada para seu construtor e armazenada como referência. Quando o tipo da arma é alterado (setType), a mudança é refletida nos ataques subsequentes de Bob.
- Output:
"Bob attacks with their crude spiked club"
"Bob attacks with their some other type of club"

### HumanB (Jim):
- Jim começa sem arma porque HumanB usa um ponteiro para Weapon, que é inicialmente nulo. Após a primeira tentativa de ataque, onde Jim não tem uma arma, uma arma é definida usando setWeapon.
- Output:
"Jim has no weapon to attack with."
"Jim attacks with their crude spiked club"
"Jim attacks with their some other type of club"

### Discussão sobre Uso de Ponteiros e Referências:

### Referência (HumanA)
- Quando usar: Use uma referência quando você tem certeza de que o objeto não será nulo e sua ligação ao objeto não muda durante a vida útil do objeto que a contém.
- Vantagens: As referências são geralmente mais seguras e fáceis de usar porque garantem que sempre apontam para um objeto válido.
- Exemplo: Bob sempre tem uma arma desde o início, então uma referência é apropriada porque ela não pode ser nula e sempre aponta para uma arma existente.

### Ponteiro (HumanB)
- Quando usar: Use um ponteiro quando o objeto pode ou não existir (pode ser nulo) ou quando a ligação ao objeto pode mudar ao longo do tempo.
- Vantagens: Ponteiros oferecem flexibilidade maior, pois permitem que você altere o objeto ao qual estão apontando ou até mesmo aponte para nenhum objeto (nulo).
- Exemplo: Jim pode não ter uma arma inicialmente ou pode mudar de arma. O uso de um ponteiro permite essa flexibilidade.

## Imaginei que tenho uma empresa de aluguel de carros:
Nessa empresa, eu ofereço dois tipos de serviços aos meus clientes:

### Serviço de Aluguel Garantido (Referência):
- Quando um cliente escolhe este serviço, ele garante que sempre terá um carro disponível assim que chegar na loja. O carro já está pré-alocado e pronto para uso, e o cliente não tem a opção de não pegar um carro quando chega.
- Analogia com Referência: O serviço garantido é como uma referência em C++. A referência sempre deve estar ligada a um objeto (neste caso, um carro). Uma vez definida, você não pode fazer a referência apontar para outro carro ou nenhum carro — ela sempre terá um carro atribuído.
  
### Serviço Flexível (Ponteiro):
- Este serviço é mais flexível. O cliente pode reservar um carro, mas também tem a opção de mudar de ideia e não pegar nenhum carro ao chegar, ou até mudar para um carro diferente a qualquer momento.
- Analogia com Ponteiro: O serviço flexível é como um ponteiro em C++. O ponteiro pode ser ajustado para apontar para qualquer carro disponível ou até mesmo ser definido como nulo, indicando que nenhum carro está sendo alugado no momento. Isso oferece flexibilidade para o cliente mudar de decisão.

### Aplicação Prática na Analogia:
- HumanA (Bob): Bob reservou o serviço de aluguel garantido. Quando ele chega, um carro já está esperando por ele, e ele não pode trocar de carro durante o período de aluguel. Se o carro que ele alugou recebe um upgrade (suponha, um melhor sistema de som), ele se beneficia imediatamente dessas melhorias.

- HumanB (Jim): Jim escolheu o serviço flexível. Ele pode chegar e decidir não pegar nenhum carro, ou ele pode escolher um carro na hora. Se ele decidir mudar para um carro melhor a qualquer momento, ele pode fazer isso. No início, ele pode não ter nenhum carro, mas mais tarde decide pegar um.

## ex04
O objetivo deste exercício é criar um programa que substitua todas as ocorrências de uma string em um arquivo por outra string, escrevendo o resultado em um novo arquivo.

Requisitos:

- Implementar um programa que recebe como argumentos o nome de um arquivo, uma string a ser substituída e a string de substituição.
- O programa deve ler o conteúdo do arquivo de entrada, substituir todas as ocorrências da string fornecida e gravar o resultado em um novo arquivo cujo nome é o nome do arquivo de entrada acrescido de ".replace".

## Imaginei que eu sou um Editor de Textos:

- Tarefa: Você tem um artigo escrito e seu chefe pediu para substituir todas as ocorrências da palavra "antigo" por "novo".
- O Programa: O programa replace faz exatamente isso de forma automatizada. Ele lê o artigo (arquivo de entrada), encontra todas as ocorrências da palavra "antigo" e substitui por "novo", criando um novo artigo (arquivo de saída) com as modificações.

### Aplicação Prática na Analogia:

- Leitura do Arquivo: O programa abre o arquivo de entrada e lê todo o seu conteúdo.
- Substituição de Strings: Ele procura todas as ocorrências da string alvo e as substitui pela string fornecida.
- Escrita do Novo Arquivo: O programa grava o conteúdo modificado em um novo arquivo com o nome do arquivo original acrescido de ".replace".

## ex05
O objetivo deste exercício é lidar com classes que representam um cérebro humano e um cérebro alienígena, explorando conceitos de agregação e composição em C++.

Requisitos:

- Implementar uma classe Human que possui um objeto da classe Brain como um membro.
- Implementar uma classe Alien que possui um objeto da classe Brain como um ponteiro.

```cpp
int main() {
    Human human;
    Alien alien;
    std::cout << "Human brain address: " << human.identify() << std::endl;
    std::cout << "Alien brain address: " << alien.identify() << std::endl;
    return 0;
}
```
## Imaginei ser um Gerente de um Hospital

- Human: Um humano tem um cérebro que faz parte inseparável do seu corpo. O cérebro do humano está sempre presente e você pode acessá-lo diretamente.
    - Analogia com Composição: A classe Human contém um objeto Brain como um membro. Isso significa que o cérebro é criado e destruído junto com o humano.

- Alien: Um alienígena, por outro lado, pode ter um cérebro que pode ser conectado ou desconectado. O cérebro pode ser substituído ou removido conforme necessário.
    - Analogia com Agregação: A classe Alien contém um ponteiro para um objeto Brain. Isso permite mais flexibilidade, pois o cérebro pode ser alterado ou removido.

### Aplicação Prática na Analogia:

1. Classe Brain: Implementar uma classe Brain com métodos para identificar o cérebro.
2. Classe Human: Implementar uma classe Human que contém um objeto Brain como um membro.
3. Classe Alien: Implementar uma classe Alien que contém um ponteiro para um objeto Brain.

- Human: Sempre tem um cérebro associado que não pode ser separado. Se um humano for destruído, seu cérebro também é.
- Alien: Pode ter um cérebro que pode ser conectado ou desconectado. O cérebro pode ser substituído ou removido sem destruir o alienígena.

## CPP02
### ex00
O objetivo deste exercício é criar uma classe em C++ chamada Fixed que representa um número de ponto fixo com uma precisão específica.

Requisitos:

- Implementar uma classe Fixed que contém um inteiro para armazenar o valor de ponto fixo e um inteiro estático constante para representar a quantidade de bits fracionários.
- Implementar construtores, destrutor, operador de atribuição, e métodos getRawBits e setRawBits.

Exemplo de uso:

```cpp
int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
```
## Imaginei ser um Contador:

- Número de Ponto Fixo: Pense no número de ponto fixo como um valor monetário com centavos. Por exemplo, R$10.50 pode ser representado como 1050 centavos.
    - Representação Interna: Em vez de usar um ponto decimal, você armazena tudo em centavos para manter a precisão. O valor "1050" representa R$10.50.

#### Passo a Passo da Implementação:

1. Classe Fixed: Implementar uma classe Fixed que contém um inteiro para armazenar o valor de ponto fixo e um inteiro estático constante para representar os bits fracionários.
2. Métodos getRawBits e setRawBits: Implementar métodos para obter e definir o valor bruto do ponto fixo.

#### Aplicação Prática na Analogia:
- Número de Ponto Fixo: Assim como armazenar valores monetários em centavos mantém a precisão sem usar um ponto decimal, a classe Fixed armazena valores de ponto fixo usando um inteiro, mantendo a precisão especificada pelos bits fracionários.

### ex01
O objetivo deste exercício é estender a classe Fixed para suportar conversões entre inteiros e números de ponto flutuante.

Requisitos:

- Adicionar construtores para converter de um inteiro e um número de ponto flutuante para Fixed.
- Implementar métodos toInt e toFloat para converter de Fixed para inteiro e ponto flutuante, respectivamente.

Exemplo de uso:

```cpp
int main() {
    Fixed a(10);
    Fixed b(42.42f);
    std::cout << a.toInt() << " as integer" << std::endl;
    std::cout << b.toFloat() << " as float" << std::endl;
    return 0;
}
```
## Imaginei ser um caixa:

- Conversão de Moedas: Pense em converter entre diferentes moedas, como dólares e centavos. $10.50 pode ser convertido para 1050 centavos e vice-versa.
    - Conversão de Tipos: A classe Fixed pode converter entre valores inteiros e de ponto flutuante, assim como você converte entre dólares e centavos.

#### Aplicação Prática na Analogia:
- Conversão de Moedas: Assim como você converte entre dólares e centavos para facilitar diferentes operações financeiras, a classe Fixed permite a conversão entre valores inteiros e de ponto flutuante para facilitar diferentes operações numéricas.

### ex02
O objetivo deste exercício é estender a classe Fixed para suportar operadores de comparação e aritméticos.

Requisitos:

- Implementar operadores de comparação (<, >, <=, >=, ==, !=).
- Implementar operadores aritméticos (+, -, *, /).
- Implementar operadores de incremento e decremento (pré e pós-incremento e decremento).

Exemplo de uso:

```cpp
int main() {
    Fixed a(2);
    Fixed b(3.14f);
    Fixed c = a + b;
    std::cout << c.toFloat() << std::endl;
    return 0;
}
```
## Imaginei ser um Matemático:

- Operações Matemáticas: Pense em realizar operações matemáticas básicas como adição, subtração, multiplicação e divisão com valores monetários.
    - Operadores de Comparação e Aritméticos: A classe Fixed permite realizar operações matemáticas básicas e comparações, assim como você faria com valores monetários.

Passo a Passo da Implementação:

1. Operadores de Comparação: Implementar operadores de comparação (<, >, <=, >=, ==, !=).
2. Operadores Aritméticos: Implementar operadores aritméticos (+, -, *, /).
3. Operadores de Incremento e Decremento: Implementar operadores de incremento e decremento (pré e pós-incremento e decremento).

#### Aplicação Prática na Analogia:
- Operações Matemáticas: Assim como você realiza operações matemáticas básicas com valores monetários, a classe Fixed permite realizar essas operações com valores de ponto fixo, mantendo a precisão especificada.

### ex03
O objetivo deste exercício é estender a classe Fixed para suportar funções estáticas min e max.

Requisitos:

- Implementar funções estáticas min e max que retornam o menor e o maior valor, respectivamente, entre dois objetos Fixed.

Exemplo de uso:

```cpp
int main() {
    Fixed a(2);
    Fixed b(3.14f);
    std::cout << Fixed::min(a, b).toFloat() << std::endl;
    std::cout << Fixed::max(a, b).toFloat() << std::endl;
    return 0;
}
```

## Imaginei ser um Juiz de Competições:

- Comparação de Pontuações: Pense em comparar as pontuações de dois competidores para determinar o vencedor.
    - Funções min e max: As funções min e max permitem determinar o menor e o maior valor entre dois objetos Fixed, assim como você determina o vencedor comparando as pontuações dos competidores.

Passo a Passo da Implementação:

1. Funções min e max: Implementar funções estáticas min e max que retornam o menor e o maior valor entre dois objetos Fixed.

#### Aplicação Prática na Analogia:
- Comparação de Pontuações: Assim como você compara as pontuações dos competidores para determinar o vencedor, as funções min e max permitem comparar os valores de ponto fixo para determinar o menor e o maior.


