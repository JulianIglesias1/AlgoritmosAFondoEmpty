#ifndef _TARRAYS_T_
#define _TARRAYS_T_

#include <iostream>

template <typename T>
int add(T arr[],int& len,T e)
{
   arr[len] = e;
   len++;
   return len-1;
}

template <typename T>
void insert(T arr[],int& len,T e,int p)
{
   for(int i = len; i > p; i--)
   {
      arr[i] = arr[i-1];
   }
   arr[p] = e;
   len++;
}

template <typename T>
T remove(T arr[],int& len,int p)
{
   T ret = arr[p];
   for(int i = p+1; i < len; i++)
   {
      arr[i-1] = arr[i];
   }
   len--;
   return ret;
}

template <typename T, typename K>
int find(T arr[],int len,K k,int cmpTK(T,K))
{
   int i = 0;
   while(i < len && cmpTK(arr[i], k) != 0)
   {
      i++;
   }
   return i<len?i:-1;
}

template <typename T>
int orderedInsert(T arr[],int& len,T e,int cmpTT(T,T))
{
   int i = 0;
   // Encontrar la posición correcta para insertar 'e'
   while (i < len && cmpTT(arr[i], e) < 0) {
      i++;
   }

   // Mover elementos para hacer espacio para 'e'
   for (int j = len; j > i; j--) {
      arr[j] = arr[j - 1];
   }

   // Insertar el elemento en la posición correcta
   arr[i] = e;
   len++; // Incrementar la longitud del arreglo

   return i; // Retornar la posición en la que se insertó 'e'
}

template <typename T>
void sort(T arr[],int len,int cmpTT(T,T))
{
   for (int i = 0; i < len - 1; i++) {
      for (int j = i + 1; j < len; j++) {
         if (cmpTT(arr[i], arr[j]) > 0) { // Comparación sin cambiar la firma
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}



#endif
