#include "empleado.hpp"
#include "materia.hpp"

int main()
{

    empleado JefePlanta(123, "Alonso Roque", "Independencia", 40000.60, "Alberto");
    empleado JefePersonal(124, "Juan Gonzalez", "10 de Mayo", 50000.74, "Maria");

    int op;
    do {
        system("cls");
        cout << "-----------------Operaciones para Empleados------------------" << endl << endl;
        cout << "1. Imprimir datos" << endl;
        cout << "2. Cambiar domicilio" << endl;
        cout << "3. Actualizar sueldo" << endl;
        cout << "4. Cambiar persona que reporta" << endl;
        cout << "5. Salir" << endl << endl;
        cout << "Ingresa la opcion: ";
        cin >> op;

        int claveEmpleado;
        empleado* empleadoActual;

        switch (op) {
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "Ingresa la clave del empleado: ";
                cin >> claveEmpleado;
                if(JefePlanta.getClaveEmpleado() == claveEmpleado){
                    empleadoActual = &JefePlanta;
                }else if(JefePersonal.getClaveEmpleado() == claveEmpleado){
                    empleadoActual = &JefePersonal;
                }else{
                    cout << "Opcion no valida. Intentalo de nuevo." << endl;
                    system("PAUSE");
                    continue;
                }
                break;
            case 5:
                cout << "Saliendo..." << endl;
                return 0;
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
                continue;
        }

        switch (op) {
            case 1: {
                empleadoActual->imprime();
                system("PAUSE");
                break;
            }
            case 2: {
                string nuevoDomicilio;
                cout << "Ingresa el nuevo domicilio: ";
                cin >> nuevoDomicilio;
                empleadoActual->cambiarDomicilio(nuevoDomicilio);
                system("PAUSE");
                break;
            }
            case 3:
                float porcentajeIncremento;
                cout << "Ingresa el porcentaje de incremento al sueldo: ";
                cin >> porcentajeIncremento;
                empleadoActual->actualSueldo(porcentajeIncremento);
                system("PAUSE");
                break;
            case 4: {
                string nuevoReportaA;
                cout << "Ingresa la nueva persona que reporta: ";
                cin >> nuevoReportaA;
                empleadoActual->cambiarReportaA(nuevoReportaA);
                system("PAUSE");
                break;
            }
            case 5: {
                cout << "Saliendo... ";
                system("PAUSE");
            }
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
                system("PAUSE");
        }

    } while (op!=5);

    return 0;
}

/*int main()
{
    materia Programacion(101, "Programacion", "Ruben Maldonado", "Clean Code");
    materia BasesDatos(102, "Bases de datos", "Fabian Quijas", "Introduccion a bases de datos");

    int op;
    do
    {
        system("cls");
        cout << "-----------------Operaciones para Materias------------------" << endl << endl;
        cout << "1. Imprimir informacion de la materia" << endl;
        cout << "2. Cambiar clave de la materia" << endl;
        cout << "3. Cambiar profesor de la materia" << endl;
        cout << "4. Salir" << endl << endl;
        cout << "Ingresa la opcion: ";
        cin >> op;

        int claveMateria;
        materia *materiaActual;

        switch (op)
        {
        case 1:
        case 2:
        case 3:
            cout << "Ingresa la clave de la materia: ";
            cin >> claveMateria;
            if (claveMateria == Programacion.getClave())
            {
                materiaActual = &Programacion;
            }
            else if (claveMateria == BasesDatos.getClave())
            {
                materiaActual = &BasesDatos;
            }
            else
            {
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
                system("PAUSE");
                continue;
            }
            break;
        case 4:
            cout << "Saliendo..." << endl;
            system("PAUSE");
            return 0;
        default:
            cout << "Opcion no valida. Intentalo de nuevo." << endl;
            system("PAUSE");
            continue;
        }

        switch (op)
        {
        case 1:
            materiaActual->imprime();
            system("PAUSE");
            break;
        case 2: {
            int nuevaClave;
            cout << "Ingresa la nueva clave: ";
            cin >> nuevaClave;
            materiaActual->cambiaClave(nuevaClave);
            system("PAUSE");
            break;
        }
        case 3: {
            string nuevoProfesor;
            cout << "Ingresa el nuevo profesor: ";
            cin.ignore();
            getline(cin, nuevoProfesor);
            materiaActual->cambiarProfe(nuevoProfesor);
            system("PAUSE");
            break;
        }
        default:
            cout << "Opcion no valida. Intentalo de nuevo." << endl;
            system("PAUSE");
        }

    } while (op != 4);

    return 0;
}*/
