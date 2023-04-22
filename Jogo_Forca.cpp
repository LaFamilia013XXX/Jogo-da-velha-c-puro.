#include <iostream>
#include <unistd.h>

using namespace std;

int main(){

    // VARIAVEIS DE CONTROLE;
    int qtd; // QUANTIDADES DE LETRAS;
    int point; // CADA ACERTO DE LETRA PELO JOGADOR DESAFIADO SERÁ COMPUTADO COMO POINT+=1, SE POINT == QTD, O JOGADOR GANHA O GAME;
    int teste; // SE A PALAVRA DIGITADA PELO JOGADOR DESAFIADO FOR DIFERENTE DE TODAS DA PALAVRA ESCOLHIDA PELO DESASAFIADOR, TESTE=+1;
    int chance;// CHANCES PARA ACERTAR A LETRA CORRETA;
    char opc;
    int e=0;
    int q=0;
    int letra_mais;

    // INICIO PROGRAMA;

    while(opc != 'n' or opc != 'N'){

        // DEFINIÇÃO DO QTD DE LETRAS;
        cout << "XXXXXXX Limite de do tamanho da palavra escrita e - 12 XXXXXXXX" << endl << endl;
        cout << "Digite a quantidade de letras da palavra escolhida: ";
        cin >> qtd;
        letra_mais=1;
        system("cls");
        if(qtd > 12 or qtd <=1){
            while(qtd > 12 or qtd <=1){
                cout << "Por favor escolha uma palavra com um valor igual ou abaixo de 12 letras our superior a 1 letra: ";
                cin >> qtd;
                system("cls");
            }
        }
        if(qtd <=3){
            chance =4;
        }
        else if(qtd>=4 and qtd<=5){
            chance=7;
        }
        else if(qtd>=6 and qtd<=8){
            chance=10;
        }
        else if(qtd>=9 and qtd<=12){
            chance=14;
        }

        // VARIAVEIS DE ARMAZENAMENTO;
        string palavra_escolhida[qtd];
        string palavra_final[qtd];
        string letra_escolhida;
        string letra_armazenada[qtd];
        string letra_error[qtd];

        while(true){

    // PREENCHENDO VARIVAVEIS COM "_";
        for(int i=0; i<qtd; i++){
            palavra_escolhida[i]="_";
            palavra_final[i]="_";
        }

    for(int i=0; i<qtd; i++){
        cout << palavra_escolhida[i] << " ";

    } cout << endl;

    // DEFININDO A PALAVRA ESCOLHIDA;
        for(int i=0; i<qtd; i++){

            cout << "--------- NAO PODE CONTER ACENTO -------" << endl;
            cout << "Digite letra por letra da palavra escolhida: ";
            cin >> palavra_escolhida[i];

            system("cls");

            for(int i=0; i<qtd; i++){
                cout << palavra_escolhida[i] << " ";
            }   cout << endl;
        }

        for(int i=0; i<5; i++){
            cout << "Carregando";
            system("cls");
            cout << "Carregando.";
            system("cls");
            cout << "Carregando..";
            system("cls");
            cout << "Carregando...";
            system("cls");

        }

        cout << "Palavra gravada com sucesso...";
        sleep(4);

        system("cls");

        cout << "Vire o seu notebook para o seu colega!";
        sleep(3);
        system("cls");

        break;

    }

    // INICIO DO JOGO;

    while(true){
        teste=0;
        cout << ">>>>>>> BEM-VINDO DESAFIADO! <<<<<<<" << endl << endl;
        cout << "Voce tem " << chance << " tentativas de descobrir essa palavra!" << endl << endl;

        cout << "Tente adivinha-la" << endl << endl;

        for(int i=0; i<qtd; i++){
            cout << palavra_final[i];
        } cout << endl << endl;

        // EXIBINDO LETRAS JÁ DIGITADAS PELO USUÁRIO;

        cout << "Digite uma letra: ";
        cin >> letra_escolhida;

        // ARMAZENANDO A LETRA DIGITADA DO USUARIO EM UM VETOR;



        system("cls");

        // VERIFICANDO SE A LETRA DO DESAFIADO, SE ENCONTRA NA PALAVRA ESCOLHIDA PELO DESAFIADOR;
        for(int i=0; i<qtd; i++){
            if(letra_escolhida == palavra_escolhida[i] and letra_escolhida != letra_armazenada[i]){
                palavra_final[i]=letra_escolhida;
                letra_armazenada[i]=letra_escolhida;
                point+=1;
            }

            else if(letra_escolhida != palavra_escolhida[i]){
                teste+=1;
                if(teste >= qtd){
                    chance=chance-1;
                }
            }

        }

        for(q; q<e; q){
            letra_armazenada[q]=letra_escolhida;
            q+=1;
            break;
        }

        if(point == qtd){
            cout << "Parabens!!!!!" << endl;
            cout << "Voce ganhou game!";
            sleep(3);
            system("cls");
            break;
        }
        if(chance == 0){
            cout << "Que pena!!" << endl;
            cout << "Voce perdeu o game :\!!";
            sleep(3);
            system("cls");
            break;
        }

    }


    // REINICIANDO AS VÁRIAVEIS;
    qtd=0;;
    point=0;
    teste=0;
    chance=0;
    letra_mais=0;
    e=0;

    system("cls");

    cout << "Deseja continuar o game?: ";
    cin >> opc;

    system("cls");


    if(opc == 's' or opc == 'S'){
    }
    else if( opc == 'n' or opc == 'N')
        break;
    }




    return 0;
}
