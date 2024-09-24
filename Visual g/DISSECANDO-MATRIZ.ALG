algoritmo "semnome"
var
   mDI: vetor[1..4, 1..4] de Inteiro
   l, c:Inteiro
   op:Inteiro
   resp:Caractere
   //----------FUNCAO DA MATRIZ PRINCIPAL----------//
Procedimento matrizPrincipal()
inicio
   para l <- 1 ate 4 faca
      para c <- 1 ate 4 faca
         Escreva(mDI[l, c]:2)
      FimPara
      Escreval("")
   FimPara
FimProcedimento

//----------FUNCAO DA DIAGONAL PRINCIPAL----------//
Procedimento diagPrincipal()
inicio
   para l <- 1 ate 4 faca
      para c <- 1 ate l faca
         Escreva("   ")
      FimPara
      Escreva(mDI[l, l]:2)
      Escreval()
   FimPara
FimProcedimento

//----------FUNCAO DO TRIAGULO SUPERIOR----------//
Procedimento TriangSuperior()
var t: Inteiro
inicio
   Para l <- 1 ate 3 faca
      Escreva("   ")
      Para c <- l+1 ate 4 faca
         Escreva(mDI[l,c]:4)
      FimPara
      EscrevaL()
      Para t <- 1 ate l faca
         Escreva("    ")
      FimPara
   FimPara
FimProcedimento

//----------FUNCAO DO TRIAGULO INFERIROR----------//
Procedimento TriangInferior()
var
inicio
   Para l <- 1 ate 3 faca
      Para c <- 1 ate l faca
         Escreva(mDI[l, c])
      FimPara
      Escreval()
   FimPara
FimProcedimento

//----------PROGRAMA PRINCIPAL----------//
inicio
      Para l <- 1 ate 3 faca
         para c <- 1 ate 4 faca
            Escreva("Digite o valor na posicão [",l,",",c,"]: ")
            Leia(mDI[l, c])
         FimPara
      FimPara
      Limpatela

   repita
      Escreval("MENU DE OPÇÕES")
      Escreval("=========================")
      Escreval(" [1] - Mostrar a Matriz  ")
      Escreval(" [2] - Diagonal Principal")
      Escreval(" [3] - Triangulo Superior")
      Escreval(" [4] - Triangulo Inferior")
      Escreval(" [5] - Sair")
      Escreva("======OPÇAO: ")
      Leia(op)

      Escolha(op)
      caso 1
         Limpatela
         Escreval("MATRIZ PRINCIPAL")
         matrizPrincipal()

      caso 2
         Limpatela
         Escreval("DIAGONAL PRINCIPAL")
         diagPrincipal()

      caso 3
         Limpatela
         Escreval("TRIANGULO SUPERIOR")
         TriangSuperior()

      caso 4
         Limpatela
         Escreval("TRIANGULO INFERIOR")
         TriangInferior()

      caso 5
         Escreval("SAINDO......")
      FimEscolha

      Escreva("Quer ver outra matriz? [S/N]: ")
      Leia(resp)
      Limpatela
   ate (resp = "N")

fimalgoritmo