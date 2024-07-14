#include <stdio.h>
#include <stdlib.h>

#define TAM 41

int generate_hash(int value) {
    int hash = 0;
    return value%TAM;
}

void insert(int tab[], int hash_result) {
    int id = 0;

    while (tab[id] != -1) {
        id++;
    }

    tab[id] = hash_result;
}

void initialize(int tab[]) {
    for (int index = 0; index < TAM; index++) {
        tab[index] = -1;
    }
}

int main() {

    int tab[TAM];

    initialize(tab);

    insert(tab, generate_hash(142));
    insert(tab, generate_hash(6576));
    insert(tab, generate_hash(435));
    insert(tab, generate_hash(3423));
    insert(tab, generate_hash(356));

    for (int index = 0; index < 100; index++) {
        printf("Index = %d\n", index);

        if (index == 0) {
            printf("Result = %d%d\n", tab[index], tab[index+1]);
        } else {
            printf("Result = %d%d\n", tab[index], tab[index-1]);
        }
    }

    EXIT_SUCCESS;
}