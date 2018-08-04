#include <iostream>
#include <time.h>
#include <conio.h>
class Plansza
{
    public:
    int ileKolumn,ileWierszy;
    Plansza()
    {}
    char** tab=new char*[ileKolumn];
    void mapa(int ileKolumn,int ileWierszy);
};

void Plansza::mapa(int ileKolumn,int ileWierszy)
{

    for(int i=0;i<ileKolumn;i++)
    {
    tab[i]=new char[ileWierszy];
    }

    for(int i=0;i<ileKolumn;i++)
    {
        for(int j=0;j<ileWierszy;j++)
        {
            tab[i][j]=' ';
        }
    }
}
class Snake:public Plansza
{
    int dlgOgona;
    int kierunek=26;
    char* wskOgon=new char;
    char* wskGlowa=new char;

public:
    void start()
    {   int ogonKolumna=3,ogonWiersz=3,glowaKolumna=6,glowaWiersz=ogonWiersz;
        wskOgon=&tab[ogonKolumna][ogonWiersz];
        wskGlowa=&tab[glowaKolumna][glowaWiersz];
        for(ogonKolumna;ogonKolumna<glowaKolumna;ogonKolumna++)
            tab[ogonKolumna][ogonWiersz]='o';
        tab[glowaKolumna][glowaWiersz]='@';
        ruch(kierunek,ogonKolumna,ogonWiersz,glowaKolumna,glowaWiersz);//na poczatku w prawo

    }
    void ruch(int kierunek,int ogonKolumna,int ogonWiersz,int glowaKolumna,int glowaWiersz)
    {
        if(kierunek==24) //gora
        {
            do
            {
                *wskOgon=' ';
                ogonKolumna++;
                wskOgon=&tab[ogonKolumna][ogonWiersz];
                *wskGlowa='o';
                glowaWiersz++;
                wskGlowa=&tab[glowaKolumna][glowaWiersz];
                *wskGlowa='@';
            }while(_kbhit()); //dopoki nie wpisze znaku
        }
        else if(kierunek==25)//dol
        {
           do
            {
                *wskOgon=' ';
                ogonKolumna++;
                wskOgon=&tab[ogonKolumna][ogonWiersz];
                *wskGlowa='o';
                glowaWiersz--;
                wskGlowa=&tab[glowaKolumna][glowaWiersz];
                *wskGlowa='@';
            }while(_kbhit() );
        }
        else if(kierunek==26)//prawo
        {
             do
            {
                *wskOgon=' ';
                ogonKolumna++;
                wskOgon=&tab[ogonKolumna][ogonWiersz];
                *wskGlowa='o';
                glowaKolumna++;
                wskGlowa=&tab[glowaKolumna][glowaWiersz];
                *wskGlowa='@';
            }while(_kbhit() );
        }
        else if(kierunek==27)//lewo
        {
            do
            {
                *wskOgon=' ';
                ogonKolumna++;
                wskOgon=&tab[ogonKolumna][ogonWiersz];
                *wskGlowa='o';
                glowaKolumna--;
                wskGlowa=&tab[glowaKolumna][glowaWiersz];
                *wskGlowa='@';
            }while(_kbhit() );
        }
       // else
        //{
          //  do
            //{
              //  *wskOgon=' ';
                //ogonKolumna++;
                //wskOgon=&tab[ogonKolumna][ogonWiersz];
                //*wskGlowa='o';
                //glowaKolumna--;
                //wskGlowa=&tab[glowaKolumna][glowaWiersz];
                //*wskGlowa='@';
            //}while(_kbhit() );
        //}
        while(_kbhit())
        {
            return ruch(kierunek,ogonKolumna,ogonWiersz,glowaKolumna,glowaWiersz);

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