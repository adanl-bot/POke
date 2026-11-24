#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cstdlib>
#define Total_pokemons 100
#define equipe_max 5
using namespace std;

void mochila(string pokemon_equipe[]){
    int  say=0,atual=0;
    while (say <= equipe_max){
cout << pokemon_equipe[atual] << endl;
say++;
atual++;
}
/*
int mac;
while (mac!=67){
cout << "escolha um pokemon entre os seus da mochila(1 a 6): " << endl;
cin >> mac;
if (mac<=6){
cout << pokemon_equipe[mac-1] << endl;} 
else {cout << "não tem esse pokemon na sua mochila!";}
}
*/
}
int main() {

random_device ale1;
uniform_int_distribution<> pokemontab(1, 100);
int total = 0, qual,equipe=0,atual=0,ao=0;

ifstream h; 
h.open("pokemon.txt");
string linha, V[Total_pokemons], pokemon_equipe[equipe_max];

while (getline(h, linha)) { 
V[total]=linha;
total++;
}

while (equipe <= equipe_max){
pokemon_equipe[atual] = V[pokemontab(ale1)];
equipe++;
atual++;
}

cout << "|         Poketmon          |"<< endl <<
"|          (menu)           |"<< endl <<
"|                           |"<< endl <<
"|1- mochila                 |"<< endl <<
"|2- ginasio                 |"<< endl <<
"|3- centro Poketmon         |"<< endl <<
"|4- insignias               |"<< endl <<
"|0- sair do jogo            |"<< endl <<
"|                           |"<< endl <<
"|                           |"<< endl;
cin >> ao;
if (ao == 1){
    mochila(pokemon_equipe);
    system ("cis || clear");
}


return 0;
}

