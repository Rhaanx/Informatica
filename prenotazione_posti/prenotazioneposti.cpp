#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
using namespace std;

string nome, cognome;
int datapren;

void wait(int seconds){
  clock_t endwait;
  endwait=clock()+seconds*CLOCKS_PER_SEC;
  while(clock()<endwait){}
}

struct s_data{
    int g, m;
} dataN;

int biglietto(){
    cout << "============================================================" << endl;
    cout << "Compila il biglietto con le tue informazioni!" << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    cout << "Giorno di prenotazione: ";
    cin >> dataN.g;
    if(dataN.g>31){
        cout << "Errore, il numero non puo' essere maggiore di 31!" << endl; 
        biglietto();
    }
        if(dataN.g<1){
        cout << "Errore, il numero non puo' essere minore di 1!" << endl;
        biglietto();
    }
    cout << "Mese di prenotazione: ";
    cin >> dataN.m;
    if(dataN.m>12){
        cout << "Errore, il numero non puo' essere maggiore di 12!" << endl;
        biglietto();
    }
        if(dataN.m<1){
        cout << "Errore, il numero non puo' essere minore di 1!" << endl;
        biglietto();
    }
    cout << "Saprai il costo del biglietto una volta completato il modulo" << endl;
    cout << "============================================================" << endl;
    }

int main(){
    struct s_data{
        int mvagoni, xscompartimenti;
        
    } classico, avanzato;
    string tipovagone;
    int sceltascompartimento, sceltaposto, costo=0;

    srand(time(NULL));
    classico.mvagoni = rand()%8+5;
    avanzato.mvagoni = rand()%6+3;
    classico.xscompartimenti = rand()%3+1;
    avanzato.xscompartimenti = rand()%3+1;

    time_t rawtime;
    struct tm*timeinfo;
    time (&rawtime);
    timeinfo=localtime(&rawtime);
    
    system ("CLS");
    cout << "=========================================================" << endl;
    cout << " Prenota il tuo biglietto qui! " << asctime(timeinfo);
    cout << "=========================================================" << endl;
    wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    biglietto();
     wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "================================================" << endl;
    cout << "Nel treno ci sono vari tipi di classi di vagoni" << endl;
    cout << "Vagone classico o avanzato" << endl;
    cout << "Quale vuoi prenotare? ";
    cin >> tipovagone;
    if(tipovagone=="Classico"){
        cout << "Nel vagone Classico ci sono " << classico.xscompartimenti << " scompartimenti e " << classico.mvagoni << " posti" << endl; 
    } else if(tipovagone=="Avanzato"){
        cout << "Nel vagone Avanzato ci sono " << avanzato.xscompartimenti << " scompartimenti e " << avanzato.mvagoni << " posti" << endl; 
    }
    cout << "================================================" << endl;
    wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "====================================================================" << endl;
    cout << "In quale scompartimento vuoi prenotare il posto?" << endl;
    if(tipovagone=="Classico"){
    cout << "Ricorda che hai scelto il vagone classico e ci sono " << classico.xscompartimenti << " scompartimenti" << endl;
    } else if(tipovagone=="Avanzato"){
    cout << "Ricorda che hai scelto il vagone avanzato e ci sono " << avanzato.xscompartimenti << " scompartimenti" << endl;
    }
    cout << "Scompartimento n.";
    cin >> sceltascompartimento;
    if(tipovagone=="Classico"){
        if(sceltascompartimento>classico.xscompartimenti){
            cout << "Errore, non esiste questo scompartimento";
            main();
        }
    } if(tipovagone=="Avanzato"){
        if(sceltascompartimento>avanzato.xscompartimenti){
            cout << "Errore, non esiste questo scompartimento";
            main();
        }

    cout << "Hai scelto lo scompartimento n." << sceltascompartimento << endl;
    cout << "====================================================================" << endl;
    wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "================================================" << endl;
    cout << "       Quale posto vuoi prenotare?" << endl;
    if(tipovagone=="Classico"){
        cout << "Ricorda che nel vagone classico ci sono " << classico.mvagoni << " posti" << endl;
    } else if(tipovagone=="Avanzato"){
        cout << "Ricorda che nel vagone avanzato ci sono " << avanzato.mvagoni << " posti" << endl;
    }
    cout << "Posto che vuoi prenotare: ";
    cin >> sceltaposto;
    if(tipovagone=="Classico"){
        if(sceltaposto>classico.mvagoni){
            cout << "Errore, non esiste questo posto" << endl;
            main();
        }
    } if(tipovagone=="Avanzato"){
        if(sceltaposto>avanzato.mvagoni){
            cout << "Errore, non esiste questo posto" << endl;
            main();
        }
    cout << "Hai prenotato con successo il posto n." << sceltaposto << endl;
    cout << "================================================" << endl;
    wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");
    cout << "=============================================================================" << endl;
    if(tipovagone=="Classico"){
    cout << "Hai prenotato con successo il posto n." << sceltaposto << " dello scompartimento n." << sceltascompartimento << " tipo classico" << endl;
    } else if(tipovagone=="Avanzato"){
    cout << "Hai prenotato con successo il posto n." << sceltaposto << " dello scompartimento n." << sceltascompartimento << " tipo avanzato" << endl;
    cout << "=============================================================================" << endl;
    wait (1);
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    //CALCOLO COSTO BIGLIETTO
    if(tipovagone=="Classico"){
        costo=rand()%4+2;
    } else if(tipovagone=="Avanzato"){
        costo=rand()%8+4;
    }

    cout << "==============================================" << endl;
    cout << "               IL TUO BIGLIETTO               " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Cognome: " << cognome << endl;
    cout << "Data di prenotazione: " << dataN.g << "/" << dataN.m  << "/2020" << endl;;
    cout << "Costo del biglietto: " << costo << " euro" << endl;
    cout << "==============================================" << endl;

    wait (3);
    cout << "Un treno sta per arrivare";
    for(int i=0; i<3; i++){
        cout << ".";
        wait (1);
    }
    cout << "   Dirigiti al binario numero " << rand()%6+1;
    wait (5);
    system ("CLS");
    
    cout << "*************************************************************************" << endl;
    cout << "***                     Grazie per aver acquistato!                   ***" << endl;
    cout << "*** Premi B se vuoi acquistare un nuovo biglietto oppure U per uscire ***" << endl;
    cout << "*************************************************************************" << endl;

    string fine;
    cin >> fine;
    if(fine=="B"){ 
        main();
    } else if(fine=="U") {
        system ("PAUSE");
    }
   }
  }
 }
}