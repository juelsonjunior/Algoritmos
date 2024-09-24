algoritmo "semnome"
var
   equipes: vetor[1..3] de caractere
   sorteiro: vetor[1..4] de caractere
   i, j, tamanho:Inteiro
inicio
   tamanho <- 3
   Escreval("---------------------")
   Escreval("CAMPEONATO DE FUTEBOL")
   Escreval("---------------------")

   para i <- 1 ate tamanho faca
      Escreva("Digite a ",i," equipe: ")
      Leia(equipes[i])
   FimPara

   Limpatela
   Escreval("--------------------------------")
   Escreval("       TABELA DE PARTIDAS       ")
   Escreval("--------------------------------")

   para i <- 1 ate tamanho faca
      para j <- 1 ate tamanho faca
         Se(equipes[i] <> equipes[j])entao
            Escreval(equipes[i]:12, " [ ] X [ ] " ,equipes[j]:12)
         FimSe
      FimPara
   FimPara
fimalgoritmo