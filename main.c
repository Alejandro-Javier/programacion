/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main2.c
 * Author: Programación
 *
 * Created on 23 de noviembre de 2017, 9:07
 */

#include <stdio.h>
#include <stdlib.h>

int funcion_dni(int *dni);
int numeros_romanos(int*z);


int main (void) 
{
   
    int opcion;    
    int valor;
    printf ("Seleccione la opcion deseada \n");
    printf ("1. Calcular letra NIF \n");    
    printf ("2. Convertir a numero Romano \n");
    printf ("0. Finalizar aplicacion \n");
    scanf("%i", &opcion);
    printf ("Escribe tu numero a valorar: \n");
    scanf ("%i \n", &valor); 
    if(opcion == 1)             
        {                  
       funcion_dni(&valor);
        }
    else if (opcion == 2)
        {
           numeros_romanos(&valor);
        }
    else if (opcion == 0)
    {
       printf("Aplicación finalizada"); 
    }
       
return (0);
}

