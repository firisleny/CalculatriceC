#include <stdio.h>
#include "calcul.h"

void addition() {
	printf("Vous avez choisie le mods addition\n\n");

	int chiffreUn;
	int chiffreDeux;

	printf("Veuillez entre votre premier chiffre : ");
	scanf("%d", &chiffreUn);
	printf("Veuillez entre votre deuxieme chiffre : ");
	scanf("%d", &chiffreDeux);

	printf("\nLe resultat de %d + %d est de %d", chiffreUn, chiffreDeux, ( chiffreUn + chiffreDeux ));
}

void soustraction() {
	printf("Vous avez choisie le mods soustraction\n");

	int chiffreUn;
	int chiffreDeux;

	printf("Veuillez entre votre premier chiffre : ");
	scanf("%d", &chiffreUn);
	printf("Veuillez entre votre deuxieme chiffre : ");
	scanf("%d", &chiffreDeux);

	printf("\nLe resultat de %d - %d est de %d", chiffreUn, chiffreDeux, (chiffreUn - chiffreDeux));
}

void multiplication() {
	printf("Vous avez choisie le mods multiplication\n");

	int chiffreUn;
	int chiffreDeux;

	printf("Veuillez entre votre premier chiffre : ");
	scanf("%d", &chiffreUn);
	printf("Veuillez entre votre deuxieme chiffre : ");
	scanf("%d", &chiffreDeux);

	printf("\nLe resultat de %d * %d est de %d", chiffreUn, chiffreDeux, (chiffreUn * chiffreDeux));
}

void division() {
	printf("Vous avez choisie le mods division\n");

	int chiffreUn;
	int chiffreDeux;

	printf("Veuillez entre votre premier chiffre : ");
	scanf("%d", &chiffreUn);
	printf("Veuillez entre votre deuxieme chiffre : ");
	scanf("%d", &chiffreDeux);

	printf("\nLe resultat de %d / %d est de %d", chiffreUn, chiffreDeux, (chiffreUn / chiffreDeux));
}