#include <iostream>
#include <fstream>
#include "Ordenamiento.h"
using namespace std;

int main() {
  ofstream file;
  file.open("Datos.txt",ios::app);
  int a[100], n;
  cout<<"Ingrese la cantidad: ";
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cout<<"-- Elemento N°"<<i+1<<": ";
    cin>>a[i];
  }
  file<<"\n° ° ° ° ° ° ° ° ° ° ° ° ° ° ° ° ° °\n";
  cout<<"\nDatos desordenados: ";
  file<<"\nDatos des5ordenados: ";
  for(int i=0; i<n; i++)
  {
    file<<"["<<a[i]<<"]";
    cout<<"["<<a[i]<<"]";
  }
  cout<<endl;
  file<<endl;
  O_heapSort(a, n);
  cout<<"\nDatos ordenados: ";
  file<<"\nDatos ordenados: ";
  for(int i=0; i<n; i++)
  {
    file<<"["<<a[i]<<"]";
    cout<<"["<<a[i]<<"]";
  }
  cout<<endl;
  file<<endl;
  file<<"\nAlgoritmo de ordenamiento HeapSort\n";
  file<<"\n° ° ° ° ° ° ° ° ° ° ° ° ° ° ° ° ° °\n";
  file.close();
} 
