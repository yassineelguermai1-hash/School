#include <stdio.h>

void saisirNotes(float *T, int N) {
    int i;
    for (i = 0; i < N; i++) {
        do {
            printf("Entrez la note de l'etudiant %d (entre 0 et 20) : ", i + 1);
            scanf("%f", T + i);
            if (*(T + i) < 0 || *(T + i) > 20) {
                printf("Note invalide. Veuillez recommencer.\n");
            }
        } while (*(T + i) < 0 || *(T + i) > 20);
    }
}

void afficherNotes(float *T, int N) {
    int i;
    printf(" Liste des notes\n");
    for (i = 0; i < N; i++) {
        printf("Note %d : %.2f\n", i + 1, *(T + i));
    }
}

float calculerMoyenne(float *T, int N) {
    int i;
    float somme = 0;
    for (i = 0; i < N; i++) {
        somme += *(T + i);
    }
    return (N > 0) ? (somme / N) : 0;
}

void minMaxNotes(float *T, int N, float *min, float *max) {
    int i;
    if (N <= 0) return;
    
    *min = *T;
    *max = *T;
    
    for (i = 1; i < N; i++) {
        if (*(T + i) < *min) {
            *min = *(T + i);
        }
        if (*(T + i) > *max) {
            *max = *(T + i);
        }
    }
}

void trierNotes(float *T, int N) {
    int i, j, minix;
    float temp;

    for (i = 0; i < N - 1; i++) {
        minix = i;
        for (j = i + 1; j < N; j++) {
            if (*(T + j) < *(T + minix)) {
                minix = j;
            }
        }
        if (minix != i) {
            temp = *(T + i);
            *(T + i) = *(T + minix);
            *(T + minix) = temp;
        }
    }
}

int main() {
    int N;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &N);

    if (N <= 0) {
        return 1;
    }

    float T[N];

    saisirNotes(T, N);
    afficherNotes(T, N);

    float moyenne = calculerMoyenne(T, N);
    printf("\nMoyenne de la classe : %.2f\n", moyenne);

    float min, max;
    minMaxNotes(T, N, &min, &max);
    printf("Note minimale : %.2f\n", min);
    printf("Note maximale : %.2f\n", max);

    trierNotes(T, N);
    printf("\nNotes apres le tri par selection (ordre croissant) :\n");
    afficherNotes(T, N);

    return 0;
}