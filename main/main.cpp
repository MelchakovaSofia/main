#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;

        }
    }

    return true;
}
int main()
{
    int N, M;
    cout << "Введіть початок інтервалу (N): ";
    cin >> N;
    cout << "Введіть кінець інтервалу (M): ";
    cin >> M;
    cout << "Прості числа в інтервалі [" << N << "; " << M << "]: ";
    for (int i = N; i <= M; i++)
    {
        if (isPrime(i)) {
            cout << i << "";
        }
    }
    cout << endl;
    return 0;
}