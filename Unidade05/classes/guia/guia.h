#ifndef GUIA_H
#define GUIA_H
#include <iostream>
using namespace std;

class Guia{
    private:
        string id;
        string titulo;
        string url;

    public:
        Guia();
        Guia(string, string);
        void setId(string);
        void setTitulo(string);
        void setUrl(string);
        string getId();
        string getTitulo();
        string getUrl();
};

#endif // !GUIA_H