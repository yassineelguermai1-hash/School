#include <stdio.h>

void saisirNotes(float *T, int N)
{
    int i;

    i = 0;
    while (i < N)
    {
        printf("entre la note %d : ", i);
        scanf("%f", &T[i]);
        if (T[i] < 0 || T[i] > 20)
            printf("repeter \n ");
        else 
            i++;

    }
    
}

void afficherNotes(float *T, int N)
{
    int i;
    i = 0;
    while(i < N)
    {
        printf("note: %.2f\n", T[i]);
        i++;

    }
    
}

float calculerMoyenne(float *T, int N) {

}

void minMaxNotes(float *T, int N, float *min, float *max) {

}

void trierNotes(float *T, int N) {

}

int main() {
    float T[4];
    int N;
    N = 4;
    saisirNotes(T, N);
    afficherNotes(T, 4);
    return (0);
}   