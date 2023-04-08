# DesafioBoaSenha
## Fatec Campinas
## Linguagem de Programação
# Desafio 1 - Normas para uma boa senha
 _Professor:_Alexandre Mello Ferreira 
  Entrega: __MS Teams__
  Grupos com até 3 alunos


## Descrição
Você com certeza deve possuir contas em diversos sites e serviços na internet. Um passo fundamental ao se fazer um cadastro nestes serviços é a escolha de uma senha. Muitos sites requerem que a senha esteja de acordo com diversos requisitos, para garantir que esta não poderá ser facilmente descoberta por um agente malicioso. O seu trabalho neste desafio é criar um programa para verificar se uma senha digitada por um usuário está de acordo com as seguintes normas:

* Deve conter pelo menos 8 caracteres;
* Deve conter pelo menos uma letra maiúscula;
* Deve conter pelo menos uma letra minúscula;
* Deve conter pelo menos um número;
* Deve conter pelo menos um dos seguintes símbolos: !, ?, #, @, $;
* Não pode ser um palíndromo, i.e., revertendo-se os caracteres não podemos obter a mesma senha;
* Não pode conter nenhuma palavra reservada de um dicionário;

__OBS:__ Todas as palavras do dicionário estão em minúsculas. No teste de que uma senha não pode conter uma palavra do dicionário, a palavra não deve ocorrer na senha independente das letras da senha estarem em maiúsculas ou minúsculas. Por exemplo, se a senha for 1#FaRoFA9 e no dicionário constar a palavra farofa, então esta senha será inválida pois contém a palavra do dicionário. Por outro lado, o teste para palíndromo deve diferenciar maiúsculas e minusculas. Por exemplo, enquanto 1234aa4321 é um palíndromo, 1234Aa4321 não deve ser considerada um.

## Objetivo
O objetivo deste desafio é, dada uma senha digitada pelo usuário, verificar se esta satisfaz as normas descritas acima.

## Entrada
A entrada é composta por um inteiro n, seguido por n palavras, que compõem o dicionário de palavras reservadas. Todas as palavras do dicionário estão em minúsculas. Por fim, temos a senha digitada pelo usuário. Você pode assumir que 0 ≤ n ≤ 50 e que cada palavra reservada não possui mais do que 20 caracteres. A senha digitada pelo usuário possui entre 1 e 50 caracteres. Você pode assumir que não há caracteres acentuados.

## Saída
A saída deve conter ok se a senha digitada satisfaz as normas para uma senha, ou um subconjunto das mensagens abaixo descrevendo todos os erros encontrados. No caso de mais de uma mensagem de erro, a ordem de impressão deve seguir a ordem abaixo.

``` A senha deve conter pelo menos 8 caracteres ```
``` A senha deve conter pelo menos uma letra maiuscula ```
``` A senha deve conter pelo menos uma letra minuscula ```
``` A senha deve conter pelo menos um numero ```
``` A senha deve conter pelo menos um simbolo ```
``` A senha e um palindromo ```
``` A senha nao pode conter palavras reservadas ```
#### Exemplos
#### Teste 03
##### Entrada
```
19
skippy
sunshine
golfer
richard
hannah
slayer
killer
nascar
canada
marine
boomer
flyers
mountain
gemini
winston
jasper
abcdef
starwars
ginger
mbo!zom1rineenir1Moz!obm
```
##### Saída
```
ok
```
##### Teste 09
##### Entrada
```
3
mother
zxcvbn
madison
U3BTRR
```
##### Saída
```
A senha deve conter pelo menos 8 caracteres
A senha deve conter pelo menos uma letra minuscula
A senha deve conter pelo menos um simbolo
```
##### Teste 02
##### Entrada
```
28
merlin
chicken
mountain
angela
brazil
password12
scorpio
packers
cookie
jeremy
jennifer
blazer
camaro
johnson
member
nathan
dakota
steven
voyager
hardcore
scooter
victor
racing
rosebud
donald
porsche
spanky
robert
OYAWVRJPASSWORD12JWCCWJ21DROWSSAPJRVWAYO
```
##### Saída
```
A senha deve conter pelo menos uma letra minuscula
A senha deve conter pelo menos um simbolo
A senha e um palindromo
A senha nao pode conter palavras reservadas
```
## Observações
O seu programa deve estar completamente contido em um único arquivo denominado desafio.c em linguagem C.
Você deve incluir, no início do seu programa, uma breve descrição dos objetivos do programa, da entrada e da saída, além do nome e RA do grupo.
Indente corretamente o seu código e inclua comentários no decorrer do seu programa.
## Dicas
Em C você pode utilizar funções da biblioteca ctype.h para converter entre maiúsculas e minusculas. Essa biblioteca ainda possui diversas funções para testar se um caractere é um número, ou uma letra maiúscula, etc.

## Critérios importantes
Os únicos headers aceitos para essa tarefa são: stdio.h, string.h e ctype.h.
