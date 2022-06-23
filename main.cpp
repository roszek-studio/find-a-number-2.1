#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <fstream>
#include <Windows.h>
using namespace std;

string wersja="2.1";
string nick;

char wybor;
char wyb;
int liczba, strzal,prob=0;
  int nr_linii=1;

int losowanie (int m)
{system("cls");
  cout << "Witaj "<<nick<<"! Pomyslalem sobie liczbe z zakresu 1.."<<m<< endl;



    srand(time(NULL));
    liczba = rand()%m+1;

    while(strzal!=liczba)
    {prob++;
         cout<<"Zgadnij jaka (To twoja:"<<prob<<" proba)"<<endl;
           if(!(cin>>strzal))
            {
              cerr<<"To nie jest liczba!";
              Sleep(1000);
            exit(0);
           }


           if(strzal==liczba)

           {
              cout<<"udalo sie wygrywasz!"<<endl<<endl<<endl;
              cout<<"Jesli pobiles rekord podziel sie tym na kanale tekstowym rekordy na discordzie :)"<<endl;
                prob=0;
           }else if (strzal<liczba)
           {
               cout<<"To za malo!"<<endl;

           } else if (strzal>liczba)
           {
               cout<<"To za duzo!"<<endl;
           }
    } }



enum Kolor
{
    CZARNY,
    CIEMNONIEBIESKI,
    ZIELONY,
    TURKUSOWY,
    BRAZOWY,
    MORSKI,
    OLIWKOWY,
    JASNOSZARY,
    SZARY,
    NIEBIESKI,
    JASNOZIELONY,
    JASNONIEBIESKI,
    CZEROWNY,
    ROZOWY,
    ZLOTY,
    BIALY
};

void kolor( Kolor c )
{
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}

int main()
{








  HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );

    string linia;
    int nr_linii=1;

    fstream plik;
    plik.open("nick.txt", ios::in);

    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1: nick=linia; break;

        }
        nr_linii++;
    }

    plik.close();

    SetConsoleTextAttribute( hOut, FOREGROUND_RED );
    cout<<"nick:  "<<nick<<endl<<endl;




  SetConsoleTextAttribute(hOut, STD_OUTPUT_HANDLE );

    hOut = GetStdHandle( STD_OUTPUT_HANDLE );

 kolor( BIALY );
   SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );
    cout<<"FIND A NUMBER       ROSZEK STUDIO 2021           VERSION "<<wersja<<endl<<endl;


void gra();
{



while (true){
 kolor( BIALY );


    cout<<"MENU GLOWNE";
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    cout<<"1. START"<<endl;
    cout<<"2. WYJSCIE"<<endl;
    cout<<"3. USTAWIENIA"<<endl;
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
    cout<<"\n\ BIEZACE USTAWIENIA: \n\ GRAFIKA:ULTRA \n ROZDZIELCZOSC:MAKSYMALNA \n JAKOSC CIENI:ULTRA \n JAKOSC PRZETWARZANIA KONCOWEGO: ULTRA"<<endl;
    cout<<endl<<"wybierz:";
    wybor=getch();
 kolor( BIALY );
     switch(wybor)
{


case '1':
    cout<<"\n\n  "<<endl;
   cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
   cout<<"1. 1 POZIOM (ZAKRES 50 ) EZ MODE"<<endl;
   cout<<"2. 2 POZIOM (ZAKRES 100)"<<endl;
   cout<<"3. 3 POZIOM (ZAKRES 250)"<<endl;
   cout<<"4. 4 POZIOM (ZAKRES 500)"<<endl;
   cout<<"5. 5 POZIOM (ZAKRES 1000) HARDCORE MODE"<<endl;

       cout<<"wybierz:";
    wyb=getch();
 break;



    case '2':
        {
            exit(0);
            break;
        }
case '3':{
system("cls");
cout<<" \n\n USTAWIENIA:    \n\n\n Aby zmienic nick udaj sie do pliku nick.txt i wpisz swoj nick :) "<<endl<<endl;   break;

}
default: cout<<"nie ma takiej opcji!"<<endl;
}






   switch (wyb){
       case '1': {cout<<endl<<endl;

int m=50;
losowanie(m);



break;
 }
   case '2':

    {cout<<endl<<endl;

         int m= 100;
         losowanie(m);
break;
    }


case '3':{

    cout<<endl<<endl;



         int m= 250;
         losowanie(m);

    break;
}
case '4':
    {
      cout<<endl<<endl;

        int m= 500;
         losowanie(m);
break;
    }

case '5':{cout<<endl<<endl;


        int m= 1000;
         losowanie(m);
break;
}



default: cout<<"nie ma takiej opcji!"<<endl;



}
}
plik.close();

getchar(); getchar(); system("cls");
    return 0;}
 }
