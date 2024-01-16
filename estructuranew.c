#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void ingresarDatos(struct alumno *alumno) {
    printf("Ingrese la matricula: ");
    scanf("%d", &alumno->matricula);

    limpiarBuffer();

    printf("Ingrese el nombre: ");
    fgets(alumno->nombre, sizeof(alumno->nombre), stdin);
    alumno->nombre[strcspn(alumno->nombre, "\n")] = '\0';

    printf("Ingrese la direccion: ");
    fgets(alumno->direccion, sizeof(alumno->direccion), stdin);
    alumno->direccion[strcspn(alumno->direccion, "\n")] = '\0';

    printf("Ingrese la carrera: ");
    fgets(alumno->carrera, sizeof(alumno->carrera), stdin);
    alumno->carrera[strcspn(alumno->carrera, "\n")] = '\0';

    printf("Ingrese el promedio: ");
    scanf("%f", &alumno->promedio);
}

void mostrarDatos(struct alumno *alumno) {
    printf("\nMatricula: %d\n", alumno->matricula);
    printf("Nombre: ");
    puts(alumno->nombre);
    printf("Direccion: "); //se crea esta funcion para llmarla
    puts(alumno->direccion);
    printf("Carrera: ");
    puts(alumno->carrera);
    printf("Promedio: %.2f\n", alumno->promedio);
}


    return 0;
}
