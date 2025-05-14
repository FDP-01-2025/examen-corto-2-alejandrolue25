#include <iostream>
using namespace std;
int main()
{
    // Declaración de variables
    int edad, categoria, articulo, saldo = 1000, saldoRestante, precioConDescuento, saldoFaltante;

    cout << "...Bienvenido..." << endl;
    cout << "Ingrese su edad por favor" << endl;
    cin >> edad;

    // Verficación si el usuario tiene mas de 16 años, puede continuar, caso contrario, finaliza el programa.
    if (edad >= 16)
    {
        // Menú de tipo de categoria
        cout << "+------------------------+" << endl;
        cout << "(1) Estudiante" << endl;
        cout << "(2) Profesional" << endl;
        cout << "(3) Ver todos" << endl;
        cout << "+------------------------+" << endl;
        cin >> categoria;
        switch (categoria)
        {
        case 1:
            // Menú de artículos de estudiante
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop basica $900.00" << endl;
            cout << "(2) Tablet estudiantil $600.00" << endl;
            cout << "(3) Chromebook $700.00" << endl;
            cout << "+------------------------+" << endl;
            cin >> articulo;

            // Procedimientos y validaciones de precio con descuento de cada artículo.
            switch (articulo)
            {
            case 1:
                cout << "Articulo seleccionado: Laptop basica" << endl;
                // Si el precio es menor a la cantidad de saldo disponible se realizará la compra, caso contrario mostrará el saldo faltante.
                if (saldo > 900)
                {
                    precioConDescuento = 900 - (900 * 0.2);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 900)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 900 - (900 * 0.2);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;

            case 2:
                cout << "Articulo seleccionado: Tablet estudiantil" << endl;
                if (saldo > 600)
                {
                    precioConDescuento = 600 - (600 * 0.2);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 600)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 600 - (600 * 0.2);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;
            case 3:
                cout << "Articulo seleccionado: Chromebook" << endl;
                if (saldo > 700)
                {
                    precioConDescuento = 700 - (700 * 0.2);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 700)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 700 - (700 * 0.2);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
            }
            break;
        case 2:
            // Menú de dispositivos para profesionales
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop Avanzada $1500.00" << endl;
            cout << "(2) Tablet Pro $1200.00" << endl;
            cout << "(3) Estacion de trabajo $2000.00" << endl;
            cout << "+------------------------+" << endl;
            cin >> articulo;
            switch (articulo)
            {
            case 1:
                // Si el precio es menor a la cantidad de saldo disponible se realizará la compra, caso contrario mostrará el saldo faltante.
                cout << "Articulo seleccionado: Laptop Avanzada " << endl;
                if (saldo > 1500)
                {
                    precioConDescuento = 1500 - (1500 * 0.1);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 1500)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 1500 - (1500 * 0.1);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;
            case 2:
                cout << "Articulo seleccionado: Tablet Pro " << endl;
                if (saldo > 1200)
                {
                    precioConDescuento = 1200 - (1200 * 0.1);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 1200)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 1200 - (1200 * 0.1);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;
            case 3:
                cout << "Articulo seleccionado: Estacion de trabajo " << endl;
                if (saldo > 2000)
                {
                    precioConDescuento = 2000 - (2000 * 0.1);
                    saldoRestante = saldo - precioConDescuento;
                    cout << "Gracias por su compra" << endl;
                    cout << "Saldo restante: $" << saldoRestante << endl;
                }
                else if (saldo < 2000)
                {
                    cout << "No puede realizar la compra, saldo insuficiente" << endl;
                    precioConDescuento = 2000 - (2000 * 0.1);
                    saldoFaltante = -1 * (saldo - precioConDescuento);
                    cout << "Falta: $" << saldoFaltante << endl;
                }
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
            }
            break;
        case 3:
            // Muestra todos los productos
            cout << "+------------------------+" << endl;
            cout << "  Todos los productos" << endl;
            cout << "+------------------------+" << endl;
            cout << "(1) Laptop basica $900.00" << endl;
            cout << "(2) Tablet estudiantil $600.00" << endl;
            cout << "(3) Chromebook $700.00" << endl;
            cout << "(4) Laptop Avanzada $1500.00" << endl;
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
        cout << "No puedes realizar la compra." << endl;
    }
    return 0;
}