algoritmo "AnalisadorDeNumeros"
var
   cont, valor, somaV, vNulos, somaVPares:Inteiro
   mediaV, divPor5:Real

Procedimento verifNum( var valor, vNulos, somaVPares:Inteiro; var divPor5:Real)
inicio

   Se(valor % 5 = 0) entao
      divPor5 <- divPor5 + 1
   FimSe

   Se(valor <= 0) entao
      vNulos <- vNulos + 1
   FimSe

   Se (valor % 2 = 0) entao
      somaVPares <- somaVPares + valor
   FimSe
FimProcedimento
inicio

   somaV <- 0
   vNulos <- 0
   divPor5 <- 0
   somaVPares <- 0

   Para cont<-1 ate 5 faca
      Escreva("Digite o ",cont,". valor: ")
      Leia(valor)

      somaV <- somaV + valor
      mediaV <- somaV / cont

      verifNum(valor, vNulos, somaVPares, divPor5)
   FimPara

   Escreval("A soma entre os valores eh: ", somaV)
   Escreval("A media entrre os valores eh: ", mediaV)
   Escreval("Valores divisiveis por cinco(5): ", divPor5)
   Escreval("Valores Nulos: ", vNulos)
   Escreval("A soma dos valores pares eh: ", somaVPares)
fimalgoritmo