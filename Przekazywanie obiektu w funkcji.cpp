#include <iostream>
#include <conio.h>

using namespace std;

class Pracownik {
public:
    string imie;
    string nazwisko;
    void wyswietlDane(){
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
};

Pracownik *pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);

int main()
{
    Pracownik *w_pracownik = new Pracownik();
    w_pracownik = pobierzDane(w_pracownik);
    wyswietlDane(w_pracownik);
    delete w_pracownik;

    return 0;
}

Pracownik* pobierzDane(Pracownik *w_p){
    cout <<"Imie: "; cin >>w_p->imie;
    cout << "Nazwisko: "; cin >>w_p->nazwisko;
    return w_p;
}

void wyswietlDane(const Pracownik *w_p){
    cout << "Imie: " << w_p->imie << endl;
    cout << "Nazwisko: " << w_p->nazwisko << endl;
}
