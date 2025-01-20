#include <stdio.h>

int main() {

printf("Bem vindo ao Super Trunfo!\n");
printf("Regras: ao adicionar os valores de população, área e pib não use pontos ou virgulas.\n");

int codigo;
char nome[30];
long long int populacao;
long long int area;
long long int pib;
int turismo;

printf("Digite o código do país: ");
scanf("%d", &codigo);

printf("Digite o nome do país: ");
scanf("%s", &nome);

printf("Digite a população do país: ");
scanf("%lld", &populacao);

printf("Digite a área do país em quilômetros quadrados: ");
scanf("%lld", &area);

printf("Digite o PIB do país: ");
scanf("%lld", &pib);

printf("Digite o número de pontos turisticos do país: ");
scanf("%d", &turismo);


printf("\n\nCódigo: %d\n\n", codigo);
printf("Nome: %s\n\n", nome);
printf("População: %lld\n\n", populacao);
printf("Área: %lld\n\n", area);
printf("PIB: %lld\n\n", pib);
printf("Quantidade de pontos turisticos: %d\n", turismo);

return 0;   

}
