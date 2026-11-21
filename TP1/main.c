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
    while (i < N)
    {
        printf("note: %.2f\n", T[i]);
        i++;
    }
}


float calculerMoyenne(float *T, int N)
{
    int i;
    float S;
    float M;
    i = 0;
    S = 0;
    if(T == NULL)
    {
        return (0);
    }  
        while(i < N)
{
        S = S + T[i];
            i++;
}
        return (S/N);
}

void minMaxNotes(float *T, int N, float *min, float *max)
{
    int i;

    if(min != NULL && max != NULL)
    {
        return;
    }
    
    *min = T[0];
    *max = T[0];
    
    while(i < N)
    {
        if(T[i] < *min)
        {
            *min = T[i];
        }
        if(T[i] > *max)
        {
            *max = T[i];
        }
        i++;
        }
    }
    
   
       int main()
{
    float T[4];
    int N;
    float min, max;
    N = 4;
    
    saisirNotes(T, N);
    afficherNotes(T, N);
    calculerMoyenne(T, N);
    minMaxNotes(T, N, &min, &max);
    afficherNotes(T, N);
    
    return (0);
}
    