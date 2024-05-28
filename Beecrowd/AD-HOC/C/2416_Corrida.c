/*
Leonardo é um corredor profissional que participa de diversos campeonatos de atletismo pelo mundo. 
O tamanho das pistas ao redor do mundo não é padronizado.
Por isso, Leonardo, que treina em um clube que possui uma pista circular, resolveu fixar seu treinamento em C metros, ao invés de um número fixo de voltas na pista. 
Após cada treinamento, Leonardo deve tomar meio litro de água antes de fazer qualquer esforço, e por isso quer deixar sua garrafa de água exatamente no ponto da pista onde ele termina o seu treinamento.
Sabendo o comprimento da pista de corrida que Leonardo pretende treinar, ele resolveu pedir sua ajuda para calcular o local do ponto de término do treinamento. 
O ponto de término é o local da pista onde ele termina o percurso de C metros, considerando que ele parte do ponto de partida e se movimenta sempre na mesma direção. 
O ponto de término é dado pelo número de metros entre o ponto de partida e o local onde Leonardo termina seu treinamento, contados na direção do percurso. 
Leonardo quer deixar sua garrafa de água neste ponto.
Por exemplo, se a pista tem 12 metros e Leonardo fixou seu treinamento em 22 metros, o ponto de término é 10.
Sua tarefa é, dado o número C de metros que Leonardo pretende correr e o comprimento N em metros da pista circular, determinar o ponto de término de seu treinamento.
*/
#include <stdio.h>
 
int main() {
    int metros, pista;
    
    scanf("%d %d", &metros, &pista);
    
    int fim;
    
    if (metros >= pista) {
        fim = metros % pista;
    }
    else {
        fim = pista - metros;
    }
    
    printf("%d\n", fim); 
    
    return 0;
}