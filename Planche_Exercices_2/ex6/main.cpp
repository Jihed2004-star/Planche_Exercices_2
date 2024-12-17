#include <iostream>
#include <random>

using namespace std;

void cone(int n, int nombreBoules) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib(0.0, 1.0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                if (nombreBoules > 0 && distrib(gen) < 0.5) {
                    cout << "O";
                    nombreBoules--;
                } else {
                    cout << "*";
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void tronc(int h, int n, int c) {
    int nbspace = ((c * 2 - 1) - n) / 2;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= nbspace; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) {
            cout << "|";
        }
        cout << "\n";
    }
}

int main() {
    int hauteurCone = 6;
    int hauteurTronc = 2;
    int largeurTronc = 3;
    int nombreBoules = 6;

    cone(hauteurCone, nombreBoules);
    tronc(hauteurTronc, largeurTronc, hauteurCone);

    return 0;
}
