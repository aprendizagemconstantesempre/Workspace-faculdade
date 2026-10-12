package org.example;

public class Exercicios {

    // 1. Crie uma função que receba um número inteiro e retorne seu dobro.
    public static int CalcularDobro (int numero){
        int resultado = numero * 2;
        return resultado;
    }

    // 2. Implemente uma função que receba dois números inteiros e retorne o maior deles.
    public static int MaiorNumero (int num1, int num2) {
        // Declaração de varíável
        int NumMaior;

        if (num1 > num2) {
            NumMaior = num1;
        } else {
            NumMaior = num2;
        }
        return NumMaior;
    }

    // 3. Desenvolva uma função que receba dois números inteiros e retorne true se o primeiro for múltiplo do segundo.
    public static boolean EhMultiplo (int num1, int num2) {
        // Usando o operador % (resto da divisão) para checar a multiplicidade
        return num1 % num2 == 0;
    }

    // 4. Escreva uma função que receba um número e retorne true se for par, false caso contrário.
    public static boolean EhPar (int numero) {
        return numero % 2 == 0;
    }

    // 5. Crie uma função que receba um número real e retorne seu valor absoluto (sem usar Math.abs).
    public static double ValorAbsoluto (double numero) {
        if (numero < 0) {
            return -numero;
        }
        return numero;
    }

    // 6. Escreva uma função que receba três números inteiros e retorne o menor deles.
    public static int MenorNumero (int num1, int num2, int num3) {
        // Começamos assumindo que o primeiro é o menor e vamos comparando
        int menor = num1;

        if (num2 < menor) {
            menor = num2;
        }
        if (num3 < menor) {
            menor = num3;
        }
        return menor;
    }

    // 7. Implemente uma função que receba um número e verifique se está dentro do intervalo de 1 a 100.
    public static boolean EstaNoIntervalo (int numero) {
        return numero >= 1 && numero <= 100;
    }

    // 8. Desenvolva uma função que receba dois números e retorne a diferença entre eles em módulo (sem usar Math.abs).
    public static int DiferencaAbsoluta (int num1, int num2) {
        int diferenca = num1 - num2;

        if (diferenca < 0) {
            diferenca = -diferenca;
        }
        return diferenca;
    }

    // 9. Escreva uma função que receba dois números e retorne a soma deles, mas apenas se forem positivos (caso contrário, retorne zero).
    public static int SomaSePositivos (int num1, int num2) {
        if (num1 > 0 && num2 > 0) {
            return num1 + num2;
        }
        return 0;
    }

    // 10. Crie uma função que receba um número inteiro e retorne true se ele for um quadrado perfeito.
    public static boolean EhQuadradoPerfeito (int numero) {
        // Números negativos nunca são quadrados perfeitos
        if (numero < 0) {
            return false;
        }

        // Aqui usamos um laço de repetição (for). Ele vai testando cada número
        // até encontrar um cuja multiplicação por ele mesmo seja igual ao número recebido
        for (int i = 0; i * i <= numero; i++) {
            if (i * i == numero) {
                return true;
            }
        }
        return false;
    }

    // 11. Crie uma função que receba uma String e retorne seu tamanho.
    public static int TamanhoString (String texto) {
        return texto.length();
    }

    // 12. Desenvolva uma função que receba duas Strings e retorne true se forem iguais (ignorando maiúsculas e minúsculas).
    public static boolean StringsIguais (String texto1, String texto2) {
        return texto1.equalsIgnoreCase(texto2);
    }

    // 13. Implemente uma função que receba um caractere e verifique se é uma vogal (a, e, i, o, u).
    public static boolean EhVogal (char caractere) {
        // Convertendo para minúsculo para não precisar checar A, E, I, O, U também
        char letra = Character.toLowerCase(caractere);
        return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
    }

    // 14. Escreva uma função que receba uma String e retorne a primeira letra.
    public static char PrimeiraLetra (String texto) {
        return texto.charAt(0);
    }

    // 15. Crie uma função que receba uma String e verifique se começa com a letra "A".
    public static boolean ComecaComA (String texto) {
        return texto.startsWith("A");
    }

    // 16. Desenvolva uma função que receba uma String e retorne true se ela contém apenas letras (sem números).
    public static boolean ContemApenasLetras (String texto) {
        // Percorrendo cada caractere para validar o conteúdo da String
        for (int i = 0; i < texto.length(); i++) {
            if (!Character.isLetter(texto.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    // 17. Implemente uma função que receba uma String e substitua todas as letras "a" por "@".
    public static String SubstituirAPorArroba (String texto) {
        return texto.replace('a', '@');
    }

    // 18. Escreva uma função que receba uma String e verifique se contém a palavra "Java".
    public static boolean ContemJava (String texto) {
        return texto.contains("Java");
    }

    // 19. Crie uma função que receba uma String e retorne a mesma em letras maiúsculas.
    public static String ParaMaiusculas (String texto) {
        return texto.toUpperCase();
    }

    // 20. Desenvolva uma função que receba uma String e verifique se termina com a letra "z".
    public static boolean TerminaComZ (String texto) {
        return texto.endsWith("z");
    }

    // 21. Crie uma função que receba um número inteiro e retorne true se for primo.
    public static boolean EhPrimo (int numero) {
        // Números menores que 2 nunca são primos
        if (numero < 2) {
            return false;
        }

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                return false;
            }
        }
        return true;
    }

    // 22. Implemente uma função que receba um número e retorne true se for ímpar e maior que 50.
    public static boolean EhImparEMaiorQue50 (int numero) {
        return numero % 2 != 0 && numero > 50;
    }

    // 23. Desenvolva uma função que receba dois números e retorne true se pelo menos um deles for par.
    public static boolean PeloMenosUmPar (int num1, int num2) {
        return num1 % 2 == 0 || num2 % 2 == 0;
    }

    // 24. Escreva uma função que receba um número e retorne true se for múltiplo de 3 e 5 ao mesmo tempo.
    public static boolean MultiploDe3E5 (int numero) {
        return numero % 3 == 0 && numero % 5 == 0;
    }

    // 25. Crie uma função que receba três números inteiros e retorne true se todos forem diferentes.
    public static boolean TodosDiferentes (int num1, int num2, int num3) {
        return num1 != num2 && num1 != num3 && num2 != num3;
    }

    // 26. Desenvolva uma função que receba um número inteiro e retorne sua raiz quadrada (sem usar Math.sqrt()).
    public static double RaizQuadrada (int numero) {
        // Boas Praticas: tratamos o caso de número negativo antes de qualquer cálculo
        if (numero < 0) {
            return -1;
        }

        // Aqui usamos o método de Newton, que vai se aproximando do resultado aos poucos
        double aproximacao = numero;
        double precisao = 0.00001;

        while (Math.abs(aproximacao * aproximacao - numero) > precisao) {
            aproximacao = (aproximacao + numero / aproximacao) / 2;
        }
        return aproximacao;
    }

    // 27. Implemente uma função que receba dois números e retorne a potência do primeiro elevado ao segundo (sem usar Math.pow()).
    public static int Potencia (int base, int expoente) {
        int resultado = 1;

        for (int i = 0; i < expoente; i++) {
            resultado = resultado * base;
        }
        return resultado;
    }

    // 28. Escreva uma função que receba um número e retorne sua fatorial.
    public static long Fatorial (int numero) {
        long resultado = 1;

        for (int i = 1; i <= numero; i++) {
            resultado = resultado * i;
        }
        return resultado;
    }

    // 29. Crie uma função que receba um número e retorne true se for um número perfeito (soma dos divisores = número).
    public static boolean EhNumeroPerfeito (int numero) {
        if (numero <= 0) {
            return false;
        }

        int somaDivisores = 0;

        // Boas Praticas: percorremos apenas até numero - 1, pois um número nunca é divisor dele mesmo nesse contexto
        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                somaDivisores = somaDivisores + i;
            }
        }
        return somaDivisores == numero;
    }

    // 30. Desenvolva uma função que receba um número inteiro e retorne true se ele estiver dentro do intervalo fechado de 10 a 30 ou for um número negativo.
    public static boolean IntervaloOuNegativo (int numero) {
        return (numero >= 10 && numero <= 30) || numero < 0;
    }

}