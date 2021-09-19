#include <bits/stdc++.h>
using namespace std;

void stringToWords(string str)
{
    string word = "";
    for(auto x : str)
    {
        if (x == ' ')
        {
            for(int i=0; i<word.length( )-1; i+=2)
            {
                swap(word[i], word[i+1]);
            }
            cout << word << " ";
            word = "";
        }

        else {
            word = word + x;
        }
    }
    for(int i=0; i<word.length( )-1; i+=2)
    {
        swap(word[i], word[i+1]);
    }
    cout << word;
}

int main()
{
    string str;
    cout << "podaj zdanie ktore chcesz zamienic: ";
    getline(cin, str);
    stringToWords(str);
    return 0;
}
