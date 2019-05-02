typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{

    int codigoMenu;//autoincremental
    char descripcionMenu[51];
    float importeMenu;
}eMenu;

typedef struct
{
    int legajo;//autoincremental
    char apellido[51];
    char nombre[51];
    char sexo;
    float salario;
    eFecha fechaIngreso;
    int idSector;
    int isEmpty;
}eEmpleado;

typedef struct{

    int codigoAlmuerzo;//autoincremental
    int codigoMenu;
    int legajoEmpleado;
    eFecha fecha;
}eAlmuerzo;

typedef struct
{
    int idSector;//autoincremental
    char descripcion[51];
}eSector;





int menu (void);
int menuEmpleado(void);
void inicializarEmpleados(eEmpleado[], int);
int buscarLibre(eEmpleado[], int);
int buscarEmpleado(eEmpleado[], int, int);
void altaEmpleado(eEmpleado[], int);
void bajaEmpleado(eEmpleado[], int, int);
void listarEmpleado(eEmpleado[], int, int);
void modificarEmpleado(eEmpleado[], int, int);
void mostrarEmpleado(eEmpleado);
void ordenarEmpleado(eEmpleado[], int, int);
void totalSueldos(eEmpleado[], int, int);
void empleadosMayorSueldo(eEmpleado[], int, int);
void valFlag(int);
