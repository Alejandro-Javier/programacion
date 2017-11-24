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

int funcion_dni (int *x);
int numeros_romanos (int*n);


int main (void) 
{
   
    int opcion;    
    int numero;
    int x, n;
    printf ("Seleccione la opcion deseada \n");
    printf ("1. Calcular letra NIF \n");    
    printf ("2. Convertir a numero Romano \n");
    printf ("0. Finalizar aplicacion \n");
    scanf("%i", &opcion);
    
    printf ("Escribe tu numero a valorar: \n");
    scanf ("%i \n", &numero); 
    
    
    switch(opcion)             
        {                  
        case 1: funcion_dni(&numero);
        break;        
    case 2:     
           numeros_romanos(&numero);
           break;        
    case 3:      
       printf("Aplicación finalizada"); 
       break;    
    default: break;
    }
return (0);
}

