typedef struct t_vdin {
    int maxElementos;
    int numElementos;
    void **valores;
} vdin;

vdin *vdin_crear(int numElementos);
void vdin_agregar(vdin *tda, void *valor);
void vdin_listar(vdin *tda, void (*funcion_imprimir)(void *));
