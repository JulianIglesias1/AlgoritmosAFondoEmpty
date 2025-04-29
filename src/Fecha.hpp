/*
 * Fecha.hpp
 *
 *  Created on: 29/04/2025
 *      Author: Julian Iglesias
 */

#ifndef FECHA_HPP_
#define FECHA_HPP_

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/parte2/Array.hpp"
#include "biblioteca/tads/parte2/Map.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/MultidimColl.hpp"
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};
Fecha fecha(int d, int m, int a) { //funcion de inicializacion (similar al constructor de POO
    Fecha x;
    x.dia = d;
    x.mes = m;
    x.anio = a;
    return x;
}
string fechaToString(Fecha f) { //funcion de conversion
    return to_string(f.dia) + "/" + to_string(f.mes) + "/" + to_string(f.anio);
}
void fechaSetDia(Fecha& f, int d) {
    f.dia = d;
}


#endif /* FECHA_HPP_ */
