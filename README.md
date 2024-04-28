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

## Imaginei como organizar livros em uma prateleira.

## Stack (Pilha):

Pensei na pilha como uma pequena prateleira ao lado da minha mesa de trabalho. Coloco um livro lá quando começo a trabalhar e retiro quando termina.
Cada livro representa uma variável que eu declarei dentro de uma função.
Quando a função termina, o livro é automaticamente retirado da prateleira (isto é, a variável é destruída).

## Heap:

O heap é como uma biblioteca enorme, onde eu tenho que ir e registrar um livro (alocar memória) e depois devolvê-lo manualmente (desalocar memória).
É mais flexível, porque eu posso pegar e devolver livros quando quiser, mas é responsabilidade minha lembrar de devolver.

## ex01
É preciso criar uma horda de zumbis

## Implementar a Função zombieHorde:
- Esta função deve alocar N objetos Zombie em uma única alocação.
- Cada zumbi deve ser inicializado com o nome passado como parâmetro.
- A função retorna um ponteiro para o primeiro zumbi alocado.
  
### Testes:
- Implementar testes que provem que a função zombieHorde funciona como esperado. Isso envolve usar a função e, em seguida, iterar pela horda alocada para chamar o método announce de cada zumbi e liberar a memória alocada ao final dos testes para evitar vazamento de memória.

### Imagine uma caixa de brinquedos
Para tornar mais palatável a alocação e desalocação de memória em C++, vou imaginar que estou gerenciando uma pequena caixa de brinquedos.

### Criar a caixa: 
- Criar uma caixa que pode conter um certo número de brinquedos. Em termos de programação, isso seria como alocar um array na heap para guardar esses brinquedos (objetos).
### Preencher a caixa:
- Colocar brinquedos (inicializar objetos) na caixa, um por um, até que a caixa esteja cheia.
### Brincar com os brinquedos:
- Usar os brinquedos, o que em C++ seria como acessar e utilizar os objetos no array.
### Arrumar a caixa:
- Depois de brincar, vou limpar, o que significa desalocar a memória que reservada para a caixa de brinquedos, para que eu possa ter espaço para brincar com outras coisas.
```
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
