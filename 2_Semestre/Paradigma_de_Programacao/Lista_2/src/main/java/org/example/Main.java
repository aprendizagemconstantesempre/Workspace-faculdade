package org.example;

// Como vou inserir uma lista de exercícios juntos, preciso importar as classes do arquivo Exercicios.java
import static org.example.Exercicios.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {

    static void main() {
        // 1. Crie uma função que receba um número inteiro e retorne seu dobro.
        int valor = 25;
        int valordobrado = CalcularDobro(valor);

        System.out.println("***** LISTA DE EXERCÍCIOS 1 *****");
        System.out.println("1. Crie uma função que receba um número inteiro e retorne seu dobro.");
        System.out.println("O dobro de " + valor + " é " + valordobrado);
        System.out.println("");

        // 2. Implemente uma função que receba dois números inteiros e retorne o maior deles.
        int numero1 = 10;
        int numero2 = 5;
        int OMaiorNumero = MaiorNumero(numero1, numero2);

        System.out.println("2. Implemente uma função que receba dois números inteiros e retorne o maior deles.");
        System.out.println("Entre o número: " + numero1 + " e o número: " + numero2 + ", o maior é o número: " + OMaiorNumero);
        System.out.println("");

        // 3. Desenvolva uma função que receba dois números inteiros e retorne true se o primeiro for múltiplo do segundo.
        System.out.println("3. Desenvolva uma função que receba dois números inteiros e retorne true se o primeiro for múltiplo do segundo.");
        System.out.println(numero1 + " é múltiplo de " + numero2 + "? " + EhMultiplo(numero1, numero2));
        System.out.println("");

        // 4. Escreva uma função que receba um número e retorne true se for par, false caso contrário.
        System.out.println("4. Escreva uma função que receba um número e retorne true se for par, false caso contrário.");
        System.out.println(valor + " é par? " + EhPar(valor));
        System.out.println("");

        // 5. Crie uma função que receba um número real e retorne seu valor absoluto (sem usar Math.abs).
        double numeroNegativo = -42.5;
        System.out.println("5. Crie uma função que receba um número real e retorne seu valor absoluto (sem usar Math.abs).");
        System.out.println("O valor absoluto de " + numeroNegativo + " é " + ValorAbsoluto(numeroNegativo));
        System.out.println("");

        // 6. Escreva uma função que receba três números inteiros e retorne o menor deles.
        int numero3 = 3;
        System.out.println("6. Escreva uma função que receba três números inteiros e retorne o menor deles.");
        System.out.println("Entre " + numero1 + ", " + numero2 + " e " + numero3 + ", o menor é " + MenorNumero(numero1, numero2, numero3));
        System.out.println("");

        // 7. Implemente uma função que receba um número e verifique se está dentro do intervalo de 1 a 100.
        System.out.println("7. Implemente uma função que receba um número e verifique se está dentro do intervalo de 1 a 100.");
        System.out.println(valor + " está entre 1 e 100? " + EstaNoIntervalo(valor));
        System.out.println("");

        // 8. Desenvolva uma função que receba dois números e retorne a diferença entre eles em módulo (sem usar Math.abs).
        System.out.println("8. Desenvolva uma função que receba dois números e retorne a diferença entre eles em módulo (sem usar Math.abs).");
        System.out.println("A diferença absoluta entre " + numero1 + " e " + numero2 + " é " + DiferencaAbsoluta(numero1, numero2));
        System.out.println("");

        // 9. Escreva uma função que receba dois números e retorne a soma deles, mas apenas se forem positivos (caso contrário, retorne zero).
        System.out.println("9. Escreva uma função que receba dois números e retorne a soma deles, mas apenas se forem positivos (caso contrário, retorne zero).");
        System.out.println("A soma condicional de " + numero1 + " e " + numero2 + " é " + SomaSePositivos(numero1, numero2));
        System.out.println("");

        // 10. Crie uma função que receba um número inteiro e retorne true se ele for um quadrado perfeito.
        int numeroQuadrado = 16;
        System.out.println("10. Crie uma função que receba um número inteiro e retorne true se ele for um quadrado perfeito.");
        System.out.println(numeroQuadrado + " é um quadrado perfeito? " + EhQuadradoPerfeito(numeroQuadrado));
        System.out.println("");

        // 11. Crie uma função que receba uma String e retorne seu tamanho.
        String frase = "Estamos aprendendo Java";
        System.out.println("11. Crie uma função que receba uma String e retorne seu tamanho.");
        System.out.println("O tamanho da frase é " + TamanhoString(frase));
        System.out.println("");

        // 12. Desenvolva uma função que receba duas Strings e retorne true se forem iguais (ignorando maiúsculas e minúsculas).
        String palavra1 = "Java";
        String palavra2 = "JAVA";
        System.out.println("12. Desenvolva uma função que receba duas Strings e retorne true se forem iguais (ignorando maiúsculas e minúsculas).");
        System.out.println(palavra1 + " e " + palavra2 + " são iguais? " + StringsIguais(palavra1, palavra2));
        System.out.println("");

        // 13. Implemente uma função que receba um caractere e verifique se é uma vogal (a, e, i, o, u).
        char caractere = 'E';
        System.out.println("13. Implemente uma função que receba um caractere e verifique se é uma vogal (a, e, i, o, u).");
        System.out.println("'" + caractere + "' é uma vogal? " + EhVogal(caractere));
        System.out.println("");

        // 14. Escreva uma função que receba uma String e retorne a primeira letra.
        System.out.println("14. Escreva uma função que receba uma String e retorne a primeira letra.");
        System.out.println("A primeira letra de \"" + frase + "\" é " + PrimeiraLetra(frase));
        System.out.println("");

        // 15. Crie uma função que receba uma String e verifique se começa com a letra "A".
        System.out.println("15. Crie uma função que receba uma String e verifique se começa com a letra \"A\".");
        System.out.println("\"" + frase + "\" começa com A? " + ComecaComA(frase));
        System.out.println("");

        // 16. Desenvolva uma função que receba uma String e retorne true se ela contém apenas letras (sem números).
        String textoSoLetras = "SomenteLetras";
        System.out.println("16. Desenvolva uma função que receba uma String e retorne true se ela contém apenas letras (sem números).");
        System.out.println("\"" + textoSoLetras + "\" contém apenas letras? " + ContemApenasLetras(textoSoLetras));
        System.out.println("");

        // 17. Implemente uma função que receba uma String e substitua todas as letras "a" por "@".
        String textoParaSubstituir = "banana amarela";
        System.out.println("17. Implemente uma função que receba uma String e substitua todas as letras \"a\" por \"@\".");
        System.out.println("\"" + textoParaSubstituir + "\" vira \"" + SubstituirAPorArroba(textoParaSubstituir) + "\"");
        System.out.println("");

        // 18. Escreva uma função que receba uma String e verifique se contém a palavra "Java".
        System.out.println("18. Escreva uma função que receba uma String e verifique se contém a palavra \"Java\".");
        System.out.println("\"" + frase + "\" contém a palavra Java? " + ContemJava(frase));
        System.out.println("");

        // 19. Crie uma função que receba uma String e retorne a mesma em letras maiúsculas.
        System.out.println("19. Crie uma função que receba uma String e retorne a mesma em letras maiúsculas.");
        System.out.println("\"" + frase + "\" em maiúsculas: " + ParaMaiusculas(frase));
        System.out.println("");

        // 20. Desenvolva uma função que receba uma String e verifique se termina com a letra "z".
        String palavraComZ = "aprendiz";
        System.out.println("20. Desenvolva uma função que receba uma String e verifique se termina com a letra \"z\".");
        System.out.println("\"" + palavraComZ + "\" termina com z? " + TerminaComZ(palavraComZ));
        System.out.println("");

        // 21. Crie uma função que receba um número inteiro e retorne true se for primo.
        int numeroPrimo = 17;
        System.out.println("21. Crie uma função que receba um número inteiro e retorne true se for primo.");
        System.out.println(numeroPrimo + " é primo? " + EhPrimo(numeroPrimo));
        System.out.println("");

        // 22. Implemente uma função que receba um número e retorne true se for ímpar e maior que 50.
        int numeroImpar = 55;
        System.out.println("22. Implemente uma função que receba um número e retorne true se for ímpar e maior que 50.");
        System.out.println(numeroImpar + " é ímpar e maior que 50? " + EhImparEMaiorQue50(numeroImpar));
        System.out.println("");

        // 23. Desenvolva uma função que receba dois números e retorne true se pelo menos um deles for par.
        System.out.println("23. Desenvolva uma função que receba dois números e retorne true se pelo menos um deles for par.");
        System.out.println("Entre " + numero1 + " e " + numero3 + ", pelo menos um é par? " + PeloMenosUmPar(numero1, numero3));
        System.out.println("");

        // 24. Escreva uma função que receba um número e retorne true se for múltiplo de 3 e 5 ao mesmo tempo.
        int numeroMultiplo = 30;
        System.out.println("24. Escreva uma função que receba um número e retorne true se for múltiplo de 3 e 5 ao mesmo tempo.");
        System.out.println(numeroMultiplo + " é múltiplo de 3 e 5? " + MultiploDe3E5(numeroMultiplo));
        System.out.println("");

        // 25. Crie uma função que receba três números inteiros e retorne true se todos forem diferentes.
        System.out.println("25. Crie uma função que receba três números inteiros e retorne true se todos forem diferentes.");
        System.out.println(numero1 + ", " + numero2 + " e " + numero3 + " são todos diferentes? " + TodosDiferentes(numero1, numero2, numero3));
        System.out.println("");

        // 26. Desenvolva uma função que receba um número inteiro e retorne sua raiz quadrada (sem usar Math.sqrt()).
        System.out.println("26. Desenvolva uma função que receba um número inteiro e retorne sua raiz quadrada (sem usar Math.sqrt()).");
        System.out.println("A raiz quadrada de " + numeroQuadrado + " é " + RaizQuadrada(numeroQuadrado));
        System.out.println("");

        // 27. Implemente uma função que receba dois números e retorne a potência do primeiro elevado ao segundo (sem usar Math.pow()).
        System.out.println("27. Implemente uma função que receba dois números e retorne a potência do primeiro elevado ao segundo (sem usar Math.pow()).");
        System.out.println(numero3 + " elevado a 4 é " + Potencia(numero3, 4));
        System.out.println("");

        // 28. Escreva uma função que receba um número e retorne sua fatorial.
        int numeroFatorial = 5;
        System.out.println("28. Escreva uma função que receba um número e retorne sua fatorial.");
        System.out.println("O fatorial de " + numeroFatorial + " é " + Fatorial(numeroFatorial));
        System.out.println("");

        // 29. Crie uma função que receba um número e retorne true se for um número perfeito (soma dos divisores = número).
        int numeroPerfeito = 28;
        System.out.println("29. Crie uma função que receba um número e retorne true se for um número perfeito (soma dos divisores = número).");
        System.out.println(numeroPerfeito + " é um número perfeito? " + EhNumeroPerfeito(numeroPerfeito));
        System.out.println("");

        // 30. Desenvolva uma função que receba um número inteiro e retorne true se ele estiver dentro do intervalo fechado de 10 a 30 ou for um número negativo.
        System.out.println("30. Desenvolva uma função que receba um número inteiro e retorne true se ele estiver dentro do intervalo fechado de 10 a 30 ou for um número negativo.");
        System.out.println(numero1 + " está no intervalo de 10 a 30 ou é negativo? " + IntervaloOuNegativo(numero1));
        System.out.println("");
    }
}