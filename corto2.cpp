#include <iostream>
using namespace std;
int main()
{
    int edad, categoria, articulo, saldo = 1000, saldoRestante, descuento;

    cout << "...Bienvenido..." << endl;
    cout << "Ingrese su edad por favor" << endl;
    cin >> edad;

    if (edad < 16)
    {
        cout << "+------------------------+" << endl;
        cout << "(1) Estudiante" << endl;
        cout << "(2) Profesional" << endl;
        cout << "(3) Ver todos" << endl;
        cout << "+------------------------+" << endl;
        cin >> categoria;
        switch (categoria)
        {
        case 1:
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop basica $900.00" << endl;
            cout << "(2) Tablet estudiantil $600.00" << endl;
            cout << "(3) Chromebook $700.00" << endl;
            cout << "+------------------------+" << endl;
            cin >> articulo;
            switch (articulo)
            {
            case 1:
                cout << "Articulico seleccionado: Laptop basica" << endl;
                if (saldo < 900)
                {
                    cout << "Gracias por su compra" << endl;
                    saldoRestante = saldo - 900;
                    descuento = 900 - (900 * 0.2);
                    saldoRestante = saldo - descuento;
                    cout << "Saldo restante" << saldo - 900 << endl;
                }
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
            }
            break;
        case 2:
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop Avanzada $900.00" << endl;
            cout << "(2) Tablet Pro $1200.00" << endl;
            cout << "(3) Estacion de trabajo $2000.00" << endl;
            cout << "+------------------------+" << endl;
            break;
        case 3:
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop basica $900.00" << endl;
            cout << "(2) Tablet estudiantil $600.00" << endl;
            cout << "(3) Chromebook $700.00" << endl;
            cout << "(4) Laptop Avanzada $900.00" << endl;
            cout << "(5) Tablet Pro $1200.00" << endl;
            cout << "(6) Estacion de trabajo $2000.00" << endl;
            cout << "+------------------------+" << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    else
    {
        cout << "No puedes realizar la compra" << endl;
    }
    return 0;
}