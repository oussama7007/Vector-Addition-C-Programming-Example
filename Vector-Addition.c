#include <stdio.h>

void vector_addition(float v1[], float v2[], float results[], int n)
{
    for (int i = 0; i < n; i++)
    {
        results[i] = v1[i] + v2[i];
    }
}


int main()
{
    float v1[] = {1.0, 2.0, 3.0};
    float v2[] = {4.0, 5.0, 6.0};
    float results[3];
    vector_addition(v1, v2, results, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("results[%d] = %.1f\n", i, results[i]);
    }
    printf("\n");
    return 0;
}