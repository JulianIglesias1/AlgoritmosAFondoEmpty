#ifndef _TLIST_T_
#define _TLIST_T_

#include <iostream>
#include <stdio.h>

template <typename T>
struct Node
{
   T info;
   Node<T>* sig;
};

template <typename T>
Node<T>* add(Node<T>*& p,T e)
{
   //creo un nuevo nodo
   Node<T>* nuevo = new Node<T>();
   nuevo->info = e;
   nuevo->sig = NULL;

   //la lista ya existe?
   if(p != NULL)
   {
      //busco el ultimo
      Node<T>*aux = p;
      while(aux->sig != NULL)
      {
         aux = aux->sig;
      }
      //enlazo el nuevo nodo
      aux->sig = nuevo;
   }
   else
   {
      //nuevo es el primero
      p = nuevo;
   }
   return nuevo;
}

template <typename T>
Node<T>* addFirst(Node<T>*& p,T e)
{
   //creo un nuevo nodo
   Node<T>* nuevo = new Node<T>();
   nuevo->info = e;
   nuevo->sig = NULL;

   nuevo->sig = p;
   p = nuevo;

   return nuevo;
}

template <typename T, typename K>
T remove(Node<T>*& p,K k,int cmpTK(T,K))
{
   //busco lo que voy a eliminar
   Node<T>* aux = p;
   Node<T>* ant = NULL;
   while(cmpTK(aux->info, k) != 0)
   {
      ant = aux;
      aux = aux->sig;
   }

   //encontre en el ultimo lugar
   if(aux->sig == NULL)
   {
      T t = aux->info;
      delete aux;
      if(ant != NULL)
      {
         ant->sig = NULL;
      }
      else
      {
         p = NULL;
      }
      return t;
   }

   //encontre en el primer lugar
   if(ant == NULL)
   {
      T t = aux->info;
      p = aux->sig;
      delete aux;
      return t;
   }

   //caso normal: encontre por medio
   ant->sig = aux->sig;
   T t = aux->info;
   delete aux;
   return t;
}

template <typename T>
T removeFirst(Node<T>*& p)
{
   T valor = p->info;
   Node<T>* aux = NULL;
   aux = p->sig;
   delete p;
   p = aux;
   return valor;
}

template <typename T, typename K>
Node<T>* find(Node<T>* p,K k,int cmpTK(T,K))
{
   Node<T>* aux = p;
   while(aux != NULL && cmpTK(aux->info, k) == 0)
   {
      aux = aux->sig;
   }
   return aux;
}

template <typename T>
Node<T>* orderedInsert(Node<T>*& p,T e,int cmpTT(T,T))
{
   Node<T>* nuevo = new Node<T>();
   nuevo->info = e;

   Node<T>* ant = NULL;
   Node<T>* aux = p;
   while(aux != NULL && cmpTT(aux->info, e) < 0)
   {
      ant = aux;
      aux = aux->sig;
   }
   if(ant == NULL)
   {
      nuevo->sig = p;
      p = nuevo;
   }
   else
   {
      ant->sig = nuevo;
      if(aux == NULL)
      {
         nuevo->sig = NULL;
      }
      else
      {
         nuevo->sig = aux;
      }
   }
   return nuevo;
}

template <typename T>
Node<T>* searchAndInsert(Node<T>*& p,T e,bool& enc,int cmpTT(T,T))
{
   Node<T>* aux = p;
   Node<T>* ant = NULL;
   while(aux != NULL)
   {
      int cmp = cmpTT(e, aux->info);
      if(cmp == 0)
      {
         enc = true;
         return aux;
      }
      if(cmp < 0) break;
      ant = aux;
      aux = aux->sig;
   }
   Node<T>* nuevoNodo = new Node<T>{e, aux};
   if(ant == NULL)
   {
      p = nuevoNodo;
   }
   else
   {
      ant->sig = nuevoNodo;
   }
   enc = false;
   return nuevoNodo;
}

template <typename T>
void sort(Node<T>*& p,int cmpTT(T,T))
{
   if (!p) return; // Verificar si la lista está vacía
   bool swapped;
   do {
      swapped = false;
      Node<T>* aux = p;
      while (aux->sig != nullptr) {
         if (cmpTT(aux->info, aux->sig->info) > 0) {
         // Intercambio de valores (swap manual)
         T temp = aux->info;
         aux->info = aux->sig->info;
         aux->sig->info = temp;
         swapped = true; // Indicar que se realizó un intercambio
         }
         aux = aux->sig;
      }
   } while (swapped); // Repetir hasta que no haya más intercambios
}

template <typename T>
bool isEmpty(Node<T>* p)
{
   if(p == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}

template <typename T>
void free(Node<T>*& p)
{
   while (p != NULL) {
      Node<T>* aux = p->sig;
      delete p;
      p = aux;
   }
}

template <typename T>
Node<T>* push(Node<T>*& p,T e)
{
   return NULL;
}

template <typename T> T pop(Node<T>*& p)
{
   T t;
   return t;
}

template <typename T>
Node<T>* enqueue(Node<T>*& p,Node<T>*& q,T e)
{
   return NULL;
}

template <typename T>
Node<T>* enqueue(Node<T>*& q,T e)
{
   return NULL;
}

template <typename T>
T dequeue(Node<T>*& p, Node<T>*& q)
{
   T t;
   return t;
}

template <typename T>
T dequeue(Node<T>*& q)
{
   T t;
   return t;
}

template <typename T>
void show(Node<T>* p)
{
   Node<T>* aux = p;
   while(aux != NULL)
   {
      cout << "" << aux->info << " -> ";
      aux = aux->sig;
   }
   cout << "NULL" << endl;
}



#endif
