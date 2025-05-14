#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declacion de las variables
    // year para almacenar la edad del usuario
    // optionDevice es para almacenar la opcion del dispositivo e igualmente con las personas
    int year, optionDevice, optionPeople;
    // Guardar el string del tipo de usuario y del objetoComprado que selecciono el usuario
    string kindOfPeople, objetoComprado;
    // Wallet es su saldo de 1000, y el saldo es el saldo restante donde de igual forma se ocupa para lo restante para no declarar mas variables
    float wallet = 1000.00, saldo = 0;

    // Mensaje para solicitar la edad y se guarda en la variable year
    cout << "Ingrese su edad: ";
    cin >> year;

    // Se verifica que si es mayor o igual que 16 anos
    if (year >= 16)
    {
        // Se le pide al usuario que ingrese el tipo de persona y se guarda
        cout << "Ingrese el tipo de usuario: ";
        cin >> kindOfPeople;
        // Se comienza la comparacion que escribio para asignarle un numero para el switch de abajo
        if (kindOfPeople == "Estudiante" || kindOfPeople == "estudiante" || kindOfPeople == "estudiantes" || kindOfPeople == "Estudiantes")
        {
            // Si puso estudiante o Estudiante se le asigna 1
            optionPeople = 1;
        }
        else if (kindOfPeople == "Profesional" || kindOfPeople == "profesional")
        {
            // Caso del profesional o Profesional, 2
            optionPeople = 2;
        }
        else if (kindOfPeople == "Todos" || kindOfPeople == "todos" || kindOfPeople == "Todo" || kindOfPeople == "todo")
        {
            // caso de todos, Todos, etc entonces se le asigna 3
            optionPeople = 3;
        }
        else
        {
            // Si en dado caso no cumple ninguna de las anteriores entonces se le pone el mensajes de las opciones y se le cierra el programa
            cout << "Ha ingresado un tipo de usuario no valida, prueba mas tarde. Las opciones son: Estudiante, Profesional o Todos \n";
            return 1;
        }
        // Se pone como la variable a comprar el optionPeople que seria la opcion digitada del usuario convertida a numero
        switch (optionPeople)
        {
        case 1:
            // Se le imprime el menu de estudiante con sus opciones y se guarda en la variable
            cout << "Dispositivos disponibles con descuentos del 20% \n"
                 << "1. Laptop Basica $720 \n"
                 << "2. Tablet Estudiantil $480 \n"
                 << "3. Chromebook $560 \n"
                 << "Seleccione un dispositivo: ";
            cin >> optionDevice;
            // Comienzo de la comparacion del optionDevice agarrado o colocado por el usuario
            switch (optionDevice)
            {
            case 1:
                // Si elijio uno se sabe que es laptop basica entonces se guarda en la variable el string del nombre para ocuparlo abajo y asi imprimirlo hasta abajo
                // se hace la resta con el precio y se hace
                objetoComprado = "Laptop Basica";
                saldo = wallet - 720;
                break;
            case 2:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Tablet Estudiantil";
                saldo = wallet - 480;
                break;
            case 3:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Chromebook";
                saldo = wallet - 560;
                break;
            default:
                // Si no puso ninguna opcion puesto entonces se le dice que no es una opcion valida entnoces se sale temprano
                cout << "Opcion no valida, error, prueba con opcion del 1 al 3 \n";
                return 1;
                //Se quito el break porque pues you know te program se detuvo ya aca ya no se siguio ejecutando
            }
            break;
        case 2:
            // Se le imprime el menu de profesional con sus opciones y se guarda en la variable
            cout << "Dispositivos disponibles con descuentos del 10% \n"
                 << "1. Laptop Avanzada $1350 \n"
                 << "2. Tablet Pro $1080 \n"
                 << "3. Estacion de Trabajo $1800 \n"
                 << "Seleccione un dispositivo: ";
            cin >> optionDevice;
            // Comienzo de la comparacion del optionDevice agarrado o colocado por el usuario
            switch (optionDevice)
            {
            case 1:
                // Si elijio uno se sabe que es laptop Avanzada entonces se guarda en la variable el string del nombre para ocuparlo abajo y asi imprimirlo hasta abajo
                // se hace la resta con el precio y se hace
                objetoComprado = "Laptop Avanzada";
                saldo = wallet - 1350;
                break;
            case 2:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Tablet Pro";
                saldo = wallet - 1080;
                break;
            case 3:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Estacion de trabajo";
                saldo = wallet - 1800;
                break;
            default:
                // Si no puso ninguna opcion puesto entonces se le dice que no es una opcion valida entnoces se sale temprano
                cout << "Opcion no valida, error, prueba con opcion del 1 al 3 \n";
                return 1;
            }
            break;
        case 3:
            // Se le imprime el menu de todo con sus opciones y se guarda en la variable
            cout << "Dispositivos disponibles \n"
                 << "1. Laptop Basica $900 \n"
                 << "2. Tablet Estudiantil $600 \n"
                 << "3. Chromebook $700 \n"
                 << "4. Laptop Avanzada $1500 \n"
                 << "5. Tablet Pro $1200 \n"
                 << "6. Estacion de Trabajo $2000 \n"
                 << "Seleccione un dispositivo: ";
            cin >> optionDevice;
            // Comienzo del switch con la vairbale optionDevice para comparar para cada caso
            switch (optionDevice)
            {
            case 1:
                // Si elijio uno se sabe que es laptop basica entonces se guarda en la variable el string del nombre para ocuparlo abajo y asi imprimirlo hasta abajo
                // se hace la resta con el precio y se hace, aqui la unica diferencia es que no tiene descuento y no se le aplica
                objetoComprado = "Laptop Basica";
                saldo = wallet - 900;
                break;
            case 2:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Tablet Estudiantil";
                saldo = wallet - 600;
                break;
            case 3:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Chromebook";
                saldo = wallet - 700;
                break;
            case 4:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Laptop Avanzada";
                saldo = wallet - 1500;
                break;
            case 5:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Tablet Pro";
                saldo = wallet - 1200;
                break;
            case 6:
                // Misma logica solo cambiando el nombre y dinero que se guarda (Resta)
                objetoComprado = "Estacion de trabajo";
                saldo = wallet - 2000;
                break;
            default:
                // Si no puso ninguna opcion puesto entonces se le dice que no es una opcion valida entnoces se sale temprano
                cout << "Opcion no valida, error, prueba con opcion del 1 al 6 \n";
                return 1;
            }
            break;
        default:
            // Este default nunca sucedera ya que pues esta la situacion del else antes, pero se le pone por si acaso
            cout << "Error, contacte con un profesional (merivas@uca.edu.sv o a diosito :D) \n";
            return 1;
        }
    }
    else
    {
        // Si tiene menos que 16 años se le dice que es menor y no puede comprar y se le sale del programa (salida temprana)
        cout << "No puedes comprar, sos menor de edad, regrese cuando estes grande. \n";
        return 1;
    }

    cout << "Saldo disponible: $" << wallet << endl;

    if (saldo < 0)
    {
        // Se multiplica por menos 1 para volverlo positivo, ya que como si la resta de 1000 con un numero mayor que entonces pues da un numero negativo
        // Entonces para volverlo positivo porque ese es el valor restante que le falta haciendolo a la inversa de forma sencilla
        saldo *= -1;
        // Se le imprimi el mensaje que no pudo comprar con lo que le faltaba para poder comprar y el que no pudo comprar
        cout << "No fue posible realiza la compra \n"
             << "Le falta: $" << saldo << " para poder comprar: " << objetoComprado << endl;
    }
    else
    {
        // Se le imprimi el mensaje que si pudo comprarlo, diciendole que compro y cuanto saldo le quedo
        cout << "Compra exitosa. Usted ha comprado: " << objetoComprado << " \n"
             << "Saldo restante: $" << saldo << endl;
    }

    return 0;
}

/*
    DERECHOS DE AUTOR
    JOSUE EMILIANO VALDES JACOBO
    #00003525
*/