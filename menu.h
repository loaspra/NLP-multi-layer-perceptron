#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Menu{
    protected:
        int nplatos;
        double precio;
        vector<string> listaPlatos;
    public:
        Menu(); 

        double total();

        void listarPlatos();
};


class MenuTerritorioEnDesnivel : public Menu{
    public:
        MenuTerritorioEnDesnivel();

        double total();
};


class MenuMundoMaster : public Menu{
    private:
        string bebida;
    public:
        MenuMundoMaster(string bebida);

        double total();
};


class COrden{
    private:
        vector<Menu*> listaMenus;
    public:
        COrden();

        void agregar(Menu* menu);

        double totalVendido();

        void listarorden();
};

#endif
