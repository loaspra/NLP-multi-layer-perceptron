#include "menu.h"

Menu::Menu(){}

double Menu::total(){
    return this->precio;
}

void Menu::listarPlatos(){
    for(int i = 0; i < nplatos; i++){
        cout << listaPlatos[i] << endl;
    }
}


MenuTerritorioEnDesnivel::MenuTerritorioEnDesnivel() : Menu(){

    this->precio = 1045;
    this->listaPlatos = {"Rocas Negras", "Valle Seco", "Selva Alta", "Extrema Altura", "Conexion Amazonia", "Suelo de Nlar", "Mil Centro", "Aguas de Amazonia", "Bosque Andino", "Valle Sagrado", "Moray", "Cacao Chuncho"};
    this->nplatos = listaPlatos.size();
}

double MenuTerritorioEnDesnivel::total(){
    return this->precio;

}


MenuMundoMaster::MenuMundoMaster(string bebida) : Menu(){
    this->bebida = bebida;
    this->listaPlatos = {"Rocas Negras", "Valle Seco", "Selva Alta", "Extrema Altura", "Conexion Amazonia", "Suelo de Mar", "Mil Centro", "Aguas de Amazonia", "Bosque Andino", "Valle Sagrado", "Moray", "Cacao Chuncho", "Mar frio", "Cerebro de mar"};

    this->precio = 1250;
    this->nplatos = listaPlatos.size();

    // Dependiendo del tipo de bebida, se le suma un precio:
    /*
    Nectares sin alcohol por 278 soles
    Vinos del Mundo por 488 soles
    */
    if(bebida == "Nectares sin alcohol"){
        this->precio += 278;
    }else if(bebida == "Vinos del Mundo"){
        this->precio += 488;
    }else if(bebida == "Vinos del sudamerica"){
        this->precio += 518;

    }
}

double MenuMundoMaster::total(){
    return this->precio;
}


COrden::COrden(){}

void COrden::agregar(Menu* menu){
    listaMenus.push_back(menu);
}

double COrden::totalVendido(){
    double total = 0;
    for(int i = 0; i < listaMenus.size(); i++){
        total += listaMenus[i]->total();
    }
    return total;
}

void COrden::listarorden(){
    for(int i = 0; i < listaMenus.size(); i++){
        cout << "Menu " << i+1 << endl;
        listaMenus[i]->listarPlatos();
        cout << "****************************" << endl;
    }
}
