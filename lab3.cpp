/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* FACULTAD DE INGENIERÍA
* DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
* CC3086 Programación de microprocesadores
*
*
* Modificado por: Francis Aguilar y Angela García
* Fecha: 22/08/2023
* Descripción: 
------------------------------------------------------------------------------*/


using namespace std;
#include <omp.h>
#include <cstdlib>

#include <iostream>
using namespace std;

// function to find factorial of given number}

unsigned int factorial(unsigned int n)
{
    int r; 
    #pragma omp parallel sections
    {
        #pragma omp section 
        
            if (n == 0)
            r = 1;
            
        #pragma omp section 
        
           r = n * factorial(n - 1);
        
    }
    return r;
        
    
}


// Driver code
int main()
{
 int num = 5;
 cout << "Factorial of "
 << num << " is " << factorial(num) << endl;
 return 0;
}
// This code is contributed by Shivi_Aggarwal









