```
def bubble_sort(lista):
        # 1
    n = len(lista)
        # 2
    for i in range(n):
          # 4              # 3
        for j in range(0, n - i - 1):
                       # 6       # 5
            if lista[j] > lista[j + 1]:
                #10            #9             #8            # 7
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
    return lista # 11
```

n = len(lista) -> 1 = 1 

for i in ranger(n): -> 2 = 1

for j in ranger(0 ,n - i - 1 ) 3 e 4 = 2

if lista[j] > lista[j + 1] 5 e 6 = 2 

lista[j], lista[j + 1] = lista[j + 1], lista[j] 7, 8,9 e 10 = 4

return lista 11 = 1 

## pior caso

    1 + n + 2(n-2) + 2n +4n + 1 = 11 execuções

    1 + n + 2n -4 + 2n + 4n +1

    9n - 2 = execuções

## melhor caso

    1 + n + 2(n-2) + 2n + 1 = 11 execuções

    1 + n + 2n -4 + 2n 4n +1

    5n - 2 = execuções
