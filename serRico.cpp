//Jaime Francisco Rebollo Domínguez

#include <iostream>

using namespace std;

int main()
{
    int casos, acuarios, max, diferencia;
    int calculo;
    
    cin >> casos;
    
    for(int i = 0; i < casos; i++)
    {
        cin >> acuarios >> max >> diferencia;
        
        calculo = 0;
        
        for(int j = 0; j < acuarios; j++)
        {
            calculo += max;
            max = max - diferencia;
        }
        
        cout << calculo << endl;
    }
            
    return 0;
}
