#include <iostream>
using namespace std;

class Etudiant
{
    public:
        string nom;
        float note1;
        float note2;

        Etudiant (string name, float n1, float n2)
        {
            nom = name;
            note1 = n1;
            note2 = n2;
        }

        float calculMoyenne()
        {
           return (note1 + note2) / 2; 
        }

        bool admis()
        {
            return (calculMoyenne() >= 10);
        }
        
        void afficher ()
        {
            float moyenne = calculMoyenne ();
            cout << "NOM: "<< nom << " | Moyenne: " << moyenne << " | ";
            if (admis())
                cout << "Admis !" << endl;
            else 
                cout << "Ajournée ... " << endl;
        }  
}
;

int main ()
{
    Etudiant Alice ("Alice", 13, 17);
    Alice.afficher();
    Etudiant Benoit ("Benoit", 5, 5);
    Benoit.afficher();
    Etudiant karima ("Karima", 20, 10);
    karima.afficher();
}