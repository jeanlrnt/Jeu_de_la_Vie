// Jeu de la vie.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int main() {
    const int MAX = 25;

    bool tab[MAX + 2][MAX + 2];
    int voisins[MAX + 2][MAX + 2];
    int i, j, voisin, cpt, nbiteration, nbcases;

    cout << "Jeu de la vie\n";
    cout << "Combien de cases voulez vous remplir au lancement de la simulation ? ";
    cin >> nbcases;
    while(nbcases <= 0) {
        cout << "Erreur, le nombre doit etre positif : ";
        cin >> nbcases;
    }
    for(i = 1; i <= nbcases; i++) {
        tab[rand() % MAX][rand() % MAX] = true;
    }

    cout << "Combien d'iterations voulez vous ? ";
    cin >> nbiteration;
    while(nbiteration <= 0) {
        cout << "Erreur, le nombre doit etre positif : ";
        cin >> nbiteration;
    }
    cpt = 1;
    do {
        for(i = 1; i < MAX - 1; i++) {
            for(j = 1; j < MAX - 1; j++) {
                voisin = 0;
                if(i == 1) {
                    tab[i - 1][j] = tab[MAX - 1][j];
                }
                if(j == 1) {
                    tab[i][j - 1] = tab[i][MAX - 1];
                }
                if(i == MAX - 1) {
                    tab[i + 1][j] = tab[1][j];
                }
                if(j == MAX - 1) {
                    tab[i][j + 1] = tab[i][1];
                }
                if(tab[i - 1][j - 1] == true) {
                    voisin++;
                }
                if(tab[i][j - 1] == true) {
                    voisin++;
                }
                if(tab[i + 1][j - 1] == true) {
                    voisin++;
                }
                if(tab[i - 1][j] == true) {
                    voisin++;
                }
                if(tab[i + 1][j] == true) {
                    voisin++;
                }
                if(tab[i - 1][j + 1] == true) {
                    voisin++;
                }
                if(tab[i][j + 1] == true) {
                    voisin++;
                }
                if(tab[i + 1][j + 1] == true) {
                    voisin++;
                }
                voisins[i][j] = voisin;
            }
        }
        for(i = 1; i < MAX - 1; i++) {
            for(j = 1; j < MAX - 1; j++) {
                if(voisins[i][j] == 3) {
                    tab[i][j] = true;
                } else {
                    if(voisins[i][j] < 2) {
                        tab[i][j] = false;
                    } else {
                        if(voisins[i][j] > 3) {
                            tab[i][j] = false;
                        }
                    }
                }
            }
        }
        system("CLS");
        for(i = 1; i < MAX - 1; i++) {
            for(j = 1; j < MAX - 1; j++) {
                if(tab[i][j] == true) {
                    cout << " # ";
                } else {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cpt++;
    } while(cpt <= nbiteration);
    system("pause");
}