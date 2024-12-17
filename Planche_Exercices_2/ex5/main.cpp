#include <iostream>
#include <random>

using namespace std;

int genererEntierAleatoire(int min, int max, mt19937& gen) {
    uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}

double genererReelAleatoire(double min, double max, mt19937& gen) {
    uniform_real_distribution<> distrib(min, max);
    return distrib(gen);
}

int main() {
    random_device rd;
    mt19937 gen(rd());

    cout << "Entiers aleatoires : ";
    for (int i = 0; i < 5; ++i) {
        int entier = genererEntierAleatoire(1, 100, gen);
        cout << entier << " ";
    }
    cout << endl;

    cout << "Réels aleatoires : ";
    for (int i = 0; i < 5; ++i) {
        double reel = genererReelAleatoire(0.0, 1.0, gen);
        cout << reel << " ";
    }
    cout << endl;

    return 0;
}
