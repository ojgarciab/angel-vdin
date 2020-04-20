#include <iostream>
#include "vdin.h"


vdin *vdin_crear(int numElementos) {
    vdin *tda = new vdin;
    tda->maxElementos = numElementos;
    tda->numElementos = 0;
    tda->valores = new void*[numElementos];
    return tda;
};

void vdin_agregar(vdin *tda, void *valor) {
    if (tda->numElementos <= tda->maxElementos) {
        tda->valores[tda->numElementos++] = valor;
    } else {
        std::cerr << "No hay hueco para más elementos" << std::endl;
        exit(1);
    }
}

void vdin_listar(vdin *tda, void (*funcion_imprimir)(void *)) {
    for (int num = 0; num < tda->numElementos; num++) {
        (*funcion_imprimir)(tda->valores[num]);
    }
}
