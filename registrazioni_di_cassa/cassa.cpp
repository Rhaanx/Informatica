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

int programma(){
        system ("CLS");
    cout << "========================================" << endl;
    cout << "Calcolo saldo giornaliero e progressivo" << endl;
    cout << "========================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");
}

    int sommael=0, sommaul=0, saldogl=0, saldop=rand()%170+100, saldopl= saldogl+saldop;
    int sommaem=0, sommaum=0, saldogm=0, saldopm=saldogm+saldopl;
    int sommaeme=0, sommaume=0, saldogme=0, saldopme=saldogme+saldopm;
    int sommaeg=0, sommaug=0, saldogg=0, saldopg=saldogg+saldopme;
    int sommaev=0, sommauv=0, saldogv=0, saldopv=saldogv+saldopg;
    int sommaes=0, sommaus=0, saldogs=0, saldops=saldogs+saldopv;

int inputl(){
    int e[5], u[5], numentrate;
    cout << "=============================================" << endl;
    cout << "Inserisci le entrate della giornata di lunedi" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "=============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "============================================" << endl;
    cout << "Inserisci le uscite della giornata di lunedi" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommael=e[0]+e[1]+e[2]+e[3]+e[4];
    sommaul=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogl=sommael-sommaul;


   }   

   int inputm(){
    int e[5], u[5], numentrate;
    cout << "==============================================" << endl;
    cout << "Inserisci le entrate della giornata di martedi" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "==============================================" << endl;
    cout << "Inserisci le uscite della giornata di martedi" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommaem=e[0]+e[1]+e[2]+e[3]+e[4];
    sommaum=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogm=sommaem-sommaum;


   }   

   int inputme(){
    int e[5], u[5];
    cout << "================================================" << endl;
    cout << "Inserisci le entrate della giornata di mercoledi" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "=================================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "===============================================" << endl;
    cout << "Inserisci le uscite della giornata di mercoledi" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "===============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommaeme=e[0]+e[1]+e[2]+e[3]+e[4];
    sommaume=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogme=sommaeme-sommaume;


   }   

   int inputg(){
    int e[5], u[5], numentrate;
    cout << "==============================================" << endl;
    cout << "Inserisci le entrate della giornata di giovedi" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "==============================================" << endl;
    cout << "Inserisci le uscite della giornata di giovedi" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommaeg=e[0]+e[1]+e[2]+e[3]+e[4];
    sommaug=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogg=sommaeg-sommaug;


   }   

   int inputv(){
    int e[5], u[5], numentrate;
    cout << "==============================================" << endl;
    cout << "Inserisci le entrate della giornata di venerdi" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "==============================================" << endl;
    cout << "Inserisci le uscite della giornata di venerdi" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommaev=e[0]+e[1]+e[2]+e[3]+e[4];
    sommauv=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogv=sommaev-sommauv;


   }   

   int inputs(){
    int e[5], u[5], numentrate;
    cout << "==============================================" << endl;
    cout << "Inserisci le entrate della giornata di sabato" << endl;
    cout << "Entrate: ";
    for(int i=0; i<5; i++){
        cin >> e[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    cout << "==============================================" << endl;
    cout << "Inserisci le uscite della giornata di sabato" << endl;
    cout << "Uscite: ";
    for(int i=0; i<5; i++){
        cin >> u[i];
    }
    cout << "==============================================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");

    sommaes=e[0]+e[1]+e[2]+e[3]+e[4];
    sommaus=u[0]+u[1]+u[2]+u[3]+u[4];
    saldogs=sommaes-sommaus;

   }

int schema(){
    ofstream riepilogo;
    riepilogo.open ("riepilogo.txt"); 
    riepilogo << "=====================================================================================" << endl;
    riepilogo << "Giorno  |  Entrate    |    Uscite    |    Saldo Giornaliero    |    Saldo Progressivo" << endl;   
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl; 
    riepilogo << "Inizio  |             |              |                         |    " << saldop << endl; 
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;   
    riepilogo << "Lun     |  "<< sommael << "        |    " << sommaul << "       |    " << saldogl << "                  |    "<< saldogl+saldop << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "Mar     |  "<< sommaem << "        |    " << sommaum << "       |    " << saldogm << "                  |    "<< saldop+saldogl+saldogm << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "Mer     |  "<<sommaeme << "        |    " << sommaume << "       |    " << saldogme << "                  |    "<< saldop+saldogl+saldogm+saldogme << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "Gio     |  "<<sommaeg << "        |    " << sommaug << "       |    " << saldogg << "                  |    "<< saldop+saldogl+saldogm+saldogme+saldogg << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "Ven     |  "<<sommaev << "        |    " << sommauv << "       |    " << saldogv << "                   |    "<< saldop+saldogl+saldogm+saldogme+saldogg+saldogv << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "Sab     |  "<<sommaes << "        |    " << sommaus << "       |    " << saldogs << "                  |    "<< saldop+saldogl+saldogm+saldogme+saldogg+saldogv+saldogs << endl;
    riepilogo << "--------|-------------|--------------|-------------------------|---------------------" << endl;  
    riepilogo << "        |             |              |                         |    " << saldop+saldogl+saldogm+saldogme+saldogg+saldogv+saldogs << endl;
    riepilogo << "=====================================================================================" << endl;
    riepilogo.close();
    return 0;

}

int main(){
    programma();
    inputl();
    inputm();
    inputme();
    inputg();
    inputs();
    schema();
    
}