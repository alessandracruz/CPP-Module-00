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
### ex00 - Minha Primeira Classe na Forma Canônica Ortodoxa
O objetivo deste exercício é criar uma classe em C++ chamada Fixed que representa um número de ponto fixo com uma precisão específica. Ponto Fixo é um método de representar números reais em computadores utilizando uma quantidade fixa de bits para a parte fracionária. Em C++, isso é frequentemente implementado através de classes que encapsulam a lógica de manipulação de números de ponto fixo.

Requisitos:

1. Membros privados:

- Um inteiro para armazenar o valor do número em ponto fixo.
- Um inteiro constante estático para armazenar o número de bits fracionários, com valor 8.

2. Membros públicos:

- Um construtor padrão que inicializa o valor do número em ponto fixo para 0.
- Um construtor de cópia.
- Um operador de atribuição de cópia.
- Um destruidor.
- Uma função membro int getRawBits(void) const; que retorna o valor bruto do número em ponto fixo.
- Uma função membro void setRawBits(-int const raw); que define o valor bruto do número em ponto fixo.

3. Implementação:

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

### ex01 -  Em direção a uma classe de número em ponto fixo mais útil
O objetivo deste exercício é estender a classe Fixed para suportar conversões entre inteiros e números de ponto flutuante.

Requisitos adicionais:

1. Novos construtores públicos:

- Um construtor que recebe um inteiro constante como parâmetro e o converte para o valor correspondente em ponto fixo.
- Um construtor que recebe um número de ponto flutuante constante como parâmetro e o converte para o valor correspondente em ponto fixo.

2. Novas funções membros públicas:

- float toFloat(void) const; que converte o valor de ponto fixo para um valor de ponto flutuante.
- int toInt( void ) const; que converte o valor de ponto fixo para um valor inteiro.

3. Sobrecarga do operador de inserção (<<) para inserir uma representação em ponto flutuante do número de ponto fixo no objeto de fluxo de saída passado como parâmetro.

Implementação: 

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

### ex02 - Agora estamos falando
O objetivo deste exercício é estender a classe Fixed para suportar operadores de comparação e aritméticos.

Requisitos adicionais:

1. Sobrecarga dos operadores de comparação: >, <, >=, <=, == e !=.

2. Sobrecarga dos operadores aritméticos: +, -, *, e /.

3. Sobrecarga dos operadores de incremento/decremento: pré-incremento (++a) e pós-incremento (a++), pré-decremento (--a) e pós-decremento (a--).

4. Funções membros estáticas:
    - min: retorna a referência para o menor de dois números de ponto fixo.
    - max: retorna a referência para o maior de dois números de ponto fixo.

Implementação

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

#### Aplicação Prática na Analogia:
- Operações Matemáticas: Assim como você realiza operações matemáticas básicas com valores monetários, a classe Fixed permite realizar essas operações com valores de ponto fixo, mantendo a precisão especificada.

### ex03 (Não fiz)
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

## CPP03
### ex00 - Aaaaand... OPEN!
O objetivo deste exercício é implementar uma classe ClapTrap que representa um robô com pontos de vida, energia e dano de ataque.

Requisitos:

1. Implementar uma classe ClapTrap com os seguintes atributos privados, inicializados aos valores especificados:

- Name, passado como parâmetro ao construtor.
- Hit points (10)
- Energy points (10)
- Attack damage (0)

2. Adicionar as seguintes funções membro públicas:

- void attack(const std::string& target);
- void takeDamage(unsigned int amount);
- void beRepaired(unsigned int amount);

3. As funções membro devem imprimir mensagens para descrever o que acontece.

Implementação:

- Implementar a classe ClapTrap com atributos name, hitPoints, energyPoints e attackDamage.
- Implementar métodos para ataque, receber dano e reparação.

Exemplo de uso:

```cpp
int main() {
    ClapTrap robot("CL4P-TP");
    robot.attack("target");
    robot.takeDamage(5);
    robot.beRepaired(3);
    return 0;
}
```

## Imaginei ser um Engenheiro de Robôs:

- Robô com Atributos: Pense em projetar um robô que tem pontos de vida, energia e capacidade de causar dano.
    - Classe ClapTrap: A classe ClapTrap representa um robô com esses atributos e métodos para realizar ações básicas como atacar, receber dano e se reparar.

### ex01 - Serena, my love!
O objetivo deste exercício é criar uma classe derivada ScavTrap que herda da classe ClapTrap e adiciona funcionalidade específica.

Requisitos:

1. Implementar uma classe ScavTrap que herda de ClapTrap.

2. ScavTrap deve inicializar seus atributos para:
    - Name, passado como parâmetro ao construtor.
    - Hit points (100)
    - Energy points (50)
    - Attack damage (20)

3. ScavTrap deve ter uma função membro void guardGate(); que imprime uma mensagem indicando que o ScavTrap está em modo Gatekeeper.

Implementação:

- Implementar a classe ScavTrap que herda da classe ClapTrap.
- Adicionar um método específico guardGate.

Exemplo de uso:

```cpp
int main() {
    ScavTrap robot("SC4V-TP");
    robot.attack("target");
    robot.takeDamage(5);
    robot.beRepaired(3);
    robot.guardGate();
    return 0;
}
```
## Imagine o mesmo robô anterior, mas com funções adicionais:

- Robô com Funcionalidade Adicional: Pense em projetar uma versão avançada de um robô existente, adicionando novas funcionalidades específicas.
    - Classe ScavTrap: A classe ScavTrap herda da classe ClapTrap e adiciona o método guardGate para representar uma nova funcionalidade.

### ex02 - Repetitive work
O objetivo deste exercício é criar uma classe derivada FragTrap que herda da classe ClapTrap e adiciona funcionalidade específica.

Requisitos:

1. Implementar uma classe FragTrap que herda de ClapTrap.

2. FragTrap deve inicializar seus atributos para:
   - Name, passado como parâmetro ao construtor.
   - Hit points (100)
   - Energy points (100)
   - Attack damage (30)

3. FragTrap deve ter uma função membro void highFivesGuys(void); que exibe uma mensagem positiva de pedido de "high five".

Implementação

- Implementar a classe FragTrap que herda da classe ClapTrap.
- Adicionar um método específico highFivesGuys que representa uma nova funcionalidade do robô.

### ex03 (Não fiz)
O objetivo deste exercício é criar uma classe base abstrata DiamondTrap que herda de duas classes ScavTrap e FragTrap.

Requisitos:

- Implementar a classe DiamondTrap que herda de ScavTrap e FragTrap.
- Adicionar um método específico whoAmI.

Exemplo de uso:

```cpp
int main() {
    DiamondTrap robot("DI4M-TP");
    robot.attack("target");
    robot.takeDamage(5);
    robot.beRepaired(3);
    robot.whoAmI();
    return 0;
}
```
## Imagine o mesmo robô anterior, mas com funções adicionais:

- Robô com Funcionalidade Combinada: Pense em projetar um robô que combina funcionalidades de duas versões especializadas anteriores.
    - Classe DiamondTrap: A classe DiamondTrap herda de ScavTrap e FragTrap, combinando suas funcionalidades e adicionando o método whoAmI.

## CPP04
### ex00 - Polymorphism
O objetivo deste exercício é criar uma classe base Animal e classes derivadas Dog e Cat.

Requisitos:

1. Implementar uma classe base Animal com um atributo protegido:
    - std::string type;

2. Implementar uma classe Dog que herda de Animal.

3. Implementar uma classe Cat que herda de Animal.

4. As classes derivadas devem definir o campo type como "Dog" e "Cat", respectivamente.

5. Cada animal deve ser capaz de usar a função membro makeSound(), que imprime um som apropriado (gatos não latem).

6. Implementar uma classe WrongAnimal e uma classe WrongCat que herda de WrongAnimal para demonstrar a diferença entre polimorfismo correto e incorreto.

Implementação:

- Implementar a classe Animal com um atributo protegido type.
- Implementar as classes Dog e Cat que herdam de Animal e redefinem o método makeSound.

Exemplo de uso:

```cpp
int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    return 0;
}
```
### Imaginei ser um Zoologista:

- Classificação de Animais: Pense em classificar animais em diferentes espécies, cada uma com seu próprio som característico.
    - Classe Animal: A classe Animal representa a classificação básica de um animal, enquanto as classes Dog e Cat representam espécies específicas com sons distintos.

### ex01 - I Don’t Want to Set the World on Fire
O objetivo deste exercício é estender a classe Animal para incluir um objeto Brain como um membro privado das classes Dog e Cat.

Requisitos:

1. Adicionar uma classe Brain que contém um array de 100 std::string chamado ideas.
2. Dog e Cat terão um atributo privado Brain*.
3. No construtor, Dog e Cat criarão seu Brain usando new Brain().
4. No destrutor, Dog e Cat deletarão seu Brain.
5. Certifique-se de que as cópias de Dog e Cat não sejam cópias rasas. Teste se suas cópias são cópias profundas.

Implementação:

- Implementar a classe Brain com um array de 100 strings.
- Adicionar um objeto Brain como membro privado das classes Dog e Cat.

Exemplo de uso:

```cpp
int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // should not create a leak
    delete i;
    return 0;
}
```
### Imaginei ser um Neurocientista:

- Cérebro de Animais: Pense em estudar o cérebro de diferentes animais, cada um com seu próprio conjunto de ideias.
    - Classe Brain: A classe Brain representa o cérebro de um animal, contendo um array de ideias. As classes Dog e Cat contêm um objeto Brain como membro privado.

### ex02 - Abstract Class
O objetivo deste exercício é tornar a classe Animal abstrata para evitar a criação de objetos Animal diretamente.

Requisitos:

- Modifique a classe Animal para torná-la uma classe abstrata. Isso significa que a classe Animal não pode mais ser instanciada diretamente.
- Tornar a classe Animal abstrata, declarando o método makeSound como virtual puro.

### Imaginei um Desenhista de Esquemas:

- Esquema Abstrato de Animais: Pense em criar um esquema abstrato de animais, onde você define as características básicas que todos os animais têm, mas deixa as implementações específicas para as subclasses.
    - Classe Animal: A classe Animal representa um esquema abstrato de animais, onde o método makeSound é declarado como virtual puro, forçando as subclasses a implementarem suas próprias versões desse método.

### ex03 - Interface & Recap
O objetivo deste exercício é implementar uma hierarquia de classes para representar diferentes tipos de matérias mágicas (AMateria) e personagens (Character).

Requisitos:

- Implementar a classe abstrata AMateria com métodos virtuais puros.
- Implementar as classes concretas Ice e Cure que herdam de AMateria.
- Implementar a interface ICharacter e a classe Character que implementa essa interface.
- Implementar a interface IMateriaSource e a classe MateriaSource que implementa essa interface.

Exemplo de Uso:

```cpp
int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
```
### Imaginei ser um Mestre de Magia:

- Tipos de Magia: Pense em diferentes tipos de magias (por exemplo, gelo e cura) que podem ser aprendidas e usadas por personagens. Assim como você tem diferentes tipos de magias que podem ser aprendidas e usadas por personagens, as classes AMateria, Ice, Cure, ICharacter, Character, IMateriaSource e MateriaSource representam uma hierarquia de classes para gerenciar magias e personagens em um jogo de RPG.
    - Classe AMateria: A classe AMateria representa um tipo abstrato de magia, com métodos para clonar a magia e usá-la em um personagem.
    - Classes Ice e Cure: As classes Ice e Cure representam tipos específicos de magias que herdam de AMateria.
    - Interface ICharacter e Classe Character: A interface ICharacter e a classe Character representam personagens que podem aprender e usar magias.
    - Interface IMateriaSource e Classe MateriaSource: A interface IMateriaSource e a classe MateriaSource representam fontes de magias que podem aprender novos tipos de magias e criar instâncias dessas magias.

# Conteúdo Estudado e Aprendido com as Listas

## Introdução à Programação Orientada a Objetos (POO)

A programação orientada a objetos (POO) é um paradigma de programação que utiliza "objetos" - instâncias de classes que encapsulam dados e comportamentos relacionados. Este paradigma facilita a organização do código e a reutilização de componentes, tornando o desenvolvimento de software mais eficiente e modular. Os quatro pilares fundamentais da POO são encapsulamento, abstração, herança e polimorfismo.

## Pilares da Programação Orientada a Objetos

1. Encapsulamento

Encapsulamento é o conceito de agrupar dados (atributos) e métodos que operam sobre esses dados dentro de uma classe, escondendo a implementação dos detalhes e expondo apenas o que é necessário através de interfaces públicas.

- Atributo: Variável que pertence a uma classe e descreve uma característica de um objeto. Exemplo: std::string name em uma classe ClapTrap.
- Membro Privado: Atributo ou método que só pode ser acessado de dentro da própria classe. Exemplo: int hitPoints em ClapTrap.
- Membro Protegido: Atributo ou método que pode ser acessado de dentro da própria classe e por classes derivadas. Exemplo: std::string type em Animal.

2. Abstração

Abstração é o conceito de simplificar a complexidade do mundo real ao modelar classes apropriadas que representam objetos do mundo real. Foca em aspectos relevantes para o problema, ignorando detalhes irrelevantes.

- Classe Base Abstrata: Uma classe que não pode ser instanciada diretamente e serve como uma base para outras classes. Ela geralmente contém métodos virtuais puros. Exemplo: class Animal { virtual void makeSound() const = 0; }.

3. Herança

Herança é o mecanismo pelo qual uma classe (classe derivada) herda atributos e métodos de outra classe (classe base). Isso promove a reutilização de código e a criação de hierarquias de classes.

- Classe Derivada: Uma classe que herda de outra classe. Exemplo: class Dog : public Animal { }.
- Sobrecarga de Operadores: Capacidade de redefinir o comportamento de operadores para tipos definidos pelo usuário. Exemplo: Fixed operator+(const Fixed& other) const.

4. Polimorfismo

Polimorfismo é a capacidade de um objeto ser tratado como instância de diferentes classes, geralmente através de uma interface comum. Isso permite o uso de funções e métodos de forma flexível e extensível.

- Método Virtual Puro: Um método que deve ser implementado por qualquer classe derivada. Exemplo: virtual void makeSound() const = 0.
- Polimorfismo Correto e Incorreto: Utilizar a herança e interfaces de forma que permita o comportamento adequado dos objetos, evitando o uso de classes e métodos que não correspondam às expectativas.

## Conceitos Adicionais

### Forma Canônica Ortodoxa
A forma canônica ortodoxa é um conjunto de regras para implementar classes em C++, garantindo que as operações de cópia, atribuição e destruição sejam realizadas corretamente. Inclui a implementação de:

    - Construtor de Cópia: ClassName(const ClassName& other);
    - Operador de Atribuição: ClassName& operator=(const ClassName& other);
    - Destrutor: ~ClassName();

### Ponto Fixo
Ponto Fixo é um método de representar números reais em computadores utilizando uma quantidade fixa de bits para a parte fracionária. Em C++, isso é frequentemente implementado através de classes que encapsulam a lógica de manipulação de números de ponto fixo.

### Subclasses e Cópias Rasas

- Subclasses: Classes que herdam de uma classe base, adicionando ou modificando comportamentos. Exemplo: Cat e Dog são subclasses de Animal.
- Cópias Rasas: Cópias de objetos onde apenas os valores dos atributos são copiados. Para evitar problemas de duplicação de recursos, frequentemente se implementa uma cópia profunda, especialmente quando a classe contém ponteiros ou alocações dinâmicas.

## Exemplo de Uso dos Conceitos

Exemplo que ilustra vários desses conceitos:

```cpp
#include <iostream>
#include <string>

// Classe base abstrata
class Animal {
protected:
    std::string type;
public:
    Animal() : type("Animal") { }
    virtual ~Animal() { }
    virtual void makeSound() const = 0; // Método virtual puro
    std::string getType() const { return type; }
};

// Subclasse concreta
class Dog : public Animal {
public:
    Dog() { type = "Dog"; }
    void makeSound() const override {
        std::cout << "Woof\n";
    }
};

// Subclasse concreta
class Cat : public Animal {
public:
    Cat() { type = "Cat"; }
    void makeSound() const override {
        std::cout << "Meow\n";
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->makeSound(); // Woof
    cat->makeSound(); // Meow

    delete dog;
    delete cat;

    return 0;
}
```

### Conclusão:

Os exercícios das listas cpp00 a cpp04 cobrem conceitos de programação orientada a objetos, desde a criação e manipulação de objetos simples até o uso avançado de herança, polimorfismo e encapsulamento. Através desses exercícios é possível aprender a estruturar seu código de forma modular e reutilizável, além de aplicar práticas recomendadas para a implementação de classes em C++.

### Desenhando:

![POO](https://github.com/alessandracruz/Imagens/blob/main/POO.png)

### Simplificando para o contexto do nosso dia a dia:

#### Encapsulamento

Encapsulamento é como proteger os segredos de um animal, guardando suas informações e ações dentro de uma "caixa" chamada classe. Só o que é permitido pode ser visto de fora.

    - Classe Animal

        - Atributos: características dos animais
            - Exemplo: tipo (mamífero, ovíparo)

        - Métodos: ações dos animais
            - Exemplo: fazer som

    - Modificadores de Acesso

        - Privado: partes que só o próprio animal conhece
            - Exemplo: pensamentos
        - Protegido: partes que a família conhece
            - Exemplo: hábitos alimentares
        - Público: partes que todos conhecem
            - Exemplo: cor do pelo

### Abstração

Abstração é como desenhar o esqueleto de um animal, onde você define as partes principais, mas não os detalhes. As subclasses vão preencher esses detalhes.

    - Classe Base Abstrata
        - Animal
            - Métodos Virtuais Puros: ações que todos os animais fazem, mas de maneiras diferentes
                - Exemplo: fazer som

### Herança

Herança é como passar características dos pais para os filhos. Um animal pode herdar características e ações de um animal mais geral.

    - Classe Derivada

        - Cachorro
            - Sobrescreve fazer som
            - Exemplo: latir
        - Gato
            - Sobrescreve fazer som
            - Exemplo: miar

    - Forma Canônica Ortodoxa

        - Construtor de Cópia: criar um novo animal igual a outro
        - Operador de Atribuição: copiar características de um animal para outro
        - Destrutor: quando o animal deixa de existir

### Polimorfismo

Polimorfismo é como diferentes animais podem fazer a mesma ação de maneiras diferentes. Cada animal tem sua própria maneira de fazer algo, como emitir um som.

    - Correto e Incorreto
        - Uso de Métodos Virtuais: fazer som corretamente para cada animal
    - Método Virtual Puro
        - Exemplo: fazer som

### Conceitos Adicionais

    - Subclasses

        - Cachorro
        - Gato
    
    - Cópias Rasas: copiar só a superfície de um animal, sem copiar profundamente todas as características

    - Ponto Fixo: maneira precisa de representar números, como contar moedas (Sem representação para essa classe de animal)

    - Classes Concretas

        - Cachorro
        - Gato

    - Interfaces
        
        - Implementação em C++: definir ações que diferentes animais podem fazer, mesmo que façam de maneiras diferentes

### Exemplo Visual:

    Classe: Animal
        - Tipo: Racional (ser humano), Irracional (animais irracionais)
    
    Subclasse: Animal Irracional
        - Mamífero
            - Cachorro
                - Som: Latido
            - Gato
                - Som: Miau
        - Ovíparo
            - Galinha
                - Som: Cocoricó
            - Pato
                - Som: Quack

    Subclasse: Animal Racional
        - Ser Humano
            - Criança
                - Som: Risada
            - Adulto
                - Som: Conversa

### Explicando os Conceitos:

1. Encapsulamento: Imagine que o animal guarda suas características e ações dentro de uma caixa, onde só algumas coisas podem ser vistas de fora.

2. Abstração: Como desenhar um esqueleto, onde só os ossos principais são mostrados e os detalhes são adicionados depois.

3. Herança: Características são passadas dos pais para os filhos. Um gato filhote herda características do gato adulto.

4. Polimorfismo: Diferentes animais fazem a mesma coisa de formas diferentes. Cachorros latem, gatos miam, mas todos fazem som.

### Desenhando:

![POO](https://github.com/alessandracruz/Imagens/blob/main/POO_01.png)

### Mais explicações sobre:

#### 1. Forma Canônica Ortodoxa

Imagine que você tem um robô de brinquedo chamado "Robô". Esse robô precisa seguir algumas regras importantes para funcionar bem em todas as situações, como ser copiado, substituído e guardado corretamente.

- Construtor de Cópia
    Regra 1: Construtor de Cópia
    Quando você quer um novo Robô exatamente igual ao seu, você usa uma máquina de cópia. A máquina cria uma cópia do Robô com todas as mesmas peças e configurações.

- Operador de Atribuição
    Regra 2: Operador de Atribuição
    Se você já tem um Robô e quer substituí-lo por outro, você pega todas as peças e configurações do novo Robô e coloca no antigo. Agora o antigo Robô é igual ao novo.

- Destrutor
    Regra 3: Destrutor
    Quando você termina de brincar com o Robô, você precisa guardá-lo direitinho na caixa. Isso significa que você desliga todas as partes e guarda cada uma no lugar certo para não estragar.

### Desenhando:

![Forma Canônica Ortodoxa.png](https://github.com/alessandracruz/Imagens/blob/8ff7ef14da3f7f77a16085742d8d092982f98682/Forma%20Can%C3%B4nica%20Ortodoxa.png)

#### 2. Ponto Fixo

Imagine que você tem um cofre especial que ajuda a contar moedas de maneira precisa. Esse cofre tem duas partes:

- Uma parte para contar a quantidade inteira de moedas.
- Outra parte para contar as partes fracionárias das moedas (centavos).

Divisões do Cofre:

- Parte Inteira: Conta a quantidade de moedas inteiras.
    - Exemplo: 5 moedas inteiras.

- Parte Fracionária: Conta os centavos ou frações das moedas.
    - Exemplo: 75 centavos.

Juntas, essas partes ajudam a representar números com mais precisão, como 5.75.

### Exemplo de Código:

```cpp
#include <iostream>

class Cofrinho {
private:
    int parteInteira;
    int parteFracionaria;

public:
    Cofrinho() : parteInteira(0), parteFracionaria(0) { }
    Cofrinho(int inteiro, int fracionario) : parteInteira(inteiro), parteFracionaria(fracionario) { }

    // Métodos para obter os valores
    int getParteInteira() const { return parteInteira; }
    int getParteFracionaria() const { return parteFracionaria; }

    // Método para exibir o valor total
    void mostrarValor() const {
        std::cout << parteInteira << "." << parteFracionaria << std::endl;
    }
};

int main() {
    Cofrinho meuCofrinho(5, 75);
    meuCofrinho.mostrarValor(); // Deve mostrar 5.75
    return 0;
}
```

### Desenhando:

![Ponto Fixo](https://github.com/alessandracruz/Imagens/blob/8ff7ef14da3f7f77a16085742d8d092982f98682/Ponto%20Fixo.png)

### Ainda sobre Ponto Fixo e Operações Bit a Bit:

Em um número de ponto fixo, representamos os números inteiros e fracionários usando uma quantidade fixa de bits para cada parte. Neste exemplo, vamos usar um total de 16 bits: 8 bits para a parte inteira e 8 bits para a parte fracionária.

- Representação de 5.75 em Ponto Fixo
  Parte Inteira: 5 em binário é 00000101.
  Parte Fracionária: 0.75 em binário é 0.11. Para representar isso com 8 bits, movemos o ponto para a direita e obtemos 11000000.

- Combinação:

  Parte Inteira (8 bits): 00000101
  Parte Fracionária (8 bits): 11000000
  Portanto, 5.75 em ponto fixo é 0000010111000000.

- Implementação em C++
  Para implementar isso, usamos operações bit a bit para manipular os bits diretamente.

- Classe Ponto Fixo:

```cpp
#include <iostream>

class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

public:
    // Construtor padrão
    Fixed() : fixedPointValue(0) { }

    // Construtor para int e float
    Fixed(int intValue) : fixedPointValue(intValue << fractionalBits) { }
    Fixed(float floatValue) : fixedPointValue(static_cast<int>(floatValue * (1 << fractionalBits))) { }

    // Método para converter para float
    float toFloat() const {
        return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
    }

    // Método para converter para int
    int toInt() const {
        return fixedPointValue >> fractionalBits;
    }

    // Sobrecarga do operador de inserção para impressão
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
        os << fixed.toFloat();
        return os;
    }
};

int main() {
    Fixed a(5.75f); // Criar número de ponto fixo representando 5.75
    std::cout << "Valor em ponto fixo: " << a << std::endl;
    std::cout << "Parte inteira: " << a.toInt() << std::endl;
    std::cout << "Valor original (float): " << a.toFloat() << std::endl;
    return 0;
}
```

### Explicação das Operações Bit a Bit

1. Construção a partir de int: Fixed(int intValue) : fixedPointValue(intValue << fractionalBits) { }

  - Desloca os bits do valor inteiro para a esquerda, multiplicando-o por 2^8 (256). Isso coloca os bits inteiros na parte correta do número de ponto fixo.

2. Construção a partir de float: Fixed(float floatValue) : fixedPointValue(static_cast<int>(floatValue * (1 << fractionalBits))) { }

  - Multiplica o valor float por 2^8 (256) e converte para int, posicionando os bits fracionários corretamente.

3. Conversão para float: float toFloat() const { return static_cast<float>(fixedPointValue) / (1 << fractionalBits); }

  - Divide o valor de ponto fixo por 2^8 (256) para obter o valor float original.

4. Conversão para int: int toInt() const { return fixedPointValue >> fractionalBits; }

  - Desloca os bits do valor de ponto fixo para a direita, dividindo-o por 2^8 (256) para obter o valor inteiro original.

### Operações Bit a Bit

- Representação de 5.75 em Binário:
  - Parte Inteira (5): 00000101
  - Parte Fracionária (0.75): 11000000

- Combinação:
  - 5.75 em ponto fixo (16 bits): 0000010111000000

- Deslocamento de Bits
  - 5 << 8 = 00000101 se torna 0000010100000000
  - 0.75 * 256 = 192 em binário é 11000000
  
- Portanto, 5.75 representado em ponto fixo é 0000010111000000.
