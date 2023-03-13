def fibonacci(num):
    if num <= 0:
        return "O número informado não pertence à sequência de Fibonacci."
    elif num == 1 or num == 2:
        return 1
    else:
        a = 1
        b = 1
        for i in range(2, num):
            c = a + b
            a = b
            b = c
            if c == num:
                return f"O número {num} pertence à sequência de Fibonacci."
        return "O número informado não pertence à sequência de Fibonacci."

# Informe o número que deseja verificar se pertence à sequência de Fibonacci.
num = 5
resultado = fibonacci(num)
print(resultado)
