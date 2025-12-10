#include <iostream>
using namespace std;
#include <ctime>
#include <vector>

int ordina(int n, vector<int> v) 
{
    int i, j, t;

    bool scambio;

    scambio = true;

    i = 0;

    j = 0;

    while(i<=n-1 and scambio)
    {
        scambio = false;

        j = 0;

        while(j<=(n-2)-i)
        {
            v[j]>v[j+1]
            {
                t = v[j];

                v[j]=v[j+1];

                v[j+1]=t;

                scambio = true;
            }
            j=j+1;
        }
        i=i+1;
    }
    int stampa(int n, int v)
    {
        int i;

        cout << "Vettore: " << endl;

        i=0;

        while(i<N)
        {
            cout << v[i] << ";" << endl;
        }
        cout << ";" << endl;
    }
    int main()
    {
        int c, i, j;

        i=0;

        c=5;

        vector<int> v(c);

        vector<int> w(c);

        while(i<=c-1)
        {
            v[i]= rand() % (c*10)+1;
            w[i]= rand() % (c*10)+1;
            i=i+1;
        }
    }
    ordina(c,v);
    ordina(c,w);
    stampa(c,v);
    stampa(c,w);

    return 0;

     
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
