#include <iostream>

using namespace std;

class Hora
{
    public:
        Hora();
        {
            hr = 0;
            minu = 0;
        }

        Hora(int h, int m)
        {
            hr = h;
            minu = m;
        }

        //gets
        int gethr()
        {
            return hr;
        }

        int getminu()
        {
            return minu;
        }

        //sets y muestra
        int sethr(int h)
        {
            hr = h;
        }

        int setminu(int m)
        {
            minu = m;
        }

        void muestra()
        {
            cout << hr << ":" << minu <<endl;
        }


    private:
        int hr;
        int minu;
};


