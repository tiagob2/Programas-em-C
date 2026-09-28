
1) No item 2, o que muda se você usar / em vez de / no Python? E em C, como fica:
"/" em Python realiza uma divisão que o resultado será float, e "//" realiza uma divisão inteira.
"/" em C realiza uma divisão inteira, sendo necessário declarar tipo para obter float, e "//" em C inicia uma linha de comentário.

2)No item 4, teste c * (9/5) no seu programa em C e explique o resultado:
 O resultado seria errado, pois ao fazer "c * (9/5)" sem declarar um tipo float, c iria multiplicar por 1 e não por 1,8.

3)No item 9, por que o C imprime 1 e o Python imprime True ? O que isso revela sobre como C
representa "verdadeiro" e "falso":
 Nas versões clássicas de C não tem um tipo booleano nativo original fazendo com que verdadeiro seja impresso com "1" e falso seja impresso como "0", posteriormente em C foi adicionado um tipo booleano, porém verdadeiro e falso ainda são tratados como inteiros.
Em Python sempre teve um tipo booleano dedicado "bool",a formatação padrão na tela prioriza True que é "1" e False que é "0".

4)Escolha um dos programas e rode gcc -S no seu .c . Abra o .s e localize onde acontece uma das operações (uma soma, por exemplo):
Escolhi o programa que calcula a média de três notas. Executei "gcc -S media.c", que gerou o arquivo "media.s". No Assembly, a operação de soma pode ser identificada pela instrução "addss", que realiza a soma de números de ponto flutuante. Essa instrução corresponde à operação "n1 + n2 + n3" presente no código em C. 