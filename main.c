#include <stdio.h>
#include "calcul.h"

void main() {
	printf("Bienvenue sur calculator\n\n");

	char type;
	printf("Selectionnez votre mods:\n+ Addition\n- Soustraction\n* Multiplication\n/ Division\n");
	scanf("%c", &type);

	switch (type) {
	case '+':
		addition();
		break;
	case '-':
		soustraction();
		break;
	case '*':
		multiplication();
		break;
	case '/':
		division();
		break;
	}
}