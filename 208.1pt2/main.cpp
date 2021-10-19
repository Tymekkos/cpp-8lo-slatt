#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lowest = 999;
int highest = 0;
int pomiary[14];

int main()
{
    srand(time(NULL));
    for(int i=0; i<14; i++)
    {
        pomiary[i] = rand()%100;

        cout <<pomiary[i]<< endl;
    }

    for(int j=0; j<14; j++)
    {
        if(pomiary[j] > highest)
        {
            highest = pomiary[j];
        }
        else if(pomiary[j] < lowest)
        {
            lowest = pomiary[j];
        }
    }
    cout << "najwieksza: " << highest << " najmniejsza: " << lowest;
    return 0;
}
