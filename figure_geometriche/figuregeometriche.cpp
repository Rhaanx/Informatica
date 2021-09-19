#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int areatriangolo(){
    struct s_data{
        int a, b;
    } area;
    int a;
    string s;
    cout << "================" << endl;    
    cout << "Base: ";
    cin >> area.b;
    cout << "Altezza: ";
    cin >> area.a;
    a=(area.a*area.b)/2;
    cout << "Area: " << a;
    cout << "================" << endl;   
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");
    cout << "Vuoi calcolare il perimetro o l'area di un altra forma?" << endl;
    if(s=="Si"){
        main();
    } else if(s=="No") {
        system("STOP");
    }
    return 0;
}

int perimetrotriangolo(){
    struct s_data{
        int a, b, c;
    } perimetro;
    int p;
    string s;
    cout << "================" << endl;   
    cout << "A: ";
    cin >> perimetro.a;
    cout << "B: ";
    cin >> perimetro.b;
    cout << "C: ";
    cin >> perimetro.c;
    p=perimetro.a+perimetro.b+perimetro.c;
    cout << "Perimetro: " << p;
    cout << "================" << endl;
    cout << "Premi qualsiasi tasto per continuare..." << endl;
    getch();
    system ("CLS");
    cout << "Vuoi calcolare il perimetro o l'area di un altra forma?" << endl;
    if(s=="Si"){
        main();
    } else if(s=="No") {
        system("STOP");
    }   
    
    return 0;
}

int triangolo()
{
    string scelta;
    cout << "========================================" << endl;    
    cout << "Triangolo" << endl;
    cout << "Cosa vuoi calcolare? Area o Perimetro?" << endl;
    cin >> scelta;
    if(scelta=="Area"){
        cout << "========================================" << endl;
        cout << "Premi qualsiasi tasto per continuare..." << endl;
        getch();
        system ("CLS");
        areatriangolo();
    } else if(scelta=="Perimetro") {
        cout << "========================================" << endl;
        cout << "Premi qualsiasi tasto per continuare..." << endl;
        getch();
        system ("CLS");
        perimetrotriangolo();
    }
}

int main(){
    string scelta;
    cout << "========================================" << endl;
    cout << "Calcolo Area o Perimetro" << endl;
    cout << "Forme geometriche disponibili: " << endl;
    cout << "Triangolo, Rettangolo, Quadrato, Cerchio" << endl;
    cin >> scelta;
    if(scelta=="Triangolo"){
        triangolo();
        cout << "========================================" << endl;
        cout << "Premi qualsiasi tasto per continuare..." << endl;
        getch();
        system ("CLS");
    }
}