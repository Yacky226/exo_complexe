// exo_complexe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "complexe.h"
int main()
{
    Complexe c1(3, 4);
    Complexe c2(1, -2);
    double n = 4.0;
    // Affichage des nombres complexes
    std::cout << "c1: ";
    c1.Afficher();

    std::cout << "c2: ";
    c2.Afficher();

    // Test de la somme
    Complexe *somme = c1 + c2;
    std::cout << "c1 + c2 = ";
    somme->Afficher();

    Complexe* somme2 = c2 + n;
    std::cout << "c2 + " << n << "=";
    somme2->Afficher();

    Complexe* somme1 = n + c2;
    std::cout << n << " + c2 = ";
    somme1->Afficher();

    // Test de la multiplication
    Complexe *produit = c1 * c2;
    std::cout << "c1 * c2 = ";
    produit->Afficher();

    // Test de la division
    Complexe *division = c1 / c2;
    std::cout << "c1 / c2 = ";
    division->Afficher();

    // Test de l'égalité
    if (c1 == c2) {
        std::cout << "c1 et c2 sont egaux" << std::endl;
    }
    else {
        std::cout << "c1 et c2 ne sont pas egaux" << std::endl;
    }

    // Test du module
    std::cout << "Module de c1: " << c1.modul() << std::endl;

    // Test du conjugué
    Complexe conj;
    conj=c1.conjugue();
    std::cout << "Conjugue de c1: ";
    conj.Afficher();

    delete somme;
    delete somme1;
    delete somme2;
    delete produit;
    delete division;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
