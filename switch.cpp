#include <iostream>
using namespace std;
int main()
{

    int day;
    cin >> day;
    switch (day)
    {

    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "tuesday\n";
        break;
    case 3:
        cout << "wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    default:
        cout << "not a valid day";
    }

    return 0;
}