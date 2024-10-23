#include <iostream>
using namespace std;

class Voiture{
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;
public:
// Constructeur par défaut
Voiture(): marque("Default"), modele("Default"), annee(0), kilometrage(0.0), vitesse(0.0){}

// Constructeur avec paramètres
Voiture(string marque1, string modele1, int anne1, float km1, float vitesse1):
marque(marque1), modele(modele1), annee(anne1), kilometrage(km1), vitesse(vitesse1){}

// Méthode accelerer
void accelerer(float valeur) {
    vitesse+= valeur;
}

// Méthode freiner
void freiner(float valeur) {
    if (vitesse-valeur < 0)
        vitesse= 0;
    else
        vitesse-= valeur;
}

//Méthode afficherInfo()
void afficherInfo() const {
    cout << "Marque: " << marque << ", Modele: " << modele << ", Annee: " << annee << ", Kilometrage: " << kilometrage << " km, Vitesse: " << vitesse << " km/h" << endl;
}

// Avancer method
void avancer(float distance) {
    kilometrage+= distance;
}

// Destructor
~Voiture() {
    cout << "La voiture " << marque << " est detruite." << endl;
}
};
int main(){
    Voiture voiture1("Lincoln", "Continental", 2024, 10000, 240);
    voiture1.accelerer(20);
    voiture1.avancer(150);
    voiture1.freiner(50);
    voiture1.afficherInfo();
    return 0;
}
