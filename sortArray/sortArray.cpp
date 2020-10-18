#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    const int iloscElementow=20;//ilosc elementow

    float tab[iloscElementow];
    srand(time(0));
    //generowanie randow od 1 do 100
    for (int i = 0; i < iloscElementow; i++)
    {
        tab[i] = (rand() % 100 + 1);
    }
    
    cout << "The numbers not sorted:" << endl;

    for (int i = 0; i < iloscElementow; i++)
    {
        cout << tab[i] << endl;
    }
    cout << endl << endl<<"the numbers sorted:"<<endl;


    int j = 1;
    while (j!=0)
    {
        j = 0;
        for (int i = 0; i < iloscElementow-1; i++)
        {

            if (tab[i] > tab[i + 1])
            {
                float p, d;
                p = tab[i];
                d = tab[i + 1];
                tab[i] = d;
                tab[i + 1] = p;
                j++;
            }
        }
    }

    for (int i = 0; i < iloscElementow; i++)
    {
        cout << tab[i] << endl;
    }


}
