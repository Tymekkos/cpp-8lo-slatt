#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[10][10];
    int tab1[100];
    cout << "tablica nieposortowana" << endl;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tab[i][j] = rand()%100+1;
            cout << tab[i][j] << "\t";
        }
        cout<<endl;
    }

    int k=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tab1[k] = tab[i][j];
            k++;
        }
        cout << endl;
    }
    cout << "tablica posortowana" << endl;
    for(int a=0; a<100; a++){
        sort(tab1, tab1+100);
        cout << tab1[a] << "\t";
    }

    return 0;
}
