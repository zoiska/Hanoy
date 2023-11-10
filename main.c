#include <stdio.h>

void hanoy(int zahl, char von, char bis, char hilfe) {
    if(zahl == 1) {
        printf("Von %c nach %c\n", von, bis);
    } else {
        hanoy(zahl-1, von, hilfe, bis);
        printf("Von %c nach %c\n", von, bis);
        hanoy(zahl-1, hilfe, bis, von);
    }
}

int main() {
    int zahl;
    scanf("%d", &zahl);
    hanoy(zahl, 'A', 'B', 'C');
    return 0;
}

/*
 * Für zahl = 3
 *
 *   A     B     C
 *
 *   #     |     |
 *  ###    |     |
 * #####   |     |
 *
 *   |     |     |
 *  ###    |     |
 * #####   #     |
 *
 *   |     |     |
 *   |     |     |
 * #####   #    ###
 *
 *   |     |     |
 *   |     |     #
 * #####   |    ###
 *
 *   |     |     |
 *   |     |     #
 *   |   #####  ###
 *
 *   |     |     |
 *   |     |     |
 *   #   #####  ###
 *
 *   |     |     |
 *   |    ###    |
 *   #   #####   |
 *
 *   |     #     |
 *   |    ###    |
 *   |   #####   |
 */