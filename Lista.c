#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	int i;
	char lancuch[1024];
	char ilosc[256] = { 0 };
	printf("Podaj lancuch znakow: ");
	fgets(lancuch, 1024, stdin);

	for (i = 0; i < strlen(lancuch); i++){
		ilosc[lancuch[i]]++;
	}
	for (i = 0; i < 256; i++) {
		printf("%c - %d\n", i, ilosc[i]);
	}
	
	
	
	/*Koniec zadania, można ewentualnie inaczej podpisać jakieś białe znaki, np:
	
	for (i = 0; i < 256; i++) {
		if (ilosc[i] != 0) {
			if (i == 10) {
				printf("ENTER - %d\n", ilosc[i]);
				continue;
			}
			if (i == 32) {
				printf("SPACJA - %d\n", ilosc[i]);
				continue;
			}
			printf("%c - %d\n", i, ilosc[i]);
		}
		 
	}
	*/
	system("PAUSE");
	return 0;
}
