
//Este programa convierte los pesos a dolares y viceversa.
#include <stdio.h>

int main ()
{
    float peso, dolar, cambio, numero;
    char ers='s';
    while (ers !='n')
{
    printf ("Selecciona una de las dos opciones:\n 1.-Peso-Dolar\n 2.-Dolar-Peso\n");
    scanf  ("%f", & numero);
    printf ("\n");

    if (numero==1)
{
    printf ("Escribe el valor del dolar:\n $");
    scanf ("%f", & dolar);
    printf ("Escribe la cantidad de pesos a convertir:\n $");
    scanf ("%f", & peso);
    cambio=peso/dolar;
    printf ("La cantidad de dolares es:\n $ %.2f", cambio);
}
else if (numero==2)
{
    printf ("Ingrese el valor del dolar:\n $");
    scanf ("%f", & dolar);
    printf ("Escribe la cantidad de dolares a convertir:\n $");
    scanf ("%f", & peso);
    cambio=dolar*peso;
    printf ("La cantidad de dolares es:\n $ %.2f", cambio);
}
    printf ("\n\nDeseas hacer otra conversion? <s/n>:");
    scanf ("%s", & ers);
    printf ("\n\n");
}
    return 0;
}