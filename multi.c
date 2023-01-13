#include <stdio.h>


float eingabeZahl() {

	float zahl;
	printf("Zahl:\n");
	scanf("%f", &zahl);
	return zahl;
}

float multipliziere (float zahl1, float zahl2) {

	float ergebnis;
	ergebnis = zahl1 * zahl2;
	return ergebnis;

}


int main () {

float zahl1 = eingabeZahl();
float zahl2 = eingabeZahl();
float ergebnis = multipliziere(zahl1, zahl2);

printf("Das Ergebnis der Multiplikation ist %.2f \n", ergebnis);

return 0;

}
	
