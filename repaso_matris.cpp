#include<iostream>
#include<cstdlib>

using namespace std;

void cargar(int m[][4], int nf, int nc);
void mostrar(int m[][4], int nf, int nc);
int maximoFila(int fila, int m[][4], int nf, int nc);
int posMaximo(int fila, int m[][4], int nf, int nc);
int sumaColumna(int columna, int m[][4], int nf, int nc);
int cantPosiColumna(int columna, int m[][4], int nf, int nc);
int sumamatris(int m[][4], int nf, int nc);

int main(){ system("color 37");

          int opc, mat[4][4], fila, columna;

          while(true){
            cout<<"****************************************************"<<endl;
            cout<<" 1 MUESTRA EL MAXIMO DE LA FILA "<<endl;
            cout<<" 2 MUESTRA LA POSICION DEL MAXIMO EN LA FILA "<<endl;
            cout<<" 3 MUESTRA LA SUMA DE LA COLUMNA "<<endl;
            cout<<" 4 MUESTRA LA CANTIDAD DE POSITIVOS DE LA COLUMNA "<<endl;
            cout<<" 5 MUESTRA LA SUMA DE LA MATRIS "<<endl;
            cout<<" 0 SALIR "<<endl;
            cout<<"*****************************************************"<<endl;
            cout<<" ELIJA UN EJERCICIO ";
            cin>>opc;
            system("cls");
          switch(opc){
          case 1: cargar(mat,4,4);
                  mostrar(mat,4,4);
                  cout<<" EL MAXIMO DE QUE FILA QUIERE SABER? ";
                  cin>>fila;
                  maximoFila(fila,mat,4,4);
                  system("pause");
                  system("cls");
              break;
          case 2: cargar(mat,4,4);
                  mostrar(mat,4,4);
                  cout<<" DE QUE FILA QUIERE SABER LA POSICION DEL MAXIMO? ";
                  cin>>fila;
                  posMaximo(fila,mat,4,4);
                  system("pause");
                  system("cls");
              break;
          case 3: cargar(mat,4,4);
                  mostrar(mat,4,4);
                  cout<<" LA SUMA DE QUE COLUMNA QUIERE SABER? ";
                  cin>>columna;
                  sumaColumna(columna,mat,4,4);
                  system("pause");
                  system("cls");
              break;
          case 4: cargar(mat,4,4);
                  mostrar(mat,4,4);
                  cout<<" INGRESE EL NUMERO DE COLUMNA PARA SABER CUANTOS POSITIVOS TIENE: ";
                  cin>>columna;
                  cantPosiColumna(columna,mat,4,4);
                  system("pause");
                  system("cls");
              break;
          case 5: cargar(mat,4,4);
                  mostrar(mat,4,4);
                  cout<<" LA SUMA DE LA MATRIS ES: ";
                  cout<<sumamatris(mat,4,4)<<endl;
                  system("pause");
                  system("cls");
              break;
          case 0: return 0;
              break;
             }
          }

system ("pause");
return 0;}

void cargar(int m[][4], int nf, int nc){
  int i, j, num=1;
  for(i=0;i<nf;i++){
    for(j=0;j<nc;j++){
        m[i][j]=num;
        num++;
    }
  }
}
void mostrar(int m[][4], int nf, int nc){
  int i,j;
  for(i=0;i<nf;i++){
    for(j=0;j<nc;j++){
        cout<<m[i][j]<<"\t";
    } cout<<endl;
  }
}
int maximoFila(int fila, int m[][4], int nf, int nc){
    if(fila<=0 || fila>nf) return false;
    int i, Max=0;
    for(i=0;i<nc;i++){
    if(m[fila-1][i]>Max){Max=m[fila-1][i];}
    }
    cout<<" EL MAXIMO DE LA FILA ES: "<<Max<<endl;
    return true;
}
int posMaximo(int fila, int m[][4], int nf, int nc){
   if(fila<=0 || fila>nf) return false;
   int i, posMax=0;
   for(i=0;i<nc;i++){
    if(m[fila-1][i]>posMax){posMax=i+1;}
   } cout<<" LA POSICION DEL MAXIMO ES: "<<posMax<<endl;
   return true;
}
int sumaColumna(int columna, int m[][4], int nf, int nc){
   if(columna<=0 || columna>nf) return false;
   int i, suma=0;
   for(i=0;i<nf;i++){
    suma+=m[i][columna-1];
   } cout<<" LA SUMA DE LA COLUMNA ES: "<<suma<<endl;
    return true;
}
int cantPosiColumna(int columna, int m[][4], int nf, int nc){
   if(columna<=0 || columna>nf) return true;
   int i, c=0;
   for(i=0;i<nf;i++){
    if(m[i][columna-1]>0){c++;}
   } cout<<" LA CANTIDAD DE POSITIVOS DE LA COLUMNA ES: "<<c<<endl;
     return true;
}
int sumamatris(int m[][4], int nf, int nc){
   int i,j, suma=0;
   for(i=0;i<nf;i++){
    for(j=0;j<nc;j++){
        suma=suma+m[i][j];
    }
   } return suma;
}
