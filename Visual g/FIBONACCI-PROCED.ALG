algoritmo "semnome"
var
   cont, sequencia1, sequencia2:inteiro

Procedimento proximoFibo(var a, b:Inteiro)
var
   sequencia3:Inteiro
inicio
   sequencia3 <- a +  b
   Escreva(sequencia3)
   a <- b
   b <- sequencia3
FimProcedimento
inicio
   sequencia1 <- 0
   Escreva(sequencia1)
   
   sequencia2 <- 1
   Escreva(sequencia2)
   Para cont <- 3 ate 15 faca
      proximoFibo(sequencia1, sequencia2)
   FimPara
fimalgoritmo