/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int funcion_dni (int *x)
 {
    //definimos el tipo de varibles
    int dni, indiceletra;
    float calculo_dni;
    char letra_dni[24] = 
    {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','O'};
    
    //pedimos por pantalla 
    printf ("Escribe tu numero de dni: \n");
    scanf ("%08d", &dni);  
   
    
    // ahora calculamos en dni
    calculo_dni = dni/23;
    calculo_dni = calculo_dni*23;
    calculo_dni = dni - calculo_dni;  
    
    
    printf("resultado %8f \n", calculo_dni);
    indiceletra = calculo_dni;
    
    printf("tu letra es: %c  \n", letra_dni[indiceletra - 1]);   
    
    
    return 0;
 }
