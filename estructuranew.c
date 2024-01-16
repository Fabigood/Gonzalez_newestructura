#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};


void ingresarDatos(struct alumno *alumno) {
    printf("Ingrese la matricula: ");
    scanf("%d", &alumno->matricula);

    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(alumno->nombre);

    printf("Ingrese la direccion: ");
    fflush(stdin);
    gets(alumno->direccion);

    printf("Ingrese la carrera: ");
    fflush(stdin);
    gets(alumno->carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &alumno->promedio);
}


void mostrarDatos(struct alumno *alumno) {
    printf("\nMatricula: %d\n", alumno->matricula);
    printf("Nombre: %s\n", alumno->nombre);
    printf("Direccion: %s\n", alumno->direccion);
    printf("Carrera: %s\n", alumno->carrera);
    printf("Promedio: %.2f\n", alumno->promedio);
}

int main() {
    int n;

    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    struct alumno *alumnos = (struct alumno *)malloc(n * sizeof(struct alumno));

    
}
