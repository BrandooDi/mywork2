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
  int i, suma = 0, sumg = 0, sumf = 0;
    cout << "Введите оценки по алгебре:\n";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++) suma += A[i];
    cout << "Средняя оценка по алгебре:" << suma / n;
