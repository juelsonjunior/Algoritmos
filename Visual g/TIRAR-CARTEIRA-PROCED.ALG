algoritmo "semnome"
var
   ano_atual, ano_nasc:Inteiro

Procedimento calcIdade(a, b:Inteiro)
var
   idade:Inteiro
inicio
   idade <- a - b
   exibirStatus(idade)
FimProcedimento

Procedimento exibirStatus(i:Inteiro)
inicio
   Escreval("----------STATUS--------")
   Escreval(" IDADE: ",i," ANOS")
   
   Se(i >= 18)entao
      Escreval(" APTO A TIRAR A CARTEIRA")
   senao
      Escreval(" INAPTO A TIRAR A CARTEIRA")
   FimSe
   
   Escreval("------------------------")
FimProcedimento
inicio

   Escreva("Digite o Ano atual (yyyy): ")
   Leia(ano_atual)
   Escreva("Digite o Ano de nascimento (yyyy): ")
   Leia(ano_nasc)

   Escreval("")
   calcIdade(ano_atual, ano_nasc)
fimalgoritmo