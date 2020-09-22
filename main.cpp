#include <iostream>

using namespace std;

int main()
{
    cout << "Practica 1 - Samuel Ruiz Vargas - CC: 1000898936"<<endl;
    int opcion=1;
    while(opcion!=0)
    {
        cout << "\n";
        opcion=0;
        cout << "Digite la opcion que desea ver."<<endl;
            cout << "1 - Para ver punto #1"<<endl;
            cout << "2 - Para ver punto #3"<<endl;
            cout << "3 - Para ver punto #5"<<endl;
            cout << "4 - Para ver punto #7"<<endl;
            cout << "5 - Para ver punto #8"<<endl;
            cout << "6 - Para ver punto #10"<<endl;
            cout << "7 - Para ver punto #12"<<endl;
            cout << "8 - Para ver punto #13"<<endl;
            cout << "9 - Para ver punto #15"<<endl;
            cout << "10 - Para ver punto #17"<<endl;
            cout << "0 - Para cerrar el programa"<<endl;
        cout << "\n";
        cout<<"Opcion: ";cin>>opcion;

        char terminar;
        switch(opcion)
        {
        case 1:
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Identificador de letras."<<endl;
            char letra;
            cout << "Digite una letra: ";cin>>letra;

            if(letra=='A' || letra=='B' || letra=='C' || letra=='D' || letra=='E' || letra=='F'
            || letra=='G' || letra=='H' || letra=='I' || letra=='J' || letra=='K' || letra=='L'
            || letra=='M' || letra=='N' || letra=='O' || letra=='P' || letra=='Q' || letra=='R'
            || letra=='S' || letra=='T' || letra=='U' || letra=='V' || letra=='W' || letra=='X'
            || letra=='Y' || letra=='Z' || letra=='a' || letra=='b' || letra=='c' || letra=='d'
            || letra=='e' || letra=='f' || letra=='g' || letra=='h' || letra=='i' || letra=='j'
            || letra=='k' || letra=='l' || letra=='m' || letra=='n' || letra=='o' || letra=='p'
            || letra=='q' || letra=='r' || letra=='s' || letra=='t' || letra=='u' || letra=='v'
            || letra=='w' || letra=='x' || letra=='y' || letra=='z')
            {
                if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'
                || letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
                {
                    cout<<letra<<" es una vocal."<<endl;
                    cout << "----------------------------------------------------"<<endl;
                }
                else
                {
                    cout<<letra<<" es una consonante."<<endl;
                    cout << "----------------------------------------------------"<<endl;
                }

            }
            else
            {
                cout<<"No es una letra."<<endl;
                cout << "----------------------------------------------------"<<endl;
            }

            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;

            break;

        case 2:
            break;
        }
    }
return 0;
}
