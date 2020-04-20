#include <iostream>
#include "vdin.h"

void imprimir_cadenas(void *elemento) {
    std::cout << (char*)elemento << std::endl;
}

int main(int na, char* arg[]) {
    vdin *tda = vdin_crear(20);
    vdin_agregar(tda, (void*)"primer elemento");
    vdin_agregar(tda, (void*)"segundo elemento");
    vdin_agregar(tda, (void*)"tercer elemento");
    vdin_listar(tda, &imprimir_cadenas);
}