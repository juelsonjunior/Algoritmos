algoritmo "semnome"
var
   filas: vetor[1..5] de Caractere
   cadeira, i:Inteiro
   resp:Caractere
   totCad:Inteiro
inicio
   repita
   Limpatela
      para i <- 1 ate 5 faca
         se(filas[i] = "")entao
            Escreva("[ B ",i," ]")
         senao
            Escreva("[ --- ]")
         FimSe
      FimPara
      Escreval("")
      Escreval("---------------------------------------")

      Escreva("Reservar cadeira: B")
      Leia(cadeira)

      se(filas[cadeira] = "")entao
         filas[cadeira] <- "X"
         totCad <- totCad + 1
         Escreval("Cadeira B",cadeira," RESERVADA")
      senao
         Escreval("Essa cadeira já foi ocupada")
      FimSe

      Escreva("Quer continuar? [S/N]")
      leia(resp)
      limpatela
   ate(resp = "N")
   Escreval("Você ocupou ",totCad," cadeiras")
fimalgoritmo