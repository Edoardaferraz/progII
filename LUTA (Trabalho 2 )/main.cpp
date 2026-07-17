#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "Personagem.h"
#include "Campeao.h"
#include "Assassino.h"
#include "DeusTrovao.h"

using namespace std;

void mostrarPersonagens(vector<Personagem*> personagens) {

    cout << "\n=========== MORTAL KOMBAT ===========\n";

    for (int i = 0; i < personagens.size(); i++) {
        cout << i + 1 << " - " << personagens[i]->getNome() << endl;
    }

    cout << "=====================================\n";
}

int main() {

    srand(time(NULL));

    vector<Personagem*> personagens;

    // Assassinos
    personagens.push_back(new Assassino("Scorpion",100,25,8,"Spear",1.5));
    personagens.push_back(new Assassino("Sub-Zero",100,24,9,"Ice Ball",1.4));
    personagens.push_back(new Assassino("Kitana",95,23,8,"Steel Fan",1.4));
    personagens.push_back(new Assassino("Mileena",95,24,7,"Sai Attack",1.5));
    personagens.push_back(new Assassino("Kung Lao",100,24,8,"Hat Spin",1.5));
    personagens.push_back(new Assassino("Noob Saibot",100,26,7,"Shadow Clone",1.6));

    // Campeões 
    personagens.push_back(new Campeao("Liu Kang",100,25,8,"Flying Dragon Kick",1.4));
    personagens.push_back(new Campeao("Johnny Cage",100,23,8,"Shadow Kick",1.3));
    personagens.push_back(new Campeao("Shao Kahn",120,30,10,"Wrath Hammer",1.8));

    // Deus do Trovão 
    personagens.push_back(new DeusTrovao("Raiden",100,24,8,"Lightning Strike",1.6));

    mostrarPersonagens(personagens);

    int escolha;

    cout << "\nEscolha seu lutador: ";
    cin >> escolha;

    while(escolha < 1 || escolha > 10){
        cout << "Escolha invalida. Digite novamente: ";
        cin >> escolha;
    }

    Personagem* jogador = personagens[escolha-1];

    int inimigo;

    do{
        inimigo = rand() % personagens.size();
    }while(inimigo == escolha-1);

    Personagem* cpu = personagens[inimigo];

    cout << "\n=====================================\n";
    cout << "ROUND 1\n";
    cout << "FIGHT!\n";
    cout << "=====================================\n";

    while(jogador->estaVivo() && cpu->estaVivo()){

        cout << "\n---------------------------------\n";
        cout << jogador->getNome() << " HP: " << jogador->getVida() << endl;
        cout << cpu->getNome() << " HP: " << cpu->getVida() << endl;
        cout << "---------------------------------\n";

        cout << "\n1 - Ataque Normal";
        cout << "\n2 - Golpe Especial";
        cout << "\nEscolha: ";

        int opcao;
        cin >> opcao;

        int dano;

        if(opcao == 1){

            dano = jogador->getAtaque();

            cout << "\n" << jogador->getNome()
                 << " realizou um ataque normal!" << endl;

        }else{

            dano = jogador->executarGolpe();

        }

        cpu->receberDano(dano);

        if(!cpu->estaVivo())
            break;

        cout << "\nTurno do adversario...\n";

        if(rand()%2==0){

            dano = cpu->getAtaque();

            cout << cpu->getNome()
                 << " realizou um ataque normal!" << endl;

        }else{

            dano = cpu->executarGolpe();

        }

        jogador->receberDano(dano);
    }

    cout << "\n=====================================\n";

    if(jogador->estaVivo()){

        cout << "FINISH HIM!!\n";
        cout << "FATALITY!!\n\n";
        cout << jogador->getNome() << " VENCEU A BATALHA!\n";

    }else{

        cout << cpu->getNome() << " venceu a batalha!\n";

    }

    cout << "=====================================\n";

    for(Personagem* p : personagens){
        delete p;
    }

    return 0;
}