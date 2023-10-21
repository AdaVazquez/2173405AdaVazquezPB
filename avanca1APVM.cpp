#include <iostream>
#include <string>

using namespace std;

struct UANL
{
    string NombreAlumno;
    int Matricula;
    float C1, C2, C3, CP;
};

int main()
{
    cout << "AVANCE 1:ADA PAOLA VAZQUEZ MARROQUIN\n" << "Programa que guarda un arreglo de 3 alumnos e lo imprime:\n" << endl;
    // CREACION DEL ARREGLO
    UANL FCFM[3];  // Tamaño del arreglo es 3

    int op;

    do
    {
        cout << "Ingrese la opcion deseada" << endl << "1.-Alta" << endl << "2.-Baja" << endl << "3.-Modificar" << endl << "4.-Lista de Alumnos" << endl << "5.-Salir" << endl;
        cin >> op;

        switch (op)
        {
        case 1:  // ALTA
            for (int i = 0; i < 3; i++)  // llenar el arreglo
            {
                cout << "Ingrese Nombre del alumno:" << endl;
                cin.ignore();
                getline(cin, FCFM[i].NombreAlumno);
                cout << "Ingrese la Matricula" << endl;
                cin >> FCFM[i].Matricula;
                cout << "Ingrese la Calificacion 1" << endl;
                cin >> FCFM[i].C1;
                cout << "Ingrese la Calificacion 2" << endl;
                cin >> FCFM[i].C2;
                cout << "Ingrese la Calificacion 3" << endl;
                cin >> FCFM[i].C3;
                FCFM[i].CP = (FCFM[i].C1 + FCFM[i].C2 + FCFM[i].C3) / 3;
            }
            break;

        case 2:  // Baja
            // Implementar la lógica de baja
            break;

        case 3:  // Modificar
            // Implementar la lógica de modificar
            break;

        case 4:  // Lista
            system("cls");
            cout << "LISTA DE ALUMNOS : \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Matricula: " << FCFM[i].Matricula << endl << "Nombre del alumno: " << FCFM[i].NombreAlumno << endl << "Promedio: " << FCFM[i].CP << endl;
            }
            break;

        case 5:  // salir
            break;

        default:
            op = 6;
            cout << "La opción es incorrecta" << endl;
            break;
        }
    } while (op != 5);

    return 0;
}
