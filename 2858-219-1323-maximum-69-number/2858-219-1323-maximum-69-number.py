class Solution(object):
    def maximum69Number (self, num):

        string = str(num)
        lista = list(string)
        
        for i in range(len(lista)):
            if lista[i] == '6':
                lista[i] = '9'
                break
        numero = 0
        for digito in lista:
            numero = numero * 10 + int(digito)
        
        return numero
        