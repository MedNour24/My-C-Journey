#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED
#include <string>

using namespace std;

class compte {
private:
    int numCompte;
    string nomProprietaire;
    double sold;
    static double taux;

public:
    int getNumCompte() const {return numCompte;}
    string getNomProprietaire() const;
    double getSolde() const;
    static double getTaux();

    void setNumCompte(int num);
    void setNomProprietaire(string nom);
    void setSolde(double s);
    static void setTaux(double t);

    void saisir();
    bool retirerArgent(double montant);
    void deposerArgent(double montant);
    void consulterSolde() const;
    bool transfererArgent(Compte& autreCompte, double montant);
    void afficher() const;
};


};


#endif // COMPTE_H_INCLUDED
