algoritmo "semnome"
var
   gols1, gols2:Inteiro
   equipe1, equipe2, resp:caractere

Procedimento equipesPJogar(eq1, eq2:caractere)
inicio
   Escreval("|=========================|")
   Escreval("|=== BEM VINDO AO JOGO ===|")
   Escreval("|==DAS SEGUINTES EQUIPAS==|")
   Escreval("|=",eq1, " VS " ,eq2," =|")
   Escreval("|=========================|")
FimProcedimento

Procedimento exibirStatus(g1, g2:Inteiro)
var
   diferenca: Inteiro
inicio
   Se(g1 > g2)entao
      diferenca <- g1 - g2
   senao
      diferenca <- g2 - g1
   FimSe

   Escreval("|=========================|")
   Escreval("| DIFERENÇA: ",diferenca,"          |")
   Escolha(diferenca)
   caso 0
      Escreval("| EMPATE                  |")
   caso 1, 2, 3
      Escreval("| PARTIDA NORMAL          |")
   caso 4, 5, 6, 7
      Escreval("| GOLEADA                 |")
   OutroCaso
      Escreval("| QUE TRÁGEDIA            |")
   FimEscolha
   Escreval("|=========================|")

FimProcedimento
//----------Programa Principal----------------//

inicio
   Repita
      Escreva("Nome da equipa 1: ")
      Leia(equipe1)

      Escreva("Nome da equipa 2: ")
      Leia(equipe2)
      Limpatela

      equipesPJogar(equipe1, equipe2)
      Escreval("")
      Escreval("=== QUANTIDADE DE GOLOS ===")
      Escreva("Do ",equipe1,": ")
      Leia(gols1)

      Escreva("Do ",equipe2,": ")
      Leia(gols2)
      Limpatela

      Escreval("Resultado final do jogo")
      Escreval(equipe1," -",gols1," VS", gols2, " - ", equipe2)
      exibirStatus(gols1, gols2)

      Escreval("")
      Escreva("Quer Repetir? [S/N]")
      Leia(resp)
      Limpatela
   Ate(resp = "N")
fimalgoritmo