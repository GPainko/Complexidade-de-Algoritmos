
## Cálculo do número de instruções vetores iguais

Código exemplo:
```
def Soma(vetA, vetB):
        #  1      2      3  
    if len(vetA) != len(vetB):
             # 4
        return None
    # 4
    res = []
    #   7             6    5
    for i in range (len(vetA)):
                       # 8
      res.append(vetA[i] + vetB[i])
        # 9
    return res
```
- calculo do número de instruções vetores iguais.
    - 4 + 2 (N*2) + 1 => 2N+ 7

- calculo do número de instruções vetores diferentes.
    - 4 instruções

---
