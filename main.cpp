#include <iostream>
#include <string>
#include <math.h>
#include "complexos.h"

using namespace std;

int main  ()
{
    int i, operacao, c=1, escolha,q;
    float R1, R2, I1, I2, R3, R4, I3, I4, S1, S2;

    cout << ("Tecle 1 para iniciar") << endl;
    cin >> q;
  

    Complexos operacoes(R1, R2, I1, I2);
    Complexos pacotes_NC(R1, R2, I1, I2,0);



    while(q==1)
    {

        for(int i=0; i<2; i++)
        {
            if(i==0)
            {
                cout << "----------------- Calculadora de Numeros Complexos --------------------" << endl;


                cout << "Digite o numero complexo, informando primeiro a parte REAL e depois a parte IMAGINARIA" << endl;

                cin >> R1;
                cin >> I1;

                if(I1>0)
                    cout << R1 << " + " << I1 << "j";
                else
                    cout << R1 << I1 << "j";


                cout << ("\n\nDigite o numero complexo, informando primeiro a parte REAL e depois a parte IMAGINARIA") << endl;
                cin >> R2;
                cin >> I2;


                if(I2>0)
                    cout << R2 << " + " << I2 << "j";
                else
                    cout << R2 << I2 << "j";

            }else
            {
                system("cls");
                cout << "----------------- Calculadora de Numeros Complexos --------------------" << endl;
                cout<< "---------------Digite o Segundo Par de Numeros Complexos------------" << endl;


                cout << "\nDigite o numero complexo, informando primeiro a parte REAL e depois a parte IMAGINARIA" << endl;

                cin >> R3;
                cin >> I3;

                if(I3>0)
                    cout << R3 << " + " << I3 << "j";
                else
                    cout << R3 << I3 << "j";


                cout << ("\n\nDigite o numero complexo, informando primeiro a parte REAL e depois a parte IMAGINARIA") << endl;
                cin >> R4;
                cin >> I4;


                if(I4>0)
                    cout << R4 << " + " << I4 << "j";
                else
                    cout << R4 << I4 << "j";

            }
        }


        while (c == 1)
        {

            cout << "\n\n---------- Realizar uma operação básica ----------"  << endl;

            cout << "\n\nOPERAÇÕES COM NÚMEROS COMPLEXOS:" << endl;
            cout << "1: Soma" << endl;
            cout << "2: Subtração" << endl;
            cout << "3: Multiplicação" << endl;
            cout << "4: Divisão" << endl;
            cout << "5: Modulo" << endl;

            cin >> (operacao);

            if (operacao == 1)
            {
              S1 = operacoes.soma_numero(R1, R2, I1, I2);
              S2 =  pacotes_NC.soma_numero(R3, R4, I3, I4);
            }
            else if (operacao == 2)
            {
              operacoes.subtrai_numero(R1, R2, I1, I2);
              pacotes_NC.subtrai_numero(R3, R4, I3, I4);
            }
            else if (operacao == 3)
            {
              operacoes.multiplica_numero(R1, R2, I1, I2);
              pacotes_NC.multiplica_numero(R3, R4, I3, I4);
            }
            else if (operacao == 4)
            {
              operacoes.divide_numero(R1, R2, I1, I2);
              pacotes_NC.divide_numero(R3, R4, I3, I4);
            }
            else if (operacao == 5)
            {
              operacoes.modulo(R1, R2, I1, I2);
              pacotes_NC.modulo(R3, R4, I3, I4);
            }


        cout << ("\n\n\nTecle 1 para repetir ou 0 para sair: ");
        cin >> c;
        system("cls");
        }


        cout << "A soma dos 2 objetos e: ";
        cout << Complexos::Soma_C(S1,S2);


        cout << "\n\n\n\n\nDeseja escolher outros valores dos numeros, 1 para escolher ou 0 para sair: ";
        cin >> q;
        c=1;
        system("cls");
    }
  exit(0);
}
