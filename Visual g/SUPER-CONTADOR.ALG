algoritmo "semnome"
var
   op, cont:Inteiro
   resp:caractere
Procedimento menu()
inicio
   Escreval("==================")
   Escreval("|      MENU      |")
   Escreval("==================")
   Escreval("| [1] De 1 até 10|")
   Escreval("| [2] De 10 a 1  |")
   Escreval("| [3] sair       |")
   Escreval("==================")
FimProcedimento

Procedimento escolherCont(op:Inteiro)
inicio

   Escolha (op)
   caso 1
      Limpatela
      cont <- 1
      Escreval("CONTAGEM CRESCENTE")

      repita
         Escreva(cont,"..")
         cont <- cont + 1
      ate(cont > 10)

   caso 2
      Limpatela
      cont <- 10
      Escreval("CONTAGEM DECRESCENTE")

      repita
         Escreva(cont, "..")
         cont <- cont - 1
      ate(cont < 1)

   caso 3
      Escreval("Saindo....")
   outroCaso
      Escreval("Opção inexistente")
   FimEscolha
FimProcedimento
//------------MENU PRINCIPAL------------//
inicio
   repita
      menu()

      Escreva("Escolha sua opção: ")
      Leia(op)

      escolherCont(op)
      Escreval("")
      Escreval("")
      Escreva("Quer continuar a contar? [S/N]: ")
      Leia(resp)
      Limpatela
   ate(resp = "N")
fimalgoritmo