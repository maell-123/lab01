#include <stdio.h>
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja).
};

int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    int posicion = 0;

    for (int i = 1; i < n; i++) {
        if (procesos[i].prioridad < procesos[posicion].prioridad) {
            posicion = i;
        }
    }

    return posicion;
}

int main() {
    struct Proceso procesos[5];
    int n;

    printf("Ingrese la cantidad de procesos (maximo 5): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nProceso %d\n", i + 1);

        printf("PID: ");
        scanf("%d", &procesos[i].pid);

        printf("Nombre: ");
        scanf("%19s", procesos[i].nombre);

        printf("Prioridad (1-5): ");
        scanf("%d", &procesos[i].prioridad);
    }

int posicion = buscarMayorPrioridad(procesos, n);

    printf("\nProceso de mayor prioridad:\n");
    printf("PID: %d\n", procesos[posicion].pid);
    printf("Nombre: %s\n", procesos[posicion].nombre);
    printf("Prioridad: %d\n", procesos[posicion].prioridad);

    return 0;
}


