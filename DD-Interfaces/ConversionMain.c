#include "conversion.h"


int main() {
    float empezar, terminar, i;
    
    printf("Ingrese la temperatura inicial en grados Fahrenheit: ");
    scanf("%f", &empezar );
    
    printf("Ingrese la temperatura final en grados Fahrenheit: ");
    scanf("%f", &terminar);
    
    printf("Ingrese el paso de incremento: ");
    scanf("%f", &i);
    
    printf("\nTabla de conversión de Fahrenheit a Celsius:\n");
    printf("--------------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    printf("--------------------------------------------\n");
    
    for (float fahrenheit = empezar; fahrenheit <= terminar; fahrenheit += i) {
        float celsius = fahrenheitACelsius(fahrenheit);
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }
    
    return 0;
}