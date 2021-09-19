#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void wait(int seconds){
  clock_t endwait;
  endwait=clock()+seconds*CLOCKS_PER_SEC;
  while(clock()<endwait){}
}

int inizio(){
    cout << "==================================" << endl;
    cout << "Scegli che lattine vuoi acquistare" << endl;
    cout << "==================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");
    }

int scaffale(){
    int scaffale=0;
    srand(time(NULL));
    scaffale=rand()%1+6;

    cout << "Ecco lo scaffale con tutte le lattine presenti" << endl;

    cout << "!==========================================!" << endl;
    cout << "|  _      _      _      _      _      _    |" << endl;
    cout << "| |1|    |2|    |3|    |4|    |5|    |6|   | " << endl;
    cout << "| |_|    |_|    |_|    |_|    |_|    |_|   |" << endl;
    cout << "!==========================================!" << endl;
    cout << "!==========================================!" << endl;
    cout << "|  _      _      _      _      _      _    |" << endl;
    cout << "| |7|    |8|    |9|    |0|    |1|    |2|   | " << endl;
    cout << "| |_|    |_|    |_|    |_|    |_|    |_|   |" << endl;
    cout << "!==========================================!" << endl;
    cout << "!==========================================!" << endl;
    cout << "|  _      _      _      _      _      _    |" << endl;
    cout << "| |3|    |4|    |5|    |6|    |7|    |8|   | " << endl;
    cout << "| |_|    |_|    |_|    |_|    |_|    |_|   |" << endl;
    cout << "!==========================================!" << endl;
    cout << "| |          | |           | |           | |" << endl;
    wait (5);
    system("CLS");
}

int prezzo=0;

int elaborazione(){
    int nlattina;
    string lattine[17];
    int altezza=0, raggio=0;
    cout << "================================================================" << endl;
    cout << "Scrivi il numero della lattina di cui vuoi ottenere informazioni" << endl;
    cout << "Numero della lattina: " << endl;
    cin >> nlattina;
    cout << "================================================================" << endl;
    wait (3);
    system("CLS");

    lattine[0]="Mais";
    lattine[1]="Tonno";
    lattine[2]="Fagioli";
    lattine[3]="Spinaci";
    lattine[4]="Mais";
    lattine[5]="Tonno";
    lattine[6]="Fagioli";
    lattine[7]="Spinaci";
    lattine[8]="Mais";
    lattine[9]="Tonno";
    lattine[10]="Fagioli";
    lattine[11]="Spinaci";
    lattine[12]="Mais";
    lattine[13]="Tonno";
    lattine[14]="Fagioli";
    lattine[15]="Spinaci";
    lattine[16]="Mais";
    lattine[17]="Tonno";

    altezza=rand()%10+15;
    raggio=rand()%5+9;
    prezzo=rand()&1+5;


    if(nlattina=1){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[0];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=2){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[1];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=3){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[2];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=4){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[3];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=5){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[4];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=6){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[5];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=7){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[6];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=8){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[7];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=9){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[8];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=10){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[9];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=11){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[10];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=12){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[11];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=13){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[12];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=14){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[13];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=15){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[14];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=16){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[15];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=17){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[16];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo<< endl;
        cout << "====================================================================" << endl;

    } else if(nlattina=18){
        cout << "====================================================================" << endl;
        cout << "Contenuto             Altezza             Raggio             Prezzo" << endl;
        cout << lattine[17];
        cout <<           "                  " << altezza;
        cout <<                                "                  " << raggio;
        cout <<                                "                 " << prezzo << endl;
        cout << "====================================================================" << endl;

    }
    
}

int scontrino(){
    ofstream riepilogo;
    riepilogo.open ("riepilogo.txt");
    

    riepilogo.close();
}

int main(){
    inizio();
    scaffale();
    elaborazione();

}