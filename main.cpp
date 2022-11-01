#include <iostream>
#include <fstream>
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


    return 0;
}
