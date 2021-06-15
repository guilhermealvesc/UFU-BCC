#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

struct num {
    double real, imag;
};

//procedimento que cria uma n�mero real
complex* cria_nro(double real, double imag) {
    complex *z;
    //cria um n�mero complexo composto pela parte imagin�ria e real.
    z = (complex*) malloc(sizeof(complex));
    if(z != NULL) {
        //atribui os valores passados para a fun��o na estrutura criada
        //se a alo��o for bem sucedida.
        z->real = real;
        z->imag = imag;
    }
    //retorna o endere�o do n�meoro imagin�rio se foi sucedida sua cria��o
    //sen�o, retorna NULL
    return z;
}

//procedimento que elimina um n�mero complexo
void libera_nro(complex* *z) {
    //desaloca a mem�ria usada pelo n�mero
    free(*z);
    //desrefer�ncia o n�mero para n�o ser mais acessado
    *z = NULL;
}

//procedimento que soma dois n�meros complexos
complex* soma(complex *a, complex *b) {
    //verifica se um dos n�meros � valido
    if(a == NULL || b == NULL){
        return NULL;
    }
    //retora o endere�o do n�mero imagin�rio criado na soma
    return cria_nro(a->real + b->real, a->imag + b->imag);
}

//procedimento que subtrai dois n�meros complexos
complex* sub(complex *a, complex *b) {
    //verifica se um dos n�meros � valido
    if(a == NULL || b == NULL){
        return NULL;
    }
    //retora o endere�o do n�mero imagin�rio criado na soma
    return cria_nro(a->real - b->real, a->imag - b->imag);
}

//procedimento que multiplica dois n�meros complexos
complex* mult(complex *a, complex *b) {
    //verifica se um dos n�meros � valido
    if(a == NULL || b == NULL){
        return NULL;
    }
    //retora o endere�o do n�mero imagin�rio criado na soma
    double real = (a->real * b->real) - (a->imag * b->imag);
    double imag = (a->real * b->imag) + (a->imag * b->real);
    return cria_nro(real, imag);
}

int get_complex(complex *a, double *real, double *imag) {
    if(a == NULL) {
        return 0;
    }
    *real = a->real;
    *imag = a->imag;
    return 1;
}
