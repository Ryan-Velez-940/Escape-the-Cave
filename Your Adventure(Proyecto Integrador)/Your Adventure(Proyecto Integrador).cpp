// Your Adventure(Proyecto Integrador).cpp
// Ryan X Velez Negron 11/18/2024


#include <iostream> //Input y output
#include <string>   //Librería para el uso de los strings
#include <cstdlib>  //Para el uso de las funciones de borrar pantalla ( system("CLS"); (es solo para windows) )
#include <chrono>   //Tiempo ingresado la cual esperará para que aparezca la próxima línea. ( sleep_for(chrono::seconds(1)) ) 
#include <thread>   //Necesario para el uso completo de la función utilizada de la librería "chrono" ( this_thread:: )
#include <conio.h>  //Función para que se pueda utilizar "pulsa para continuar" ( int _getch(); )
using namespace std;
void IuBattleFunction(int HP, int ATK, int Pociones) { //Es una función para evitar la redundancia en el código y para que quede más limpio.
    cout << "Que hago?\n";
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
    cout << "Vida " << HP << "/100  " << "Fuerza " << ATK << "\n";
    cout << "Acciones: "<<"atacar"<<" "<<"bloquear"<<" "<<"curar\n";
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
}
void Atacar(int VidaEnemy1, int ATK) {
    cout << "Atacas al enemigo.\n";
    VidaEnemy1 -= ATK;
    cout << "Le quitaste " << ATK << " puntos de vida\n";
}

void Curar(int & HP, int PocHeal) {
    cout << "Utilizaste una poción\n";
    HP += PocHeal;
    cout << "Te curaste " << PocHeal << " puntos de vida. Vida actual: " << HP << endl;
}
    void Bloquear(int HP) {
        HP += 3;
        cout << "Te preparas para bloquear el ataque del enemigo.\n";
    }

int main()
{
    
    int i=0, HP = 100, ATK=5,Pociones=3,PocHeal=25,VidaEnemy1 = 15;
    string accion, atacar, bloquear, curar;
    cout << "...\n";
    cout << "Despiertas en una cueva.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Inmediatamente encuentras tus pertenencias regadas en el suelo\n";
    this_thread::sleep_for(chrono::seconds(2));
    while (i >= 0) {
        cout << "Recoges tu linterna. Escribe \"encender\" para continuar\n";
        cin>>accion;
        if (accion == "encender") {
            break;
        } else {
            i += 1;
        }
    }
    cout << "Encuentras un tallado en la pared de la cueva lo siguiente:\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Si quieres salir de esta cueva tendras que completar las siguentes desafios.\" \n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Luego de leer, decides continuar hacia adelante.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Pulsa una tecla para continuar.\n";
    int _getch();
    system("CLS");
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Encuentras una nota en el suelo que dice: \"Tendras que derrotar al que se presenta frente de la puerta\"\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Piensas \"Una puerta dentro de una cueva?\"\n";
    cout << "...";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "......\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Caminas hasta encontrar la puerta.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Ah, por fin, la puerta.\"\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Ves que frente de esa puerta hay un individuo.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Asumo que es el quien tengo que derrotar, no le veo otra manera para seguir.\"\n";
    cout << "Pulsa cualquier tecla para comenzar la batalla.";
    int _getch();
    system("CLS");
    while (i >= 0) {
        cout << "Te enfrentas al enemigo.\n";
        cout << "Vida del enemigo: " << VidaEnemy1<<endl;
        IuBattleFunction( HP, ATK, Pociones);
        cin >> accion;
        if (accion == "atacar") {
            Atacar(VidaEnemy1, ATK);
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");
            
            if (VidaEnemy1 <= 0) {
                break;
            }
        }else if (accion == "bloquear") {
            Bloquear(HP); //Le da vida para que cuando te ataque, la vida se quede igual de cuando comenzo el "block"
            HP += 15;
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");
        }
        else if (accion == "curar") {
            Curar(HP, PocHeal);
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");
        
        }else {
            cout << "accion invalida, intente de nuevo";
            //el enemigo te termina atacando porque simula el hecho de que "fallaste" la accion
        }
        if (VidaEnemy1 > 0) {
            cout << "El enemigo ataca.\n";
            HP -= 15;
            cout << "Te quita 3 puntos de vida. Vida Actual: " << HP << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");

        }
        if (HP <= 0) {
            cout << "Has sido derrotado.";
            return 0;
        }
    }
    cout << "pulsa cualquier tecla para pasar por la puerta"; 
    int _getch();
    //aqui comienza la parte de josé
    return 0;
}


