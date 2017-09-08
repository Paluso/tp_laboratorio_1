#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{


    float A;
    float B;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    unsigned long long int resultadoFactorial;
    char seguir='s';
    int opcion=0;


    do
    {   printf("\n************************************\n");
        printf("\n1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n************************************\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            A=pedirNumero();
            printf("El primer operando es:%.2f",A);
            break;
        case 2:
            B=pedirNumero();
            printf("El segundo operando es:%.2f",B);
            break;
        case 3:
            resultadoSuma=funcionSuma(A,B);
            printf("El resultado es %.2f\n",resultadoSuma);
            break;
        case 4:
            resultadoResta=funcionResta(A,B);
            printf("El resultado de la resta es:%.2f",resultadoResta);
            break;
        case 5:
            resultadoDivision=funcionDivision(A,B);
            if(B==0)
            {
                printf("ERROR no se puede fraccionar con 0\nCambie el divisor. ");
            }
            else
            {
            printf("El resultado de la division es:%.2f\n",resultadoDivision);
            }
            break;
        case 6:
            resultadoMultiplicacion=funcionMultiplicacion(A,B);
            printf("El resultado de la multiplicacion es:%.2f",resultadoMultiplicacion);
            break;
        case 7:
            resultadoFactorial=funcionFactorial(A);
            if(A>20)
            {
                printf("ERROR MATH:\n");
            }
            else
            {
                printf("El factorial del numero A es:%llu",resultadoFactorial);
            }

            break;
        case 8:
            resultadoSuma=funcionSuma(A,B);
            resultadoResta=funcionResta(A,B);
            resultadoDivision=funcionDivision(A,B);
             if(B==0)
            {
                printf("\nERROR EN DIVISION!!\nNo se puede fraccionar con 0\nCambie el divisor.\n ");
            }
            resultadoMultiplicacion=funcionMultiplicacion(A,B);
            resultadoFactorial=funcionFactorial(A);
            printf("Suma:%.2f\nResta:%.2f\nDivision:%.2f\nMultiplicacion:%.2f\nFactorial de A:%llu\n",resultadoSuma,resultadoResta,resultadoDivision,resultadoMultiplicacion,resultadoFactorial);
            break;
        case 9:
            break;
        }

    }while(opcion!=9);

    return 0;

}

