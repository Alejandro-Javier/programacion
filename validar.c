/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

//int numeros_romanos (void);
void funcion_dni (int *x);
void numeros_romanos(int *n);

int validar ()
{
int dni;
int n;



{
    if(dni >0 && dni <= 99999999)

    {
        printf ("Su numero de D.N.I es valido ");
        funcion_dni(&dni);
    }
       
    else
    {
        printf("El DNI no es valido ");
    }
}

   
   
    if(n >= 1 && n <= 3000)
    {
        printf ("Su numero en es: %i", n);
        numeros_romanos(&n);
    }
}