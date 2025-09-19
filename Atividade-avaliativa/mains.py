def bubble_sort(lista):
    n = len(lista)
    for i in range(n):
        for j in range(0, n - i - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]  # troca os elementos
    return lista

# Teste
dados = [64, 34, 25, 12, 22, 11, 90]
print("Lista ordenada:", bubble_sort(dados))
