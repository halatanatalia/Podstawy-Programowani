#include <iostream>
#include <string>

using namespace std;

class CzlowiekZnanyZWidzenia
{
    protected:
    string CechaCharakterystyczna;
    public:
    void setCechaCharakterystyczna (string cecha)
    {
        CechaCharakterystyczna = cecha;
    }
    string getCechaCharakterystyczna()
    {
        return this->CechaCharakterystyczna;
    }
};

class CzlowiekZnanyZImienia: public CzlowiekZnanyZWidzenia
{
    protected:
    string Imie;
    public: 
    void setImie (string imie)
    {
     Imie = imie;   
    }
    string getImie()
    {
        return this->Imie;
    }
};

class CzlowiekZnanyZInternetu
{
    protected:
    string GdziePoznany;
    string CzymZwrocilMojaUwage;
    public:
    void setGdziePoznany(string gdzie)
    {
        GdziePoznany=gdzie;
    }
    void setCzymZwrociMojaUwage(string czym)
    {
        CzymZwrocilMojaUwage = czym;
    }
    string getGdziePoznany()
    {
        return this->GdziePoznany;
    }
    string getCzymZwrocilMojaUwage()
    {
        return this->CzymZwrocilMojaUwage;
    }
};
  
class Zwierze
{
    protected: 
    string Imie;
    string Gatunek;
    public:
    void setImie(string imie)
    {
        Imie = imie;
    }
    static void pow()
    {
        cout<<"Slodziaczek"<<endl;
    }
    void setGatunek(string gatunek)
    {
        Gatunek = gatunek;
    }
    string getImie()
    {
        return this->Imie;
    }
    string getGatunek()
    {
        return this->Gatunek;
    }
};

class DobrzeZnanyKolega: public CzlowiekZnanyZImienia, public CzlowiekZnanyZInternetu
{
    protected:
    string SkadGoZnam;
    Zwierze ZwierzeDomowe;
    public:
    void setSkadGoZnam(string skad)
    {
        SkadGoZnam = skad;
    }
};


int main()
{
    DobrzeZnanyKolega Dawid;
    Dawid.setImie("Dawid");
    Dawid.setSkadGoZnam("Ze szkoly");
    Zwierze Simba;

    return 0;
}

/* zad.2
#include <iostream>
#include <cstring>

class Tekst
{
    const char *String;
    int size;
    
    public: 
    Tekst(){String = new char[0]; size = 0;}
    Tekst(const char *nTekst);
    ~Tekst(){delete[] String;};
    
    void setNewTekst(const char *noTekst);
    int getSize()const;
    
};

Tekst::Tekst(const char *nTekst)
{
    size = strlen(nTekst);
    delete[] String;
    String = new char[size + 1];
    strncpy((char*)String,nTekst, size+1);
}

void Tekst::setNewTekst(const char *noTekst)
{
    size = strlen(noTekst);
    delete[] String;
    String = new char[size + 1];
    strncpy((char*)String,noTekst, size+1);
}

int Tekst::getSize()const
{
    return size;
}

int main()
{


    return 0;
}

*/


