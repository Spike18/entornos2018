//Jaime Francisco Rebollo

#include <iostream>

using namespace std;

int main()
{
    int number;
    
    do
    {
        cin >> number;
        
        if (number > 0)
        {
            for(int i = 0; i < number; i++)
                cout << 1;
            cout << endl;
        }
    } while (number > 0);lear
    return 0;
}
