#include <iostream>
using namespace std;

int main()
{
    int a, b, h, wybor, pole;

    cout << endl;
    cout << "menu głowne " << endl;
    cout << "------------------" << endl;
    cout << "jakiej figury chcesz obliczyc pole powierzchni" << endl;
    cout << "1 kwadratu ";
    cout << "  2 trojakata";

    cout << " wybierz: ";
    cin >> wybor;
    switch (wybor)
    {
    case 1:

    {
        cout << "podaj bok a: ";
        cin >> a;
        cout << "podaj bok b: ";
        cin >> b;
        pole = a * b;
        cout << "pole prostokata wynosi: " << pole;
        break;
    }
    case 2:
    {
        cout << "podaj podstawe: ";
        cin >> a;
        cout << "podaj wysokosc opuszczona na podstawe a : ";
        cin >> h;
        pole = a * h / 2;
        cout << "pole trojkata wynosi: " << pole;
        break;
    }
    case 3:
    {
        if

            (wybor > 2)
            cout << "mamy tylko dwa działania";
    }
    }

    return 0;
}
