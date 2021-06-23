class qh(object):
    def sumatoriaserie(x,y):
        suma=0
        for i in range (x,y+1):
            for j in range (0,i):
                    suma=suma+i
        print(suma)

    def esPalindromo(texto):
        igual, aux = 0, 0
        for ind in reversed(range(0, len(texto))):
            if texto[ind].lower() == texto[aux].lower():
                igual += 1
            aux += 1
        if len(texto) == igual:
            return 1

    def imprimir_datos(texto, valor):
            print('{} {}\n'.format(texto, valor))



