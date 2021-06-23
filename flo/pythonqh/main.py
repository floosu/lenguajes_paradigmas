from qh import qh
def main():
    x=2
    y=10
    texto="saludos"
    valor= x + y

    qh.sumatoriaserie(x,y)
    p =qh.esPalindromo(texto)
    qh.imprimir_datos(texto, valor)

    if p==1:
        print("es palindromo")
    else: 
        print("no es palindromo")

if __name__ == '__main__':
    main()
    