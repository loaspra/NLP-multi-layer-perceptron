#include "menu.h"

using namespace std;


int main() {
    COrden orden ;
    orden.agregar(new MenuTerritorioEnDesnivel( )) ;
    orden.agregar(new MenuMundoMaster("Vinosu del umundo"));
    orden.agregar(new MenuMundoMaster("Vinos de sudamerica"));
    orden.agregar(new MenuMundoMaster("Nectares sin alcohol"));
    orden.agregar(new MenuTerritorioEnDesnivel( )) ;
    orden.listarorden( );
    cout << "Total recaudado por Central: " << orden.totalVendido( ) << endl;
    return 0;
}