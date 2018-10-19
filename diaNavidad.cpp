//Jaime Francisco Rebollo Domínguez

#include <iostream>

using namespace std;

int main()
{
    int casos, dia, mes;
    
    cin >> casos;
    
    for(int i = 0; i < casos; i++)
    {
        cin >> dia >> mes;
        
        if((dia == 25) && (mes == 12))
            cout << "SI" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
