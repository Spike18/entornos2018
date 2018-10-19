//Jaime Francisco Rebollo Domínguez

#include <iostream>

using namespace std;

int main()
{
    int pesoMax, pesoElef;
    int pesoActual, contador; 
    
    do
    {
        cin >> pesoMax;
        
        if(pesoMax != 0)
        {
            contador = 0;
            pesoActual = 0;
            
            do
            {
                cin >> pesoElef;
                
                if(pesoActual <= pesoMax)
                {
                    pesoActual = pesoActual + pesoElef;
                }
                              
                if(pesoElef != 0 && pesoActual <= pesoMax)
                {
                    contador++;
                }
                
            } while(pesoElef != 0);
            
            cout << contador << endl;
        }
        
    } while(pesoMax != 0);
    
    return 0;
}
