#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class Complexos
{
  private:

    float Soma;
    float Real1, Real2;
    float Imaginario1, Imaginario2;
    float MenosR, MaisR, MenosI, MaisI;
    float DivdCR, DivdCI;
    float M1, M2,M3,M4;
    float MultCR, MultCI;

  public:

    Complexos(float R1, float R2, float I1, float I2)
    {
        Real1 = R1;
        Real2 = R2;
        Imaginario1 = I1;
        Imaginario2 = I2;
    }

    Complexos(float R1, float R2, float I1, float I2, float S)
    {
        Real1 = R1;
        Real2 = R2;
        Imaginario1 = I1;
        Imaginario2 = I2;
        Soma = S;
    }

    float soma_numero(float R1, float R2, float I1, float I2)
    {
      MaisR = R1 + R2;
      MaisI = I1 + I2;

      cout << "\nA soma dos numeros complexos e: " << MaisR;

      if(MaisI < 0)
      {
        cout << " - " << MaisI << "j";
      }else
      cout << " + " << MaisI << "j";

      return(MaisR);
      return(MaisI);
    }

    void subtrai_numero (float R1, float R2, float I1, float I2)
    {
      MenosR = R1 - R2;
      MenosI = I1 - I2;

      cout << "\nA subtração dos numeros complexos e: " << MenosR;

      if(MenosI < 0)
      {
        cout << " - " << MenosI << "j";
      }else
      cout << " + " << MenosI << "j";
    }

    void multiplica_numero (float R1, float R2, float I1, float I2)
    {
      MultCR = (R1*R2) - (I1*I2);
      MultCI = (I2*R1) + (I1*R2);

    cout << "\nA multiplicacao dos numeros complexos e: " << MultCR;

      if(MultCI < 0)
      {
        cout << " - " << MultCI << "j";
      }else
      cout << " + " << MultCI << "j";

    }

    void divide_numero (float R1, float R2, float I1, float I2)
    {
      float denominador;


      DivdCR = (R1*R2) + (I1*I2);

      DivdCI = (I1*R2) - (I2*R1);

      denominador = (R2*R2) + (I2*I2);

      cout << "\n\n   " << DivdCR << "\t" << DivdCI << endl;
      if(DivdCI > 0)
        cout << ("------ + ------- j\n");
      else
        cout << ("------  ------- j\n");
      cout << "  " << denominador << "\t  " << denominador << "\n\n";
    }

    void modulo (float R1, float R2, float I1, float I2)
    {
      M1 = sqrt(pow(R1,2) + pow(I1,2));
      M2 = sqrt(pow(R2,2) + pow(I2,2));

      cout << "\nO modulo do numero complexo: " << R1;
      if(I1>0)
        {
          cout << " + " << I1 << "j e: " << M1;
        }
        else
            cout << I1 << "j e: " << M1;

        cout << "\nO modulo do numero complexo: " << R2;
          if(I2>0)
            {
              cout << " + " << I2 << "j e: " << M2;
            }
            else
                cout << I2 << "j e: " << M2;
     }

    static float Soma_C(float A, float b)
    {
        float Soma;
        Soma = A + b;
        return(Soma);
    }

};
