#include <iostream>

using namespace std;

int calcula (int *dd, int *mm, int *aaaa){
    int idade, diaAtual=18, mesAtual=10, anoAtual=2020;

    *dd = ((anoAtual * 360 + mesAtual * 30 + diaAtual) - (*aaaa * 360 + *mm * 30 + *dd));

    idade = *dd / 360;

    *mm = *dd / 30;

    return idade;
}

int main (){
    int dia, mes, ano;
    
    cin >> dia >> mes >> ano;
    
    ano = calcula (&dia, &mes, &ano);
    
    cout << ano << " anos OU "<< mes <<" meses OU "<< dia <<" dias" << endl; 
    
    return 0;
}