#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int ile;
    cout << "ile wyrazow chcesz posortowac? ";
    cin >> ile;

    string wyrazy[ile];

    cout << "Podaj "<< ile << " wyrazow:";

    for(int i=0; i<ile; i++)
    {
        cin >> wyrazy[i];
    }

    sort( wyrazy, wyrazy+ile );

    cout << "Elementy posortowane:" << endl;
    for(int i=0; i<ile; i++)
    {
        cout << wyrazy[ i ] << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}
