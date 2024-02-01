#include "materia.hpp"

materia::materia(int Clave, const string &Nombre, const string &ProfesorTit, const string &LibroTexto)
    : Clave(Clave), Nombre(Nombre), ProfesorTit(ProfesorTit), LibroTexto(LibroTexto)
{
}

void materia::imprime()
{
    cout << endl << endl;
    cout << "Clave: " << Clave << endl;
    cout << "Nombre: " << Nombre << endl;
    cout << "Profesor: " << ProfesorTit << endl;
    cout << "Libro de texto: " << LibroTexto << endl;
    cout << endl << endl;
}

void materia::cambiaClave(const int nuevo)
{
    Clave = nuevo;
    cout << "Clave cambiada exitosamente." << endl;
}

void materia::cambiarProfe(const string nuevo)
{
    ProfesorTit = nuevo;
    cout << "Profesor cambiado exitosamente." << endl;
}

int materia::getClave() const
{
    return Clave;
}

materia &materia::operator=(const materia &m)
{
    Clave = m.Clave;
    Nombre = m.Nombre;
    ProfesorTit = m.ProfesorTit;
    LibroTexto = m.LibroTexto;

    return *this;
}

bool materia::operator==(const materia &m) const
{
    return Clave == m.Clave;
}

bool materia::operator!=(const materia &m) const
{
    return Clave != m.Clave;
}

bool materia::operator<(const materia &m) const
{
    return Clave < m.Clave;
}

bool materia::operator<=(const materia &m) const
{
    return Clave <= m.Clave;
}

bool materia::operator>(const materia &m) const
{
    return Clave > m.Clave;
}

bool materia::operator>=(const materia &m) const
{
    return Clave >= m.Clave;
}

ostream &operator<<(ostream &os, const materia &m)
{
    os << "Clave: " << m.Clave << endl;
    os << endl << "Nombre: " << m.Nombre << endl;
    os << "Profesor" << m.ProfesorTit << endl;
    os << "Libro de texto" << m.LibroTexto;

    return os;
}

istream &operator>>(istream &is, materia &m)
{
    is >> m.Clave;
    getline(is, m.Nombre);
    getline(is, m.ProfesorTit);
    getline(is, m.LibroTexto);

    return is;
}
