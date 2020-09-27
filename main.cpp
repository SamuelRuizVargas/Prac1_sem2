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
            cout << "1 - Para ver punto #1 (Identificador de letras)"<<endl;
            cout << "2 - Para ver punto #3 (Validador de fechas)"<<endl;
            cout << "3 - Para ver punto #5 (Patron con numero impar)"<<endl;
            cout << "4 - Para ver punto #7 (Serie Fibonacci pares)"<<endl;
            cout << "5 - Para ver punto #8 (Suma de multiplos de 2 numeros hasta un tercero)"<<endl;
            cout << "6 - Para ver punto #10 (N-simo numero primo)"<<endl;
            cout << "7 - Para ver punto #12 (Maximo factor primo)"<<endl;
            cout << "8 - Para ver punto #13 (Suma de primos)"<<endl;
            cout << "9 - Para ver punto #15"<<endl;
            cout << "10 - Para ver punto #17"<<endl;
            cout << "0 - Para cerrar el programa"<<endl;
        cout << "\n";
        cout<<"Opcion: ";cin>>opcion;

        char terminar;
        switch(opcion)
        {
        //-----------------------------------------------------------------------------
        case 1: //punto 1
        {
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
        }
            break;
        //----------------------------------------------------------------------------
        case 2://punto 3
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Validador de fechas."<<endl;
            int mes;
            int dia;
            int variacion;
            cout << "Ingrese un mes: ";cin>>mes;
            if (mes>0 && mes<13)
            {
                cout<<"Ingrese un dia: ";cin>>dia;
                if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
                {
                    variacion=1;
                }
                else if (mes==4 || mes==6 || mes==9 || mes==11)
                {
                    variacion=2;
                }
                else
                    variacion=3;

                switch (variacion)
                {
                case 1:
                    if (dia>0 && dia<32)
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    else
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }

                    break;

                case 2:
                    if (dia>0 && dia<31)
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    else
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    break;

                case 3:
                    if (dia>0 && dia<29)
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    else if(dia==29)
                    {
                        cout<<"Posiblemente anho bisiesto."<<endl;
                        cout<<dia<<"/"<<mes<<" es valida es bisiesto."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    else
                    {
                        cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
                        cout << "----------------------------------------------------"<<endl;
                    }
                    break;
                }
            }
            else
            {
                cout<<mes<<" es un mes invalido."<<endl;
                cout << "----------------------------------------------------"<<endl;
            }

            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 3://punto 5
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Patron con numero impar."<<endl;
            int esp;
            int centro;
            cout << "Ingrese el tamanho del patron(tiene que ser un numero impar): ";cin>>centro;
            if(centro>0)
            {
                if(centro%2!=0)
                {
                    esp=centro/2;
                    int esp_ini=esp;
                    int stop=1;
                    int esp_fin=esp;
                    //parte de arriba
                    for(int l=1; l<=esp; l+=1)
                    {
                        int ite_ini=1;
                        while(ite_ini<=esp_ini)
                        {
                            cout<<" ";
                            ite_ini+=1;
                        }
                        esp_ini-=1;

                        int ast_ini=1;
                        while(ast_ini<=stop)
                        {
                            cout<<"*";
                            ast_ini+=1;
                        }
                        stop+=2;
                        cout<<endl;
                    }

                    //centro
                    int ite_cen=1;
                    while (ite_cen<=centro)
                    {
                        cout<<"*";
                        ite_cen+=1;
                    }
                    cout<<endl;

                    //parte de abajo
                    int ite_ini=esp;
                    int ast_fin=stop-2;
                    for(int p=1; p<=esp; p+=1)
                    {

                        while(ite_ini<=esp_fin)
                        {
                            cout<<" ";
                            ite_ini+=1;
                        }
                        ite_ini-=1;
                        ite_ini-=p;


                        while(ast_fin>0)
                        {
                            cout<<"*";
                            ast_fin-=1;

                        }
                        ast_fin=stop-2;
                        ast_fin-=2*p;
                        cout<<endl;
                    }

                }
                else
                {
                    cout<<"El numero debe ser impar."<<endl;
                    cout << "----------------------------------------------------"<<endl;
                }

            }
            else
            {

                cout<<"El centro debe tener una longitud mayor a 0."<<endl;
                cout << "----------------------------------------------------"<<endl;
            }



            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 4://punto 7
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Serie Fibonacci pares."<<endl;
            int num;
            int sum=1;
            int aux=0;
            int total=0;
            int primero;
            int anterior;
            cout<<"Ingrese un numero: ";cin>>num;
            if (num>0)
            {
                while(total<num)
                {
                    primero=sum;
                    anterior=aux;
                    sum=primero+anterior;
                    aux=primero;
                    if (primero%2==0)
                    {
                        total=total+primero;
                    }

                }

                cout<<"El resultado de la suma es: "<<total<<endl;
                cout << "----------------------------------------------------"<<endl;
            }
            else
            {
                cout<<"El numero ingresado debe ser mayor a 0."<<endl;
            }
            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 5://punto 8
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Suma de multiplos de 2 numeros hasta un tercero."<<endl;
            int a;
            int b;
            int c;
            cout<<"Digite el primer numero: ";cin>>a;
            if(a>0)
            {
                cout<<"Digite el segundo numero: ";cin>>b;
                if (b>0)
                {
                    cout<<"Digite el numero limite para los multiplos del num 1 y 2: ";cin>>c;
                    if (c>0)
                    {
                        int lim=0;
                        int ite=1;
                        int suma=0;
                        while (lim<c)
                        {
                            lim=a*ite;
                            if (lim<c)
                            {
                                suma+=lim;
                                cout<<lim;
                                if (a*(ite+1)<c)
                                {
                                    cout<<" + ";
                                }
                                else if (a*(ite+1)>c)
                                {
                                    cout<<" + ";
                                }
                            }
                            ite+=1;
                        }
                        lim=0;
                        ite=1;
                        while (lim<c)
                        {
                            lim=b*ite;
                            if (lim<c)
                            {
                                if(lim%a!=0)
                                {
                                    suma+=lim;
                                    cout<<lim;
                                    if (b*(ite+1)<c)
                                    {
                                        if ((b*(ite+1))%a==0)
                                        {
                                            cout<<"";
                                        }
                                        else
                                        {
                                            cout<<" + ";
                                        }
                                    }
                                }
                            }
                            ite+=1;
                        }

                        cout<<" = "<<suma<<endl;
                    }
                    else
                    {
                        cout<<"El limite debe ser mayor a 0."<<endl;
                    }
                }
                else
                {
                    cout<<"El segundo numero debe ser mayor a 0."<<endl;
                }
            }
            else
            {
                cout<<"El primer numero debe ser mayor a 0."<<endl;
            }
            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;

        }
            break;
        //----------------------------------------------------------------------------
        case 6://punto 10
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "N-simo numero primo."<<endl;
            int n;
            cout<<"Ingrese la posicion del numero primo que desea saber: ";cin>>n;
            if (n>0)
            {
                int primo=0;
                int num=1;
                int cant_div;
                while (primo<=n)
                {
                    num++;
                    cant_div=0;
                    for(int i=1;i<=num;i++)
                    {
                        if (num%i==0)
                        {
                            cant_div++;
                        }
                    }
                    if (cant_div==2)
                    {
                        primo++;
                        if(primo==n)
                        {
                            cout<<"El primo numero "<<n<<" es: "<<num<<endl;
                        }
                    }

                }
            }
            else
            {
                cout<<"El numero ingresado debe ser mayor a 0."<<endl;
            }
            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 7://punto 12
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Maximo factor primo."<<endl;
            int num;
            int primo;
            int n=2;
            int cant_div;
            int mayor;
            cout<<"Ingrese un numero: ";cin>>num;
            if (num>0)
            {
                int NUM=num;
                while(n<=num)
                {
                    cant_div=0;
                    for(int i=1;i<=n;i++)
                    {
                        if(n%i==0)
                        {
                            cant_div++;
                        }
                    }
                    if (cant_div==2)
                    {
                       primo=n;
                       if (num%primo==0)
                       {
                           mayor=primo;
                           num=num/primo;
                       }
                    }
                    n++;
                }
                cout<<"El mayor factor primo de "<< NUM<< " es: "<<mayor<<endl;
            }
            else
            {
                cout<<"El numero debe ser mayor que 0."<<endl;
            }
            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 8://punto 13
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "Suma de primos."<<endl;
            int num;
            int cant_div;
            int n=2;
            int suma=0;
            cout<<"Ingrese un numero: ";cin>>num;
            if (num>0)
            {
                while(n<=num)
                {
                    cant_div=0;
                    for(int i=1;i<=n;i++)
                    {
                        if(n%i==0)
                        {
                            cant_div++;
                        }
                    }
                    if (cant_div==2)
                    {
                       suma=suma+n;
                    }
                    n++;
                }
                cout<<"El resultado de la suma es: "<< suma<<endl;
            }
            else
            {
                cout<<"El numero debe ser mayor que 0."<<endl;
            }

            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 9://punto 15
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "."<<endl;

            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        //----------------------------------------------------------------------------
        case 10://punto 17
        {
            cout << "\n";
            cout << "----------------------------------------------------"<<endl;
            cout << "."<<endl;

            cout<<"Digite cualquier caracter para continuar: ";cin>>terminar;
            cout << "----------------------------------------------------"<<endl;
        }
            break;
        }
    }
return 0;
}
