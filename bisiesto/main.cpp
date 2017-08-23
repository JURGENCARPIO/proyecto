#include <iostream>

using namespace std;

int main()
{
    int anio;

    cout<<"ingrese el numero"<<endl;
    cin>>anio;
    if (anio%4==0){
        if ((anio%100)!=0 || (anio%400==0))
            cout<<"el anio si es bisiesto"<<endl;
    }
    else
        cout<<"el anio no es bisiesto"<< endl;
    return 0;
}
