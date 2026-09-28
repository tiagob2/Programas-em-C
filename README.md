
1) "/" em Python realiza uma divisão que o resultado será float, e "//" realiza uma divisão inteira.
"/" em C realiza uma divisão inteira, sendo necessário declarar tipo para obter float, e "//" em C inicia uma linha de comentário.

2) O resultado seria errado, pois ao fazer "c * (9/5)" sem declarar um tipo float, c iria multiplicar por 1 e não por 1,8.

3)Nas versões clássicas de C não tem um tipo booleano nativo original fazendo com que verdadeiro seja impresso com "1" e falso seja impresso como "0", posteriormente em C foi adicionado um tipo booleano, porém verdadeiro e falso ainda são tratados como inteiros.
Em Python sempre teve um tipo booleano dedicado "bool",a formatação padrão na tela prioriza True que é "1" e False que é "0".