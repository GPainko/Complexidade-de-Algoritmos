```
def multiplica_matrizes(A, B):
    # Comparação 
    if len(A) != len(B):   # len(A) e Len(B) atribuição
        # return atribuição
        return "As matrizes devem ter o mesmo tamanho!"
    
    # Atribuição
    n = len(A)  # n atribuição
    
    # Atribuição
    resultado = [[0 for i in range(n)] for i in range(n)]  # N e i atribuição
    
    for i in range(n):   # n e i atribuição 
        for j in range(n):  # n e j atribuição 
            for k in range(n):  # k e n atribuição 
                # resultado Atribuição 
                resultado[i][j] += A[i][k] * B[k][j]  
    
    # return Atribuição
    return resultado

```
###  Quando Matrizes tamanho diferente: 4 instruções
### Quando Matrizes tamnho diferente : 4 +(5*n) + (7*n) +1