#include  
using namespace std;
int main(void){
   int i;
   int fact=1;
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   if(numero<0) fact =0;
   else if(numero==0) fact=1;
   else{
      for (i = 1; i <= numero; i++){
         fac = fact*i;
      }
   }
   cout<<"Factorial de "<
   system("pause");
}
