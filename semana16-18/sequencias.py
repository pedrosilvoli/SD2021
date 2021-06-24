
def letra_a(iteracao):
    
    resposta = []
    i =0 #contador para o loop
    atual = 1 #valor atual da seq, setado inicialmente como 1, primeiro elemento da seq

    while i<iteracao:
        resposta.append(atual) #adiciona os próximos valores da sequencia na resposta
        
        atual+=2 #a sequencia proposta cresce de 2 em 2 (1, 3, 5, 7, 9...)
        i+=1
    return resposta


def letra_b(iteracao):

    resposta = []
    i= 1 #comecei o contador em 1 para ajudar na lógica da sequencia
    atual = 1

    while i<=iteracao:
        resposta.append(atual)

        atual = atual + i #essa sequencia segue Sn = Sn-1 + n, crescendo 1, 2, 3...
        i+=1
    return resposta

def letra_c(iteracao):
    
    resposta = []

    i= 1
    

    while i<=iteracao:
        atual = i*i #a sequencia é Sn = n^2 (literalmente forma um quadrado de lado n)
        resposta.append(atual)
        i+=1
    return resposta

if __name__ == '__main__':
    iteracao = 20
    print(letra_a(iteracao))
    print(letra_b(iteracao))
    print(letra_c(iteracao))
