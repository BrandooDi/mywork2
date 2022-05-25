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
 cout << "Введите оценки по геометрии:\n";
    for (i = 0; i < n; i++)
        cin >> G[i];
    for (i = 0; i < n; i++) sumg += G[i];
    cout << "Средняя оценка по геометрии:" << sumg / n;
    cout << "Введите оценки по физике:\n";
    for (i = 0; i < n; i++)
        cin >> F[i];
for (i = 0; i < n; i++) sumf += F[i];
    cout << "Средняя оценка по физике:" << sumf / n;
    if (suma / n > sumg / n)
    {
        if (suma / n > sumf / n)
cout << "Наилучший предмет: Алгебра";
        else
            cout << "Наилучший предмет:Физика";
    }
    else
        if (suma / n < sumg / n)
        {
            if (sumg / n < sumf / n)
                cout << "Наилучший предмет:Физика";
