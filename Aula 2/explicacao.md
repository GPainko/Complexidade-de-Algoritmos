## 🧠 Instruções Computacionais

### ✅ Condicional

```c
x == 5;
```

* A instrução `x == 5` é enviada ao controle lógico da CPU.
* A CPU acessa a memória para buscar o valor atual da variável `x`.
* O valor obtido é comparado com `5`.
* O resultado da comparação será `true` (verdadeiro) ou `false` (falso), e será usado para decidir o fluxo do programa (ex: em uma instrução `if`).

---

### 🧮 Atribuição

```c
x = 5;
```

#### O que acontece por trás?

1. A instrução `x = 5;` é interpretada e enviada ao controle de memória.
2. A memória reserva um espaço para armazenar a variável `x`.
3. O valor `5` é colocado nesse espaço reservado.
4. Toda vez que você usar `x`, a CPU acessará esse valor diretamente da memória.

---

### 🔁 Loop

* Executa repetidamente um bloco de instruções.
* Controlado por condições de entrada, saída ou contadores.

---

### ⚡ Interrupção (IRQ)

* IRQ (Interrupt Request) é um sinal enviado à CPU para interromper a execução atual e atender a uma tarefa urgente.
* Muito usado em sistemas de tempo real ou controle de hardware.
* Execução rápida e com prioridade alta.

---

### ➕ Operações Matemáticas

* Operações como adição, subtração, multiplicação e divisão são diretamente processadas pela ULA (Unidade Lógica e Aritmética).
* Essas instruções têm execução rápida e são otimizadas em nível de hardware.

---

## 🧩 Observações sobre Arquiteturas

```
RISC (Reduced Instruction Set Computer)
+ Execução mais rápida
- Menos instruções (instruções mais simples)

CISC (Complex Instruction Set Computer)
+ Mais instruções (instruções mais complexas)
- Execução geralmente mais lenta
```
## Identificando as Intruções para medir complexidade.