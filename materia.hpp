#ifndef __MATERIA_H__
#define __MATERIA_H__
#include <iostream>
#include <string> 

using namespace std;
class materia
{
  private:
    int Clave;
    string Nombre;
    string ProfesorTit;
    string LibroTexto;

  public:
    materia(int Clave, const string &Nombre, const string &ProfesorTit, const string &LibroTexto);
    void imprime();
    void cambiaClave(const int);
    void cambiarProfe(const string);
    int getClave() const;

    materia &operator=(const materia &);

    bool operator==(const materia &) const;
    bool operator!=(const materia &) const;
    bool operator<(const materia &) const;
    bool operator<=(const materia &) const;
    bool operator>(const materia &) const;
    bool operator>=(const materia &) const;

    friend istream &operator>>(istream &, materia &);
    friend ostream &operator<<(ostream &, const materia &);
};

#endif // __MATERIA_H__