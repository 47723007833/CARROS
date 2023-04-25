#include <iostream>
using namespace std;
class carro 
{
    public:
    string cor ;
    string Modelo;
    float VelMax;
    void buzinar ();
    
};

int main ()
{
    carro MeuCarro;
    
    MeuCarro.cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f ;
    
    MeuCarro.buzinar();
    cout << MeuCarro.cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
}
void carro::buzinar (){
    cout << "Bi,Bi!" << endl;
}