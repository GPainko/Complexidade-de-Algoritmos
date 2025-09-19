def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Exemplo de uso: imprimir todos os resultados de 0 até n
n = 7
for i in range(n + 1):
    print(f"fibonacci({i}) = {fibonacci(i)}")
