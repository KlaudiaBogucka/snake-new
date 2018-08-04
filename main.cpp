#include <iostream>
#include <time.h>
#include <conio.h>
class Plansza
        {   public:

            constexpr int szer,wys;

            Plansza();
           Plansza(int a,int b)
                   :szer(a),wys(b)
           {}
            int i,j;
            int randI,randJ;
            char tablica[szer][wys];


            void ramka();
            void jedzonko();
            void drukuj(int poziom,int punkty,int predkosc);
        };

void Plansza::ramka()
{
    for(i=0;i<szer-2;i++)
    {
        for(j=0;j<wys-2;j++)
        {
            tablica[i][j]='*';
        }
    }
    jedzonko();
}

void  Plansza::jedzonko()
{
    srand(time(0));
    do
    {
        randI=rand()%szer+1;
        randJ=rand()%wys-1;

    }while(tablica[randI][randJ]);

    tablica[randI][randJ]='%';
}

void Plansza::drukuj(int stopien,int punkty,int predkosc)
{
    system("cls");
    std::cout<<std::endl;
    for(i=0;i<szer;i++)
    {
        std::cout<<"\t";
        for(j=0;j<wys;j++)
        std::cout<<tablica[szer][wys]<<' ';
        if(i==0) std::cout<<"\t Poziom: "<<stopien;
        if(i==2) std::cout<<"\t Punkty: "<<punkty;
        if(i==4) std::cout<<"\t Szybkosc: "<<predkosc;
    }
}

class Snake:public Plansza
{
public:
    long start;
    int licznikOgona,punkty,predkosc,dlugosc,czas;
    char kierunek;

    Snake(Plansza* plansza);
    void ruch();
};

Snake::Snake(Plansza* plansza)
{
    //Zapowiedz
    std::cout<<"\n\n\t\t Gra zaraz sie zacznie!"<<std::endl;
    for(i=3;i>=0;i--)
    {
        start=clock();
        while(clock()-start<=1000);
        system("cls");
        if(i>0)
            std::cout<<"Odliczanie:"<<i<<std::endl;
    }


    for(i=1;i<=3;i++)
        tablica[1][i]='*';
    tablica[1][4]='@';
    for(i=0;i<4;i++)
    {

    }

}

void Snake::ruch()
{
    punkty=0;

    dlugosc=4;
    predkosc=500;
    kierunek=77;

    while(1)
    {
        czas=1;
        start=clock();
        while((czas=(clock()-start<=predkosc))&&!_kbhit());
        if(czas)
        {
            _getch();
            kierunek=_getch();
        }
        switch(kierunek)
        {
            case 72
        }
    }
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}