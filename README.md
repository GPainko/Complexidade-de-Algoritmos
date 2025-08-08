# 📊 Complexidade de Algoritmos

## 🔍 Métricas de Avaliação

A complexidade de algoritmos pode ser analisada principalmente com base em duas métricas:

---

### ⏱️ Tempo (Tempo de Processamento)

Refere-se ao número de operações ou instruções que um algoritmo executa em relação ao tamanho da entrada.

#### Exemplo em C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello World"); // 1 execução
    return 0;
}
```

➡️ Neste exemplo, a instrução `printf` é executada apenas **uma vez**, independentemente do tamanho da entrada.
**Complexidade de tempo**: **O(1)** (tempo constante)

---

### 💾 Espaço (Uso de Memória)

Refere-se à quantidade de memória utilizada durante a execução do algoritmo (variáveis, buffers, pilha, heap, etc).

#### Exemplo em C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello World"); // ocupa cerca de 23 KB na memória
    return 0;
}
```

➡️ Mesmo sendo um programa simples, o compilador reserva uma certa quantidade de memória (por volta de 23 KB, dependendo do sistema e compilador utilizados).

---

### ⚠️ Observação

> No Windows, **1 KB** (Kilobyte) é normalmente considerado como **1000 bytes**, e **não 1024 bytes**.
> Esse é o padrão na maioria dos sistemas operacionais e está de acordo com a definição binária de memória computacional.