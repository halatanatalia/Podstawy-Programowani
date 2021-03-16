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

/*

