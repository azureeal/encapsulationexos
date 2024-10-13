// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "StaticObject.h"
#include "Alive.h"
#include "AMovable.h"
#include "Entity.h"
#include "Vector2.h"
#include "IAttacker.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
int main()
{
    Vector2 position(1, 1);
    float maxhp = 10;
    float currenthp=maxhp;
    Vector2 u(12, 30);

    Player wellyes(position, maxhp, currenthp, u);
    Mob wellno(position, maxhp, currenthp, u);
    BreakableObject wellsortakinda(position, maxhp, currenthp);
    StaticObject wellerm(position);

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
