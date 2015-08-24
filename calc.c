#include <stdio.h>

float divin(float a, float b){
	float div = 0;
	return div = a/b;
}

float in(float a, float b, float ina, float inb){
	return (a/b)*((ina/a)+(inb/b));
}



main(){

	float a;
	float b;
	float inA;
	float inB;
	printf("valor de A: \n");
	scanf("%f", &a);
	printf("valor de incert A: \n");
	scanf("%f", &inA);
	printf("valor de B: \n");
		scanf("%f", &b);
	printf("valor de incert B: \n");
		scanf("%f", &inB);

	float division = divin(a, b);
	float masmenos = in(a, b, inA, inB);

	printf("Resultado: %f +- %f\n", division, masmenos);
}
