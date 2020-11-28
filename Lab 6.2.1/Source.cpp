// Ітераційний спосіб
// 24 варіант
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;


void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
void Sort(int* a, const int size) 
{
    for (int i = 1; i < size; i++) 
        for (int j = 0; j < size - i; j++) 
            if (a[j] < a[j + 1]) 
            { 
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];

    int Low = -20;
    int High = 37;
    cout << "Початковий массив" << endl;
    Create(a,n,Low,High);
    Print(a, n);
    cout << endl;
    cout << "Впорядкований массив" << endl;
    Sort(a, n);
    Print(a, n);
    cout << endl;
    return 0;
}