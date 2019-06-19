#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
	
	int i, x = 0;
	
	printf ("\n\n******************** PROGRAMA PARA GERAR NUMEROS DA MEGA-SENA ********************\n\n\n");
	
	srand (time (NULL));
	
	printf ("\tEscolha quantos numeros deseja apostar:\n\n1. 6 numeros\n2. 7 numeros\n3. 8 numeros\n4. 9 numeros\n5. 10 numeros\n");
	printf ("6. 11 numeros\n7. 12 numeros\n8. 13 numeros\n9. 14 numeros\n10. 15 numeros\n\n\n");
	
	printf ("Digite o numero correspondente ao valor desejado: ");
	scanf ("%d", &x);
	
	printf ("\n\n");
	
	printf ("\tOs %d numeros aleatorios gerados sao: \n\n", x+5);
	
		switch (x) {	
			case 1:
				for (i = 1; i <= 6; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i)
						continue;
				}
				break;
			case 2:
				for (i = 1; i <= 7; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 3:
				for (i = 1; i <= 8; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 4:
				for (i = 1; i <= 9; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 5:
				for (i = 1; i <= 10; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 6:
				for (i = 1; i <= 11; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 7:
				for (i = 1; i <= 12; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 8:
				for (i = 1; i <= 13; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 9:
				for (i = 1; i <= 14; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
			case 10:
				for (i = 1; i <= 15; i++) {
					printf ("\t%d ", rand () %60);
					if (i == i) 
						continue;
				}
				break;
				default:
					printf ("Valor invalido!\n");
					break;	
		}
	
	return 0;
}
