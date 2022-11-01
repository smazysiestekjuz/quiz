#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna [5];

int main()
{
    int nr_linii=1;
    string linia

    fstream plik;
  //otwarcie pliku do oczytu
    plik.open("quiz.txt",ios::in);

    if (plik.good()==flase)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia;         break;
            case 2: nick=linia;          break;
            case 3: tresc[0] = linia;    break;
            case 4: odpA[0] = linia;     break;
            case 5: odpB[0] = linia;     break;
            case 6: odpC[0] = linia;     break;
            case 7: odpD[0] = linia;     break;
            // poprawna odpowiedz na zadane pytanie
            case 8: poprawna[0] = linia; break;
        }


        nr_linii++;
    }


    return 0;
}
