# Cpp
 Observe que, ao incluir arquivos de cabeçalho, usamos a sintaxe " " (aspas) ou < > (colchetes angulares). Usar <> informa ao pré-processador para pesquisar o local usual para cabeçalhos de sistema a fim de encontrar o cabeçalho necessário, enquanto usar "" informa ao pré-processador para pesquisar primeiro o diretório onde o arquivo atual está localizado antes de pesquisar o caminho usual para cabeçalhos de sistema.

## Strings
Dentro do tipo de dado texto, podemos dividi-lo em dois tipos diferentes: caracteres (char) e strings (string). Em C++, todos eles precisam ser representados entre aspas duplas (" ").

Claro! Aqui está o conteúdo **traduzido para português** e **formatado em Markdown**:


## Listas
Em **C++**, listas são sequências ordenadas de variáveis do mesmo tipo. Para inicializá-las, é necessário especificar o tipo das variáveis que estarão dentro dela. Por exemplo, para uma lista de valores inteiros:

```cpp
list<int> numbers_list({1, 10, 100, 1000});
```

E para uma lista de valores do tipo `string`:

```cpp
list<string> vocals_list({"a", "e", "i", "o", "u"});
```

⚠️ A desvantagem das listas em C++ é que elas **não são tão fáceis de imprimir** quanto em outras linguagens.
Neste caso, é necessário fazer um **laço (loop)** sobre todos os itens da lista para imprimi-los um por um.



### Manipulação de Listas em C++

As **listas são muito úteis**, pois ocupam um espaço de memória que pode ser modificado dinamicamente.
Elas possuem **funções embutidas** para, por exemplo, adicionar um novo item **no início** ou **no final** da lista:

```cpp
numbers_list.push_front(0);     // insere no início
numbers_list.push_back(3000);   // insere no final
```

A lista `numbers_list` resultante será:

```
0, 1, 10, 100, 1000, 3000
```

#### Concatenar Listas

Também é possível **concatenar uma lista no final de outra**, aumentando o tamanho da primeira **sem excluir** a segunda.
Para isso, usamos a função embutida `insert()`:

```cpp
list<int> new_list({5, 50, 500});

numbers_list.insert(numbers_list.end(), new_list.begin(), new_list.end());
```

A lista `numbers_list` será modificada para:

```
0, 1, 10, 100, 1000, 3000, 5, 50, 500
```
