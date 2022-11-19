// Tomas Santana. CI 30604530
#include <stdio.h>

void hanoi(int, char, char, char);

int main() {
    int n;
    printf("Ingrese el numero de discos: "); scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
// Inicio de la funcion recursiva
void hanoi(int n, char I, char H, char F) {
    // Caso que evita errores al introducir numeros de discos negativos.
    if (n<0) {
        printf("Numero de discos invalido");
        return;
    }
    // Caso base. Si no hay discos el problema se resuelve sin hacer nada.
    else if (n == 0) {
        return;
    }
    // Caso recursivo
    hanoi(n-1, I, F, H); // Mover n-1 discos al medio
    printf("Mueva un disco de %c hasta %c.\n", I, F); // Mover el disco mas grande al final
    hanoi(n-1, H, I, F); // Mover n-1 discos al final
}