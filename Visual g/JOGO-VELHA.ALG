algoritmo "semnome"
var
   jogo: vetor[1..3, 1..3] de caractere
   jogada:caractere
   l, c, cont, i:Inteiro
   op, linha, vez, par:Inteiro
   interomp:Inteiro
   vencedor:logico
   //----------PRENCHENDO A MATRIZ----------//
procedimento prencherMatriz()
inicio
   para l <- 1 ate 3 faca
      para c <- 1 ate 3 faca
         jogo[l, c] <- numpCarac(cont)
         cont <- cont + 1
      fimpara
   fimpara
fimprocedimento

//----------EXIBINDO A MATRIZ PREENCHIDA----------//
procedimento velha()
inicio
   escreval("+----+----+----+")
   para l <- 1 ate 3 faca
      escreva("| ")
      para c <- 1 ate 3 faca
         escreva(jogo[l, c]:2, " | ")
      fimpara
      escreval("")
      escreval("+----+----+----+")
   fimpara
fimprocedimento

//----------MECANICAS DE JOGO----------//
procedimento jogar()
inicio
   jogada <- "X"
   vencedor <- falso
   vez <- 0
   par <- 1
   repita
      escreva("Jogue [",jogada,"] em uma das posicões: ")
      leia(op)

      se(op > 0) e (op < 10)entao

         se(op > 0) e (op < 4)entao
            linha <- 1

            se(jogo[linha, op] = "X") ou (jogo[linha, op] = "O")entao
               escreval("Essa posição já foi ocupada")
               escreva("Pressione Enter para escolher outra")
               leia(interomp)
            senao
               jogo[linha, op] <- jogada
               codRepetido()
            fimse
         senao
            se (op > 3) e (op < 7)entao
               linha <- 2

               se(jogo[linha, op - 3] = "X") ou (jogo[linha, op - 3] = "O")entao
                  Escreval("Essa posição já foi ocupada")
                  escreva("Pressione Enter para escolher outra")
                  leia(interomp)
               senao
                  jogo[linha, op -3 ] <- jogada
                  codRepetido()
               fimse

            senao
               linha <- 3
               se(jogo[linha, op - 6] = "X") ou (jogo[linha, op - 6] = "O")entao
                  Escreval("Essa posição já foi ocupada")
                  escreva("Pressione Enter para escolher outra")
                  leia(interomp)
               senao
                  jogo[linha, op - 6] <- jogada
                  codRepetido()
               fimse

            fimse
         fimse

      senao
         escreval("opção inválida")
         escreva("Pressione Enter para escolher outra")
         leia(interomp)
      fimse
      Limpatela
      velha()
   ate (vencedor = verdadeiro) ou (vez = 9)

   se(vencedor = verdadeiro)entao
      escreval("O jogador ",jogada," venceu jogo da velha")
   senao
      escreval("Deu velha")
   fimse
   
fimprocedimento

//----------MECANICAS DE TROCA DE JOGADOR----------//
procedimento codRepetido()
inicio
   vencedor <- verificarVencedor()
   vez <- vez + 1

   se(vencedor = falso)entao
      se(par % 2 <> 0)entao
         jogada <- "O"
      senao
         jogada <- "X"
      fimse
      par <- par + 1
   fimse
fimprocedimento

//----------MECANICAS PARA VERIFICAR O VENCEDOR DO JOGO----------//
funcao verificarVencedor():logico
var
   venceu:logico
inicio
   venceu <- falso

   //---VITORIA NA HORIZONTAL---//
   para i de 1 ate 3 faca
      se(jogo[i, 1] = jogo[i, 2]) e (jogo[i, 2] = jogo[i, 3])entao
         venceu <- verdadeiro
      fimse
   Fimpara

   //---VITORIA NA VERTICAL---//
   para i de 1 ate 3 faca
      se(jogo[1, i] = jogo[2, i]) e (jogo[2, i] = jogo[3, i])entao
         venceu <- verdadeiro
      fimse
   Fimpara

   //---VITORIA NA DIAGONAL 1---//
   se(jogo[1, 1] = jogo[2, 2]) e (jogo[2, 2] = jogo[3, 3])entao
      venceu <- verdadeiro
   fimse

   //---VITORIA NA DIAGONAL 1---//
   se(jogo[3, 1] = jogo[2, 2]) e (jogo[2, 2] = jogo[3, 3])entao
      venceu <- verdadeiro
   fimse

   retorne venceu

fimfuncao
inicio
   cont <- 1
   prencherMatriz()
   velha()
   jogar()
fimalgoritmo