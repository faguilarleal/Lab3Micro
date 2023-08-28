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

#include <iostream>
#include <omp.h>
using namespace std;

// function to find factorial of given number
unsigned int factorial(unsigned int n)
{
    int factorial = 1;
    #pragma omp parallel for ordered
    for (int i = 0; i <n; ++i) {
        #pragma omp ordered
        std::cout << "Thread " << omp_get_thread_num() << " is processing iteration " << i << std::endl;
        factorial *= i;
    }
    return factorial;
}

// function to find factorial of given number
unsigned int factorial2(unsigned int n)
{

    if (n == 0)
    return 1;

    return n * factorial(n - 1);
}

int factorial3(int n)
{
// single line to find factorial
return (n == 1 || n == 0) ? 1 : n * factorial3(n - 1);
}

// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    
    return 0;
}







