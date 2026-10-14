
 /*
   Estudo: ASCII, char, printf, scanf e marcadores
 
 == ASCII e char ==
 
O teclado entrega caracteres, não números. Cada caractere é guardado como
um código da tabela ASCII:
 
    '0' a '9' = 48 a 57     'A' a 'Z' = 65 a 90     'a' a 'z' = 97 a 122
 
Então '4' vale 52, e não 4. O char é um inteiro pequeno (1 byte), e 'a' é
só outro jeito de escrever 97. Por isso dá para fazer conta: 'a' + 1 vale 98.
 
 == Marcadores==
 
O printf não enxerga o tipo da variável: o marcador decide como mostrar
o valor.
 
    %d mostra o número (97)        %c mostra o símbolo (a)
 
É o mesmo valor guardado, só a aparência muda. O marcador precisa combinar
com o tipo: %d e %c servem para char e int (os dois são inteiros), mas %f
com um int dá resultado errado. O tipo da variável é usado pelo compilador
(tamanho, interpretação dos bits e a operação: 7 / 2 dá 3 com int e 3.5
com float).
 
 == printf: texto com lacunas ==
 
    printf("%d + %d = %d\n", a, b, a + b);
 
O texto entre aspas é copiado para a tela, e cada marcador é preenchido
pelos valores depois da vírgula, na ordem. O + e o = dentro das aspas são
só texto: a conta fica fora das aspas. Número de marcadores = número de
valores.
 
== scanf com %d: converte texto em número ==

Para cada caractere digitado, o scanf faz:

    -> Checa se é dígito (código entre 48 e 57). Se não for, ele para.

    -> Traduz o caractere para o dígito:
           dígito = caractere - '0'          (52 - 48 = 4)
       O código do dígito é o dígito + 48, e a subtração desfaz isso.

    -> Junta o dígito ao número já montado:
           acumulador = acumulador * 10 + dígito
       Para o texto 45: 0 * 10 + 4 = 4, depois 4 * 10 + 5 = 45.

O acumulador é uma variável interna do scanf. Ele repete esses três passos
até achar um caractere que não é dígito (Enter, espaço, letra) e só então
grava o resultado no endereço recebido (&n). Cada %d recomeça com o
acumulador em 0. 

== & e retorno do scanf ==
 
O & entrega o endereço da variável, para o scanf escrever nela.
 
O scanf devolve quantos valores leu: 1 se leu um número, 0 se não era número.
Por isso if (scanf("%d", &n) != 1) testa se a leitura falhou, e não o valor
digitado. O que não é consumido fica no buffer: "12abc" lê 12 e deixa "abc";
"abc" não lê nada e a variável não muda.
 */
#include <stdio.h>
 
int main(void) {
    // Mesmo valor guardado, duas aparências (Marcadores)
    char c = 'a';
    printf("%%c mostra: %c | %%d mostra: %d\n", c, c);
 
   // Código do caractere e dígito que ele representa (scanf, tradução do caractere)
    char c1 = '4';
    char c2 = '5';
    printf("codigo de '4': %d | digito: %d\n", c1, c1 - '0');
 
    // A montagem do número, igual ao que o scanf faz por dentro (scanf, acumulador)
    int acumulador = 0;
    acumulador = acumulador * 10 + (c1 - '0');   // 0*10 + 4 = 4
    acumulador = acumulador * 10 + (c2 - '0');   // 4*10 + 5 = 45
    printf("'4' e '5' viram o numero: %d\n", acumulador);
 
    return 0;
}