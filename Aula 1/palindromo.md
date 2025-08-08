# 🔁 Verificador de Palíndromos em Python

Este documento descreve o funcionamento e a análise do seguinte código Python, que verifica se uma palavra ou frase é um **palíndromo** (ou seja, se pode ser lida da mesma forma da esquerda para a direita e vice-versa).

---

## 📌 Código

```python
def eh_palindromo(palavra):
    # Pré-processamento: remove espaços e converte para minúsculas
    palavra = palavra.replace(" ", "").lower()

    tam = len(palavra)     # executado 1 vez
    meio = tam // 2        # executado 1 vez

    for i in range(meio):  # executado N/2 vezes
        if palavra[i] != palavra[tam - 1 - i]:  # comparação simétrica
            return 'Não é palíndromo'
    
    return 'É palíndromo'

# Teste
texto = input("Digite uma palavra ou frase: ")
print(eh_palindromo(texto))
````

## 🔍 Explicação do Código

* **`replace(" ", "")`**
  Remove todos os espaços da string para que frases como `"amor a Roma"` sejam consideradas corretamente.

* **`lower()`**
  Converte todos os caracteres para minúsculas, tornando a verificação **case-insensitive** (ignora maiúsculas/minúsculas).

* **Laço `for`**
  Compara o caractere da posição `i` com o da posição simétrica `tam - 1 - i`. Se em algum ponto os caracteres forem diferentes, a função retorna imediatamente que **não é palíndromo**.

* **Retorno final**
  Se passar por todo o laço sem encontrar diferenças, retorna que **é palíndromo**.

---

## ⚙️ Exemplo de Entrada/Saída

### Entrada:

```
Digite uma palavra ou frase: Socorram me subi no onibus em Marrocos
```

### Saída:

```
É palíndromo
```

---

## 🧠 Análise de Complexidade

### Tempo

| Etapa                      | Complexidade  |
| -------------------------- | ------------- |
| `replace` e `lower`        | O(n)          |
| Laço `for`                 | O(n/2) → O(n) |
| Comparações dentro do `if` | O(n)          |

> **Total:** **O(n)** onde *n* é o número de caracteres da palavra ou frase.

### Espaço

* Armazena uma nova string processada → O(n)
* Variáveis auxiliares simples → O(1)

> **Total:** **O(n)** de complexidade espacial.

---

## ✅ Observações

* O código **não trata pontuações** como vírgulas, acentos ou símbolos.
  Exemplo: `"A mãe te ama!"` será considerada **não palíndromo** por causa dos caracteres especiais.

* Se necessário, pode-se usar expressões regulares com `re.sub(r'\W+', '', palavra)` para remover todos os caracteres não alfanuméricos.