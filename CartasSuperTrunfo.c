// biblioteca
#include <stdio.h>

int main() {
    // DEFININDO AS VARIÁVEIS

    // Definindo o tipo das variáveis população
    int populacao_A01, populacao_A02, populacao_A03, populacao_A04;
    int populacao_B01, populacao_B02, populacao_B03, populacao_B04;
    int populacao_C01, populacao_C02, populacao_C03, populacao_C04;
    int populacao_D01, populacao_D02, populacao_D03, populacao_D04;
    int populacao_E01, populacao_E02, populacao_E03, populacao_E04;
    int populacao_F01, populacao_F02, populacao_F03, populacao_F04;
    int populacao_G01, populacao_G02, populacao_G03, populacao_G04;
    int populacao_H01, populacao_H02, populacao_H03, populacao_H04;

    // Declaração das variáveis área
    float area_A01, area_A02, area_A03, area_A04;
    float area_B01, area_B02, area_B03, area_B04;
    float area_C01, area_C02, area_C03, area_C04;
    float area_D01, area_D02, area_D03, area_D04;
    float area_E01, area_E02, area_E03, area_E04;
    float area_F01, area_F02, area_F03, area_F04;
    float area_G01, area_G02, area_G03, area_G04;
    float area_H01, area_H02, area_H03, area_H04;

    // Declaração das variáveis PIB
    float pib_A01, pib_A02, pib_A03, pib_A04;
    float pib_B01, pib_B02, pib_B03, pib_B04;
    float pib_C01, pib_C02, pib_C03, pib_C04;
    float pib_D01, pib_D02, pib_D03, pib_D04;
    float pib_E01, pib_E02, pib_E03, pib_E04;
    float pib_F01, pib_F02, pib_F03, pib_F04;
    float pib_G01, pib_G02, pib_G03, pib_G04;
    float pib_H01, pib_H02, pib_H03, pib_H04;

    // Declaração das variáveis pontos turísticos
    int pontos_turisticos_A01, pontos_turisticos_A02, pontos_turisticos_A03, pontos_turisticos_A04;
    int pontos_turisticos_B01, pontos_turisticos_B02, pontos_turisticos_B03, pontos_turisticos_B04;
    int pontos_turisticos_C01, pontos_turisticos_C02, pontos_turisticos_C03, pontos_turisticos_C04;
    int pontos_turisticos_D01, pontos_turisticos_D02, pontos_turisticos_D03, pontos_turisticos_D04;
    int pontos_turisticos_E01, pontos_turisticos_E02, pontos_turisticos_E03, pontos_turisticos_E04;
    int pontos_turisticos_F01, pontos_turisticos_F02, pontos_turisticos_F03, pontos_turisticos_F04;
    int pontos_turisticos_G01, pontos_turisticos_G02, pontos_turisticos_G03, pontos_turisticos_G04;
    int pontos_turisticos_H01, pontos_turisticos_H02, pontos_turisticos_H03, pontos_turisticos_H04;

    // EXPLICANDO AS REGRAS DO JOGO
    printf("Olá, bem-vindo ao SUPERTRUNFO - CIDADES! Vamos jogar?\n");
    printf("Você irá digitar a POPULAÇÃO, a ÁREA, o PIB e a quantidade de PONTOS TURÍSTICOS de 4 cidades, de 8 estados. Vamos lá?\n\n");

    // INICIANDO O JOGO
    // Estado A
    printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO A: ");
    scanf("%d", &populacao_A01);  

    printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO A: ");
    scanf("%f", &area_A01);  

    printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO A: ");
    scanf("%f", &pib_A01);

    printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO A: ");
    scanf("%d", &pontos_turisticos_A01);

    printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO A: ");
    scanf("%d", &populacao_A02);  

    printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO A: ");
    scanf("%f", &area_A02);  

    printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO A: ");
    scanf("%f", &pib_A02);

    printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO A: ");
    scanf("%d", &pontos_turisticos_A02);

    printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO A: ");
    scanf("%d", &populacao_A03);  

    printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO A: ");
    scanf("%f", &area_A03);  

    printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO A: ");
    scanf("%f", &pib_A03);

    printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO A: ");
    scanf("%d", &pontos_turisticos_A03);

    printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO A: ");
    scanf("%d", &populacao_A04);  

    printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO A: ");
    scanf("%f", &area_A04);  

    printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO A: ");
    scanf("%f", &pib_A04);

    printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO A: ");
    scanf("%d", &pontos_turisticos_A04);


    // Estado B
    printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO B: ");
    scanf("%d", &populacao_B01);  

    printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO B: ");
    scanf("%f", &area_B01);  

    printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO B: ");
    scanf("%f", &pib_B01);

    printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO B: ");
    scanf("%d", &pontos_turisticos_B01);

    printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO B: ");
    scanf("%d", &populacao_B02);  

    printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO B: ");
    scanf("%f", &area_B02);  

    printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO B: ");
    scanf("%f", &pib_B02);

    printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO B: ");
    scanf("%d", &pontos_turisticos_B02);

    printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO B: ");
    scanf("%d", &populacao_B03);  

    printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO B: ");
    scanf("%f", &area_B03);  

    printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO B: ");
    scanf("%f", &pib_B03);

    printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO B: ");
    scanf("%d", &pontos_turisticos_B03);

    printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO B: ");
    scanf("%d", &populacao_B04);  

    printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO B: ");
    scanf("%f", &area_B04);  

    printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO B: ");
    scanf("%f", &pib_B04);

    printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO B: ");
    scanf("%d", &pontos_turisticos_B04);

    // Estado C
    printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO C: ");
    scanf("%d", &populacao_C01);  

    printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO C: ");
    scanf("%f", &area_C01);  

    printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO C: ");
    scanf("%f", &pib_C01);

    printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO C: ");
    scanf("%d", &pontos_turisticos_C01);

    printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO C: ");
    scanf("%d", &populacao_C02);  

    printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO C: ");
    scanf("%f", &area_C02);  

    printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO C: ");
    scanf("%f", &pib_C02);

    printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO C: ");
    scanf("%d", &pontos_turisticos_C02);

    printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO C: ");
    scanf("%d", &populacao_C03);  

    printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO C: ");
    scanf("%f", &area_C03);  

    printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO C: ");
    scanf("%f", &pib_C03);

    printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO C: ");
    scanf("%d", &pontos_turisticos_C03);

    printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO C: ");
    scanf("%d", &populacao_C04);  

    printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO C: ");
    scanf("%f", &area_C04);  

    printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO C: ");
    scanf("%f", &pib_C04);

    printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO C: ");
    scanf("%d", &pontos_turisticos_C04);

   // Estado D
   printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO D: ");
   scanf("%d", &populacao_D01);  

   printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO D: ");
   scanf("%f", &area_D01);  

   printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO D: ");
   scanf("%f", &pib_D01);

   printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO D: ");
   scanf("%d", &pontos_turisticos_D01);

   printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO D: ");
   scanf("%d", &populacao_D02);  

   printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO D: ");
   scanf("%f", &area_D02);  

   printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO D: ");
   scanf("%f", &pib_D02);

   printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO D: ");
   scanf("%d", &pontos_turisticos_D02);

   printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO D: ");
   scanf("%d", &populacao_D03);  

   printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO D: ");
   scanf("%f", &area_D03);  

   printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO D: ");
   scanf("%f", &pib_D03);

   printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO D: ");
   scanf("%d", &pontos_turisticos_D03);

   printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO D: ");
   scanf("%d", &populacao_D04);  

   printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO D: ");
   scanf("%f", &area_D04);  

   printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO D: ");
   scanf("%f", &pib_D04);

   printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO D: ");
   scanf("%d", &pontos_turisticos_D04);

   // Estado F
   printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO F: ");
   scanf("%d", &populacao_F01);  

   printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO F: ");
   scanf("%f", &area_F01);  

   printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO F: ");
   scanf("%f", &pib_F01);

   printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO F: ");
   scanf("%d", &pontos_turisticos_F01);

   printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO F: ");
   scanf("%d", &populacao_F02);  

   printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO F: ");
   scanf("%f", &area_F02);  

   printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO F: ");
   scanf("%f", &pib_F02);

   printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO F: ");
   scanf("%d", &pontos_turisticos_F02);

   printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO F: ");
   scanf("%d", &populacao_F03);  

   printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO F: ");
   scanf("%f", &area_F03);  

   printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO F: ");
   scanf("%f", &pib_F03);

   printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO F: ");
   scanf("%d", &pontos_turisticos_F03);

   printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO F: ");
   scanf("%d", &populacao_F04);  

   printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO F: ");
   scanf("%f", &area_F04);  

   printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO F: ");
   scanf("%f", &pib_F04);

   printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO F: ");
   scanf("%d", &pontos_turisticos_F04);

   // Estado G
   printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO G: ");
   scanf("%d", &populacao_G01);  

   printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO G: ");
   scanf("%f", &area_G01);  

   printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO G: ");
   scanf("%f", &pib_G01);

   printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO G: ");
   scanf("%d", &pontos_turisticos_G01);

   printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO G: ");
   scanf("%d", &populacao_G02);  

   printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO G: ");
   scanf("%f", &area_G02);  

   printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO G: ");
   scanf("%f", &pib_G02);

   printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO G: ");
   scanf("%d", &pontos_turisticos_G02);

   printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO G: ");
   scanf("%d", &populacao_G03);  

   printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO G: ");
   scanf("%f", &area_G03);  

   printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO G: ");
   scanf("%f", &pib_G03);

   printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO G: ");
   scanf("%d", &pontos_turisticos_G03);

   printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO G: ");
   scanf("%d", &populacao_G04);  

   printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO G: ");
   scanf("%f", &area_G04);  

   printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO G: ");
   scanf("%f", &pib_G04);

   printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO G: ");
   scanf("%d", &pontos_turisticos_G04);

   // Estado H
   printf("DIGITE A POPULAÇÃO DA PRIMEIRA CIDADE, DO ESTADO H: ");
   scanf("%d", &populacao_H01);  

   printf("DIGITE A ÁREA DA PRIMEIRA CIDADE, DO ESTADO H: ");
   scanf("%f", &area_H01);  

   printf("DIGITE O PIB DA PRIMEIRA CIDADE, DO ESTADO H: ");
   scanf("%f", &pib_H01);

   printf("DIGITE OS PONTOS TURÍSTICOS DA PRIMEIRA CIDADE, DO ESTADO H: ");
   scanf("%d", &pontos_turisticos_H01);

   printf("DIGITE A POPULAÇÃO DA SEGUNDA CIDADE, DO ESTADO H: ");
   scanf("%d", &populacao_H02);  

   printf("DIGITE A ÁREA DA SEGUNDA CIDADE, DO ESTADO H: ");
   scanf("%f", &area_H02);  

   printf("DIGITE O PIB DA SEGUNDA CIDADE, DO ESTADO H: ");
   scanf("%f", &pib_H02);

   printf("DIGITE OS PONTOS TURÍSTICOS DA SEGUNDA CIDADE, DO ESTADO H: ");
   scanf("%d", &pontos_turisticos_H02);

   printf("DIGITE A POPULAÇÃO DA TERCEIRA CIDADE, DO ESTADO H: ");
   scanf("%d", &populacao_H03);  

   printf("DIGITE A ÁREA DA TERCEIRA CIDADE, DO ESTADO H: ");
   scanf("%f", &area_H03);  

   printf("DIGITE O PIB DA TERCEIRA CIDADE, DO ESTADO H: ");
   scanf("%f", &pib_H03);

   printf("DIGITE OS PONTOS TURÍSTICOS DA TERCEIRA CIDADE, DO ESTADO H: ");
   scanf("%d", &pontos_turisticos_H03);

   printf("DIGITE A POPULAÇÃO DA QUARTA CIDADE, DO ESTADO H: ");
   scanf("%d", &populacao_H04);  

   printf("DIGITE A ÁREA DA QUARTA CIDADE, DO ESTADO H: ");
   scanf("%f", &area_H04);  

   printf("DIGITE O PIB DA QUARTA CIDADE, DO ESTADO H: ");
   scanf("%f", &pib_H04);

   printf("DIGITE OS PONTOS TURÍSTICOS DA QUARTA CIDADE, DO ESTADO H: ");
   scanf("%d", &pontos_turisticos_H04);

   // Exibindo na tela
    printf("Aqui estão seus Cards:\n\n\n");

    // Estado A
    printf("Cidades do Estado A:\n\n");

    printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_A01);
    printf("Primeira cidade - ÁREA: %.2f \n", area_A01);
    printf("Primeira cidade - PIB: %.2f \n", pib_A01);
    printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_A01);

    printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_A02);
    printf("Segunda cidade - ÁREA: %.2f \n", area_A02);
    printf("Segunda cidade - PIB: %.2f \n", pib_A02);
    printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_A02);

    printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_A03);
    printf("Terceira cidade - ÁREA: %.2f \n", area_A03);
    printf("Terceira cidade - PIB: %.2f \n", pib_A03);
    printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_A03);

    printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_A04);
    printf("Quarta cidade - ÁREA: %.2f \n", area_A04);
    printf("Quarta cidade - PIB: %.2f \n", pib_A04);
    printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_A04);

   // Estado B
   printf("Cidades do Estado B:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_B01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_B01);
   printf("Primeira cidade - PIB: %.2f \n", pib_B01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_B01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_B02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_B02);
   printf("Segunda cidade - PIB: %.2f \n", pib_B02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_B02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_B03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_B03);
   printf("Terceira cidade - PIB: %.2f \n", pib_B03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_B03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_B04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_B04);
   printf("Quarta cidade - PIB: %.2f \n", pib_B04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_B04);

   // Estado C
   printf("Cidades do Estado C:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_C01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_C01);
   printf("Primeira cidade - PIB: %.2f \n", pib_C01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_C01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_C02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_C02);
   printf("Segunda cidade - PIB: %.2f \n", pib_C02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_C02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_C03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_C03);
   printf("Terceira cidade - PIB: %.2f \n", pib_C03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_C03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_C04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_C04);
   printf("Quarta cidade - PIB: %.2f \n", pib_C04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_C04);

   // Estado D
   printf("Cidades do Estado D:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_D01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_D01);
   printf("Primeira cidade - PIB: %.2f \n", pib_D01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_D01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_D02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_D02);
   printf("Segunda cidade - PIB: %.2f \n", pib_D02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_D02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_D03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_D03);
   printf("Terceira cidade - PIB: %.2f \n", pib_D03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_D03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_D04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_D04);
   printf("Quarta cidade - PIB: %.2f \n", pib_D04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_D04);

   // Estado E
   printf("Cidades do Estado E:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_E01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_E01);
   printf("Primeira cidade - PIB: %.2f \n", pib_E01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_E01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_E02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_E02);
   printf("Segunda cidade - PIB: %.2f \n", pib_E02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_E02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_E03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_E03);
   printf("Terceira cidade - PIB: %.2f \n", pib_E03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_E03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_E04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_E04);
   printf("Quarta cidade - PIB: %.2f \n", pib_E04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_E04);

   // Estado F
   printf("Cidades do Estado F:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_F01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_F01);
   printf("Primeira cidade - PIB: %.2f \n", pib_F01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_F01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_F02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_F02);
   printf("Segunda cidade - PIB: %.2f \n", pib_F02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_F02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_F03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_F03);
   printf("Terceira cidade - PIB: %.2f \n", pib_F03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_F03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_F04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_F04);
   printf("Quarta cidade - PIB: %.2f \n", pib_F04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_F04);

   // Estado G
   printf("Cidades do Estado G:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_G01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_G01);
   printf("Primeira cidade - PIB: %.2f \n", pib_G01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_G01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_G02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_G02);
   printf("Segunda cidade - PIB: %.2f \n", pib_G02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_G02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_G03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_G03);
   printf("Terceira cidade - PIB: %.2f \n", pib_G03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_G03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_G04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_G04);
   printf("Quarta cidade - PIB: %.2f \n", pib_G04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_G04);

   // Estado H
   printf("Cidades do Estado H:\n\n");

   printf("Primeira cidade - POPULAÇÃO: %d \n", populacao_H01);
   printf("Primeira cidade - ÁREA: %.2f \n", area_H01);
   printf("Primeira cidade - PIB: %.2f \n", pib_H01);
   printf("Primeira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_H01);

   printf("Segunda cidade - POPULAÇÃO: %d \n", populacao_H02);
   printf("Segunda cidade - ÁREA: %.2f \n", area_H02);
   printf("Segunda cidade - PIB: %.2f \n", pib_H02);
   printf("Segunda cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_H02);

   printf("Terceira cidade - POPULAÇÃO: %d \n", populacao_H03);
   printf("Terceira cidade - ÁREA: %.2f \n", area_H03);
   printf("Terceira cidade - PIB: %.2f \n", pib_H03);
   printf("Terceira cidade - PONTOS TURÍSTICOS: %d \n", pontos_turisticos_H03);

   printf("Quarta cidade - POPULAÇÃO: %d \n", populacao_H04);
   printf("Quarta cidade - ÁREA: %.2f \n", area_H04);
   printf("Quarta cidade - PIB: %.2f \n", pib_H04);
   printf("Quarta cidade - PONTOS TURÍSTICOS: %d \n\n\n", pontos_turisticos_H04);

        printf("OBRIGADO POR JOGAR SUPER TRUNFO!\n\n\n");
	 
         return 0;
}
