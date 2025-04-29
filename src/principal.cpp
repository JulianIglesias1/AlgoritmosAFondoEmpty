
#ifndef _MAIN
#define _MAIN

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
#include "Fecha.hpp"
using namespace std;

int cmpEnteros(int a, int b)
{
   return a - b;
}
int main()
{
//   Node<int>* p = NULL;
//
//   //isEmpty<bool>(p);
//   add<int>(p, 8);
//   add<int>(p, 7);
//
//   show<int>(p);
//
//   remove<int>(p, 8, cmp);
//
//   show<int>(p);
//
//   add <int>(p, 6);
//   addFirst<int>(p, 5);
//   addFirst<int>(p, 2);
//   add<int>(p, 4);
//   add<int>(p, 1);
//
//   find<int>(p, 5, cmp);
//   find<int>(p, 3, cmp);
//
//   orderedInsert<int>(p, 3, cmp);
//
//   sort<int>(p, cmp);
//
//   removeFirst<int>(p);
//
//   show<int>(p);
//
//   free(p);


//   Node<int>* p = NULL;
//   add<int>(p, 5);
//   add<int>(p, 3);
//   add<int>(p, 4);
//   add<int>(p, 1);
//   add<int>(p, 2);
//   addFirst<int>(p, 6);
//
//   show<int>(p);
//
//   remove<int>(p, 3, cmpEnteros);
//
//   show<int>(p);
//
//   cout << " --- " << endl;
//
//   sort<int>(p, cmpEnteros);
//
//   show<int>(p);


   //Fecha f;
   //f.dia = 10;
   //f.mes = 5;
   //f.anio = 2025; //compila, pero conceptualmente esta mal

   Fecha f = fecha(10, 11, 2021);
   cout << fechaToString(f) << endl;

   fechaSetDia(f, 20);
   cout << fechaToString(f) << endl;

   return 0;
}
#endif
