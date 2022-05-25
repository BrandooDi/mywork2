#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int *A;
    int *G;
    int *F;
    A = (int*)malloc(n * sizeof(int));
    G= (int*)malloc(n * sizeof(int));
    F = (int*)malloc(n * sizeof(int));
