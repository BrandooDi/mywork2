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
    cout << "������� ������ �� �������:\n";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++) suma += A[i];
    cout << "������� ������ �� �������:" << suma / n;
 cout << "������� ������ �� ���������:\n";
    for (i = 0; i < n; i++)
        cin >> G[i];
    for (i = 0; i < n; i++) sumg += G[i];
    cout << "������� ������ �� ���������:" << sumg / n;
    cout << "������� ������ �� ������:\n";
    for (i = 0; i < n; i++)
        cin >> F[i];
for (i = 0; i < n; i++) sumf += F[i];
    cout << "������� ������ �� ������:" << sumf / n;
    if (suma / n > sumg / n)
    {
        if (suma / n > sumf / n)
cout << "��������� �������: �������";
        else
            cout << "��������� �������:������";
    }
    else
        if (suma / n < sumg / n)
        {
            if (sumg / n < sumf / n)
                cout << "��������� �������:������";
