#include <stdio.h>

int main() {
    int n;
//le digo que hace el programa al usuario.
    printf("Insterte numeros y yo se los mostrare en el orden que me los dio y al reves\n");
//le pido cuantos numeros para asignar el tamaño del array de n espacios.
    printf("Cuantos numeros va a insertar?\n");
    scanf("%d", &n);
//asigno el tamaño del array
    int numeros[n];
//pido los numeros uno por uno
    for (int i = 0; i < n; i++) {
        printf("Inserte los numeros uno por uno:\n");
        scanf("%i", &numeros[i]);
    }
    //Muestro Resulatados
    printf("Aqui estan los numeros en el orden que los insertaste\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Aqui estan los numeros en el orden contrario a como lo insertaste\n");
    for(int i = n; i > 0; i--){
        printf("%d ", numeros[i-1]);
    }
    return 0;
}