Algoritmo "semnome"
Var
   qtAluno:Inteiro

Procedimento Aluno(qtAluno:Inteiro)
var
   nota, maiorNota:Real
   nome, melhorAluno:caractere
   cont:Inteiro
inicio
   cont <- 1
   enquanto (cont <= qtAluno) faca
      Escreval("ALUNO: ", cont)
      Escreva("Nome do aluno: ")
      Leia(nome)
      Escreva("Nota do ", nome,": ")
      Leia(nota)

      Se(nota > maiorNota)entao
         maiorNota <- nota
         melhorAluno <- nome
      FimSe
      cont <- cont + 1
   FimEnquanto

   Escreval("O melhor aluno eh o ",melhorAluno," com ", maiorNota, "Valores")
FimProcedimento
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   Escreval("==================")
   Escreval(" ESCOLA CARNEIROS ")
   Escreval("==================")

   Escreva("Qunatos alunos a turma tem? ")
   Leia(qtAluno)

   Aluno(qtAluno)
Fimalgoritmo