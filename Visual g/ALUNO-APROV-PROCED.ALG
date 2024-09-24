algoritmo "semnome"
var
   media, nota1, nota2:Real

Procedimento calcMedia(n1, n2:Real)
var
media:Real
inicio
   media <- (n1 + n2) / 2
   exibirStatus(media)
FimProcedimento

Procedimento exibirStatus(m:Real)
inicio
   Escreval("----------STATUS--------")
   Escreval(" MEDIA: ",m:1:1)
   
   Se(m >= 7)entao
      Escreval(" ALUNO APROVADO")
   senao
      Escreval(" ALUNO REPROVADO")
   FimSe
   
   Escreval("------------------------")
FimProcedimento
inicio

   Escreva("Primeira nota: ")
   Leia(nota1)
   Escreva("Segunda nota: ")
   Leia(nota2)

   Escreval("")
   calcMedia(nota1, nota2)
fimalgoritmo