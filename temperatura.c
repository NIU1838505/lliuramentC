#include <stdio.h>
int main(void) {
	int temperatura = 25;
	float fahrenheit = temperatura * 9.0 / 5 + 32;
	printf("Temperatura: %d graus\nFahrenheit: %.1f graus\n", temperatura, fahrenheit);
	return 0;
}

