#include <iostream>
#include <time.h>
#include <conio.h>
class Plansza
{
    public:
    int n,m;
    Plansza()
    {}
    char** tab=new char*[n];
    void mapa(int n,int m);
};

void Plansza::mapa(int n,int m)
{

    for(int i=0;i<n;i++)

    {
    tab[i]=new char[m];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j]=' ';
        }
    }
}
class Snake:public Plansza
{
    int dlgOgona;
    int kierunek=26;
    char* wsknakoniec=new char;
    char* wsknaGlowe=new char;

public:
    void start()
    {   int i=3,j=6,r=m/2;
        wsknakoniec=&tab[i][m/2];
        for(i;i<j;i++)
            tab[i][m/2]='o';
        tab[j][r]='@';
        ruch(23,j,r,i);

    }
    void ruch(int kierunek,int j,int r,int i)
    {
        if(kierunek==24)
        {
            do
            {
                *wsknakoniec=' ';
                i++;
                wsknakoniec=&tab[i][r];
                tab[j][r]='o';
                j++;
                tab[j][r]='@';
            }while(_kbhit());
        }
        else if(kierunek==25)
        {
           do
            {
                *wsknakoniec=' ';
                wsknakoniec=&tab[i][r];
                tab[j][r]='o';
                j--;
                tab[j+1][r]='o';
            }while(_kbhit() );
        }
        else if(kierunek==26)
        {
             do
            {
                *wsknakoniec=' ';
                wsknakoniec=&tab[i+1][r];
                tab[j][r]='o';
                i++;
                tab[j+1][r]='o';
            }while(_kbhit() );
        }
        else if(kierunek==27)
        {
            do
            {
                *wsknakoniec=' ';
                wsknakoniec=&tab[i][r];
                tab[j][r]='o';
                i--;
                tab[j+1][r]='o';
            }while(_kbhit() );
        }
        else
        {
            do
            {
                *wsknakoniec=' ';
                tab[j][r]='o';
                i++;
                tab[j+1][r]='o';
            }while(_kbhit() );
        }
        while(_kbhit())
        {
            ruch(kierunek,j,r,i);

        }
    }

};
int main()
{
    int kierunek;
    Plansza p;
    Snake s;
    p.mapa(5,6);
    s.start();



}