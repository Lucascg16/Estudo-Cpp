#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    do
    {
        cout << "Digite um valor: \n";
        cin >> a;
        cout << "Digite um valor: \n";
        cin >> b;
        cout << "Digite um valor: \n";
        cin >> c;

        if (b + c > a && c + a > b && a + b > c)
        {
            if (a == b && b == c)
            {
                cout << "Triangulo equilátero \n";
            }
            else
            {
                if (a == b || a == c || c == b)
                {
                    cout << "Trangulo Isóceles \n";
                }
                else
                {
                    cout << "Triangulo escaleno \n";
                }
            }
        }
        else
        {
            cout << "Triangulo  impossivel \n";
        }
    } while ((a != 0) && (b != 0) && (c != 0));
}