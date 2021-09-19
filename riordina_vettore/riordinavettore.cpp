#include <iostream>
using namespace std;
int main()
{
    int n, vet[n], i, temp;
    bool scambio = false; 
    cout << "Quanti numeri vuoi riordinare? ";
    cin >> n;   
    for(i=0; i<n; i++){
        cout << "Dammi un numero ";
        cin >> vet[i];
    }
    do{
        scambio = false;
        for(i=0;i<n-1;i++){
            if(vet[i]>vet[i+1])
            { 
                temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
                scambio = true;
            }
        }
    } while(scambio == true);    
    cout << "Il tuo vettore ordinato è: ";
    for(i=0; i<n; i++){
		cout << vet[i] << " ";
    }
    return 0;
    
}
