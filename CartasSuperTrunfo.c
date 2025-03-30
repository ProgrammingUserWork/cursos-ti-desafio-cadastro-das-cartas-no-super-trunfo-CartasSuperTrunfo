#include <stdio.h>

int main() {
   
	//Aqui ficará armazenada as informações das variaveis da carta 1 que o usuario digitar conforme as funções printf e scanf
	char estado = 'X';//A variavel "char" coletará apenas uma(1) letra
	char codigo[5] = "X00";//A variavel "char" coletará três(3) caracteres 
	char cidade[25] = "XX";//A variavel "char" coletará um nome
	unsigned long int populacao = 00000;//A variavel "int" coletará um conjunto de digitos inteiros
	float area = 00000.00;//A variavel "float" coletará um conjunto de digitos com casas decimais
	float pib = 000.00;//A variavel "float" coletará um conjunto de digitos com casas decimais
	int pontosturisticos = 000;//A variavel "int" coletará um conjunto de digitos inteiros
 


	//Aqui ficará armazenada as informações das variaveis da carta 1 que o usuario digitar conforme as funções printf e scanf
	char estado2 = 'X';
	char codigo2[5] = "X00";
	char cidade2[25] = "XX";
	unsigned long int populacao2 = 00000;
	float area2 = 00000.00;
	float pib2 = 000.00;
	int pontosturisticos2 = 000;
  

	//Aqui ocorrerá a entrada de dados que o usuario digitar (Carta 1)
	printf("INSIRA AS INFORMAÇÕES DA (CARTA 1)\n\n");
	printf("1. Qual o estado? \nDica: Uma letra de (A a H)\n>");
	scanf("%c", &estado);//o "%c" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n2. Qual o código carta? \nDica: A letra digitada anteriormente, mais dois digitos de (01 a 04)\n>");
	scanf("%s", &codigo);//o "%s" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n3. Qual o nome da cidade? \nDica: Pode ser sua cidade :)\n>");
	scanf("%s", &cidade);//o "%s" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n4. Qual é a população dessa cidade? \n>");
	scanf("%d", &populacao);//o "%d" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n5. Qual é a área em quilômetros quadrados dessa cidade? \nDica: Veja no Google\n>");
	scanf("%f", &area);//o "%f" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n6. Qual é o Produto Interno Bruto(PIB) dessa cidade? \nDica: Colocar a informação em bilhões de reais\n>");
	scanf("%f", &pib);//o "%f" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida

	printf("\n7. Quantos pontos turísticos essa cidade possui? \n>");
	scanf("%d", &pontosturisticos);//o "%d" especifica o tipo de dado se espera que o usuário insira, enquanto "&" especifica qual variavel será lida



	//Aqui ocorrerá a entrada de dados que o usuario digitar (Carta 2)
	printf("\n\nAGORA, INSIRA AS INFORMAÇÕES DA (CARTA 2)\n\n");
	printf("2.1. Qual o estado? \nDica: Uma letra de (A a H)\n>");
	scanf(" %c", &estado2);

	   printf("\n2.2. Qual o código da carta? \nDica: A letra digitada anteriormente, mais dois digitos de (01 a 04)\n>");
	scanf(" %s", &codigo2);

	printf("\n2.3. Qual o nome da cidade? \nDica: Pode ser sua cidade vizinha :/\n>");
	scanf(" %s", &cidade2);

	printf("\n2.4. Qual é a população dessa cidade? \n>");
	scanf(" %d", &populacao2);

	printf("\n2.5. Qual é a área em quilômetros quadrados dessa cidade? \nDica: Veja no Google\n>");
	scanf(" %f", &area2);

	printf("\n2.6. Qual é o Produto Interno Bruto(PIB) dessa cidade? \nDica: Colocar a informação em bilhões de reais\n>");
	scanf(" %f", &pib2);

	printf("\n2.7. Quantos pontos turísticos essa cidade possui? \n>");
	scanf(" %d", &pontosturisticos2);


	//Aqui é onde se faz a media das informações inseridas para obter o resultado da "densidade populacional por km²" e "pib per capita"
	float denpopulacional = populacao / area;
	double pibpercapita = (double) pib / populacao;
	double superpoder = (double)populacao + area + pib + pontosturisticos + pibpercapita + (1/denpopulacional);

	float denpopulacional2 = populacao2 / area2;
	double pibpercapita2 = (double) pib2 / populacao2;
	double superpoder2 = (double)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/denpopulacional2);

	//Aqui exibirá as informações passadas pelo usuario as variaveis (Carta 1)
	printf("\n\n==============================Resultado da Carta 1==============================\n");

	printf("Estado: %c\n", estado);//o "%c" exibe um único caractere da variavel "estado"
	printf("Código da carta: %s\n", codigo);//o "%s" exibe uma cadeia (string) de caracteres da variavel "codigo"
	printf("Nome da cidade: %s\n", cidade);//o "%s" exibe uma cadeia (string) de caracteres da variavel "cidade"
	printf("População da cidade: %d\n", populacao);//o "%d" exibe um inteiro no formato decimal da variavel "populacao"
	printf("Área: %.2fkm²\n", area);//o "%.2f" exibe um número de ponto flutuante no formato padrão da variavel "area" enquanto o limita em um centésimo
	printf("PIB: %.2f bilhões de reais\n", pib);//o "%.2f" exibe um número de ponto flutuante no formato padrão da variavel "pib" enquanto o limita em um centésimo
	printf("Quantidade de pontos turísticos: %d\n", pontosturisticos);//o "%d" exibe um inteiro no formato decimal da variavel "pontosturisticos"
	printf("Densidade Populacional: %.2f hab/km²\n", denpopulacional);//o "%.2f" exibe um número de ponto flutuante no formato padrão da variavel "media" enquanto o limita em um centésimo
	printf("PIB per Capita: %.2f reais\n", pibpercapita);//o "%.2f" exibe um número de ponto flutuante no formato padrão da variavel "media1" enquanto o limita em um centésimo
	printf("Super Poder: %.2f \n", superpoder);

	//Aqui exibirá as informações passadas pelo usuario as variaveis (Carta 2)
	printf("\n\n==============================Resultado da Carta 2==============================\n");
  
	printf("Estado: %c\n", estado2);
	printf("Código da carta: %s\n", codigo2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("População da cidade: %d\n", populacao2);
	printf("Área: %.2fkm²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", denpopulacional2);
	printf("PIB per Capita: %.2f reais\n", pibpercapita2);
	printf("Super Poder: %.2f \n\n", superpoder2);

 //Comparação para definir; "Carta 1 venceu" ou "Carta 2 venceu" para cada atributo comparado
	int CartaGanhadorPopulacao = (populacao > populacao2) + (populacao < populacao2) *2;
	int CartaGanhadorArea = (area > area2) + (area < area2) *2;
	int CartaGanhadorPib = (pib > pib2) + (pib < pib2) *2;
	int CartaGanhadorPontosTuristicos = (pontosturisticos > pontosturisticos2) + (pontosturisticos < pontosturisticos2) *2;
	int CartaGanhadorDensidade = (1/denpopulacional > 1/denpopulacional2) + (1/denpopulacional < 1/denpopulacional2) *2;
	int CartaGanhadorPibPerCapita = (pibpercapita > pibpercapita2) + (pibpercapita < pibpercapita2) *2;
	int CartaGanhadorSuperPoder = (superpoder > superpoder2) + (superpoder < superpoder2) *2;

 //Comparação para definir; "(0)" ou "(1)" para cada atributo comparado
	int VerdadeiroFalsoPopulacao = populacao > populacao2;
	int VerdadeiroFalsoArea = area > area2;
	int VerdadeiroFalsoPib = pib > pib2;
	int VerdadeiroFalsoPontosTuristicos = pontosturisticos > pontosturisticos2;
	int VerdadeiroFlasoDensidadePopulacional = (1/denpopulacional) > (1/denpopulacional2);
	int VerdadeiroFalsoPibPerCapita = pibpercapita > pibpercapita2;
	int VeradeiroFalsoSuperPoder = superpoder > superpoder2;


 //Saida de dados imprimindo Carta "1" venceu ou Carta "2" venceu, seguida de verdadeiro ou falso "(1)" ou "(0)"
	printf("******************************Comparação de Cartas:******************************\n");
	printf("Populacao: Carta %d venceu (%d)\n", CartaGanhadorPopulacao, VerdadeiroFalsoPopulacao);
	printf("Area: Carta %d venceu (%d)\n", CartaGanhadorArea, VerdadeiroFalsoArea);
	printf("Pib: Carta %d venceu (%d)\n", CartaGanhadorPib, VerdadeiroFalsoPib);
	printf("Pontos Turisticos: Carta %d venceu (%d)\n", CartaGanhadorPontosTuristicos, VerdadeiroFalsoPontosTuristicos);
	printf("Densidade Populacional: Carta %d venceu (%d)\n", CartaGanhadorDensidade, VerdadeiroFlasoDensidadePopulacional);
	printf("Pib per Capita: Carta %d venceu (%d)\n", CartaGanhadorPibPerCapita, VerdadeiroFalsoPibPerCapita);
	printf("Super Poder: Carta %d venceu (%d)\n\n", CartaGanhadorSuperPoder, VeradeiroFalsoSuperPoder);

	//Aqui vai mostrar que o programa chegou ao fim de suas funções
	printf("\n>>Fim do programa<<\n\n");
  return 0;
}