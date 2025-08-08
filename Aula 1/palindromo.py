def eh_palindromo(palavra):
    # Pré-processamento: remove espaços e converte para minúsculas
    palavra = palavra.replace(" ", "").lower()

    tam = len(palavra)     # executado 1 vez
    meio = tam // 2        # executado 1 vez

    for i in range(meio):  # executado N/2 vezes
        if palavra[i] != palavra[tam - 1 - i]:  # comparação
            return 'Não é palíndromo'
    
    return 'É palíndromo'

# Teste
texto = input("Digite uma palavra ou frase: ")
print(eh_palindromo(texto))
