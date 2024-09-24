algoritmo "semnome"
var
   vet: vetor[1..5] de Inteiro
   i, j, tamanhoVetor, aux:Inteiro
inicio
   tamanhoVetor <- 5

   para i <- 1 ate tamanhoVetor faca
      Escreva("Digite o ",i," valor: ")
      Leia(vet[i])
   FimPara

   Escreval("")
   Escreval("")
   
   Escreval("VETOR DESORGANIZADO")
   Escreval("-------------------")
   para i <- 1 ate tamanhovetor faca
      Escreva("{",vet[i],"}")
   FimPara

   para i <- 1 ate 4 faca
      para j <- i + 1 ate tamanhoVetor faca
         Se(vet[i] > vet[j])entao
            aux <- vet[i]
            vet[i] <- vet[j]
            vet[j] <- aux
         FimSe
      FimPara
   FimPara

   Escreval("")
   Escreval("")

   Escreval("VETOR ORGANIZADO")
   eSCREVAL("-------------------")
   
   para i <- 1 ate tamanhoVetor faca
      Escreva("{",vet[i],"}")
   FimPara
fimalgoritmo