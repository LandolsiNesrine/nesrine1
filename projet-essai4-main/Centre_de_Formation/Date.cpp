#include "Date.h"

Date::Date(int j, int m, int a):jour(j),mois(m),annee(a)
{
}

Date::~Date(void)
{
}

void Date::afficher()
{
    cout << "le " << jour << "/" << mois << "/" << annee << endl;

}

void Date::saisirdate()
{
        cout<<"___________________saisir le jour";
        cout << "    " << endl;
        cin>>jour;
        cout<<"___________________saisir le mois";
        cout << "    " << endl;
        cin>>mois;
        cout<<"___________________saisir l'annee";
        cout << "    " << endl;
        cin>>annee;
    
}

void Date::operator=(const Date& d)
{
    jour = d.jour;
    mois = d.mois; 
    annee = d.annee; 
}

bool Date::operator==(const Date&d)
{
    return (jour == d.jour && mois == d.mois && annee == d.annee);
}
