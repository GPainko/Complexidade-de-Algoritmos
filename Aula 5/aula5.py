def fibonacci(n):
    if n <= 0: # 1
        return 0 # 2
    elif n == 1: # 2
        return 1 # 3
    else:# 3
#                          5                  4                                            
        return fibonacci(n - 1) + fibonacci(n - 2) # 6

# Exemplo de uso:
print(fibonacci(2))


# 0 = 2
# 1 = 3
# N = 3N + 5