algoritmo "semnome"
var
   in, pas, fim, cont:Inteiro

Procedimento contagemInt(var i, p, f:Inteiro)
var
   cont:Inteiro
inicio
   se (i < f) entao
      Escreval("Contagem crescente")
      para cont <- i ate f passo p faca
         Escreva(cont, "..")
      FimPara
   senao
      se(i > f)entao
         Escreval("Contagem decrescente")
         para cont <-i  ate f passo -p faca
            Escreva(cont, "..")
         FimPara
      FimSe
   FimSe
FimProcedimento
inicio
   Escreval("======================")
   Escreval(" Contagem inteligente ")
   Escreval("======================")

   Escreva("Inicio: ")
   Leia(in)
   Escreva("Passo: ")
   Leia(pas)
   Escreva("Fim: ")
   Leia(fim)

   contagemInt(in, pas, fim)
fimalgoritmo