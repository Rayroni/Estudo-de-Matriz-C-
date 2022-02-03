#include <iostream>
using namespace std;
int main()
{
 int lin,col,qtdeImpares=0,M1[4][4];
 for (lin=0;lin<=2;lin++)
 {
 for (col=0;col<=1;col++)
 {
 cout<<"Informe a posição ["<<lin+1<<","<<col+1<<"]: ";
 cin>>M1[lin] [col];
 if (lin%2==0)
 {
     if (M1[lin] [col]%2!=0)
     {
         qtdeImpares++;
     }        
 }   
}
cout<<"Existem"<< qtdeImpares<<"números ímpares em linhas pares.";
 }
