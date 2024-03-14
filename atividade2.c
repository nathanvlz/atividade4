
#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo, negativo ou igual a zero
    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e igual a zero.\n");
    }

    return 0;
}


#4
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}

5#
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("O primeiro número é maior.\n");
    } else if (num1 < num2) {
        printf("O segundo número é maior.\n");
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
#6
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}
#7
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
        printf("Aluno aprovado. Média: %.2f\n", media);
    } else {
        printf("Aluno reprovado. Média: %.2f\n", media);
    }

    return 0;

}

#8
#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);

    if (strlen(nome1) > strlen(nome2)) {
        printf("A primeira pessoa tem mais caracteres no nome.\n");
    } else if (strlen(nome1) < strlen(nome2)) {
        printf("A segunda pessoa tem mais caracteres no nome.\n");
    } else {
        printf("Ambas as pessoas têm a mesma quantidade de caracteres no nome.\n");
    }

    return 0;
}
#9
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            printf("O caractere é uma vogal.\n");
        } else {
            printf("O caractere é uma consoante.\n");
        }
    } else {
        printf("O caractere não é uma letra.\n");
    }

    return 0;
}
#10
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("%d, ", num1);
        if (num2 <= num3) {
            printf("%d, %d\n", num2, num3);
        } else {
            printf("%d, %d\n", num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d, ", num2);
        if (num1 <= num3) {
            printf("%d, %d\n", num1, num3);
        } else {
            printf("%d, %d\n", num3, num1);
        }
    } else {
        printf("%d, ", num3);
        if (num1 <= num2) {
            printf("%d, %d\n", num1, num2);
        } else {
            printf("%d, %d\n", num2, num1);
        }
    }

    return 0;
}
#11
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("A pessoa está abaixo do peso.\n");
    } else if (imc < 24.9) {
        printf("A pessoa está com peso normal.\n");
    } else if (imc < 29.9) {
        printf("A pessoa está com sobrepeso.\n");
    } else if (imc < 34.9) {
        printf("A pessoa está obesa.\n");
    } else {
        printf("A pessoa está muito obesa.\n");
    }

    return 0;
}

#12 
#include <stdio.h>

int main() {
    int numeroMes;

    printf("Digite um número de mês (1 a 12): ");
    scanf("%d", &numeroMes);

    switch (numeroMes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Número de mês inválido.\n");
    }

    return 0;
}
#13
#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario > 1500) {
        aumento = salario * 0.10; // 10% de aumento para salários acima de R$1500,00
    } else {
        aumento = salario * 0.15; // 15% de aumento para salários até R$1500,00
    }

    novoSalario = salario + aumento;

    printf("O aumento salarial é de R$%.2f\n", aumento);
    printf("O novo salário é de R$%.2f\n", novoSalario);

    return 0;
}
#14 
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O número é divisível por 3 e por 5.\n");
    } else {
        printf("O número não é divisível por 3 e por 5 ao mesmo tempo.\n");
    }

    return 0;
}

#15
#include <stdio.h>
#include <string.h>

int main() {
    char diaSemana[20];

    printf("Digite o dia da semana (por extenso): ");
    scanf("%s", diaSemana);

    if (strcmp(diaSemana, "sabado") == 0 || strcmp(diaSemana, "domingo") == 0) {
        printf("É fim de semana.\n");
    } else {
        printf("É um dia útil.\n");
    }

    return 0;
}

#16 
#include <stdio.h>

int main() {
    int valor;

    printf("Digite um número de 1 a 5: ");
    scanf("%d", &valor);

    switch (valor) {
        case 1:
            printf("Muito bom\n");
            break;
        case 2:
            printf("Bom\n");
            break;
        case 3:
            printf("Regular\n");
            break;
        case 4:
            printf("Insuficiente\n");
            break;
        case 5:
            printf("Muito insuficiente\n");
            break;
        default:
            printf("Número inválido\n");
    }

    return 0;
}

#17
#include <stdio.h>

int main() {
    int numeroDia;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &numeroDia);

    switch (numeroDia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
                        break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido\n");
    }

    return 0;
}


#19
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 1) {
        printf("Bebê\n");
    } else if (idade <= 12) {
        printf("Criança\n");
    } else if (idade <= 18) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }

    return 0;
}
#20
#include <stdio.h>
#include <string.h>

int main() {
    char estadoCivil[20];

    printf("Digite o estado civil: ");
    scanf("%s", estadoCivil);

    // Converte para minúsculas para facilitar a comparação
    for (int i = 0; estadoCivil[i]; i++) {
        estadoCivil[i] = tolower(estadoCivil[i]);
    }

    switch (estadoCivil) {
        case "solteiro":
            printf("Solteiro\n");
            break;
        case "casado":
            printf("Casado\n");
            break;
        case "divorciado":
            printf("Divorciado\n");
            break;
        case "viuvo":
            printf("Viúvo\n");
            break;
        default:
            printf("Estado civil desconhecido\n");
    }

    return 0;
}
#21 
#include <stdio.h>

int main() {
    int num1, num2, operacao;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Escolha a operação (1-soma, 2-subtração, 3-multiplicação, 4-divisão): ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            printf("Resultado da soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado da subtração: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado da multiplicação: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado da divisão: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: divisão por zero\n");
            }
            break;
        default:
            printf("Operação inválida\n");
    }

    return 0;
}

#22 
#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    // Tratamento de exceção para garantir que a idade seja um valor inteiro
    printf("Digite a idade: ");
    if (scanf("%d", &idade) != 1) {
        printf("Erro: idade deve ser um valor inteiro.\n");
        return 1; // Indica um erro
    }

    printf("Nome: %s, Idade: %d\n", nome, idade);

    return 0;
}

#23
#include <stdio.h>

int main() {
    float metros;
    float centimetros, milimetros, quilometros;

    // Tratamento de exceção para garantir que a entrada seja um valor real
    printf("Digite o valor em metros: ");
    if (scanf("%f", &metros) != 1) {
        printf("Erro: valor deve ser um número real.\n");
        return 1; // Indica um erro
    }

    centimetros = metros * 100;
    milimetros = metros * 1000;
    quilometros = metros / 1000;

    printf("%.2f metros equivalem a:\n", metros);
    printf("%.2f centímetros\n", centimetros);
    printf("%.2f milímetros\n", milimetros);
    printf("%.6f quilômetros\n", quilometros);

    return 0;
}
