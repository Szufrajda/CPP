#include <iostream>
#include <string>
#include<bits/stdc++.h>

#define SZEREGOWY 0
#define KAPRAL 1
#define OFICER 2

#define MAX_WIELKOSC 10
#define MAX_MIN 80
// (10*10) - 80 = 100 - 80 = 20
#define WIELKOSC_WYBORU 20


int wielkosc;  //wielkosc tablicy
int mina;      //ilosc min

    bool isValid(int wiersz, int kolumna) {                                                      //funckja sprawdza czy komorka jest prawidlowa
    return (wiersz >= 0) && (wiersz < wielkosc) && (kolumna >= 0) && (kolumna < wielkosc);       //zwraca prawde gdy komorka i wiersz nie wychodzi poza obszar
    }

        bool isMine(int wiersz, int kolumna, char tablica[][MAX_WIELKOSC]){                      //funkcja sprawdza czy dana komorka zawiera mine czy nie
                if (tablica[wiersz][kolumna] == '*')
                    return true;
                else
                    return false;
        }

    void makeMove(int *x, int *y){                                                              //funkcja pobiera od uzytkownika ruch
    std::cout << "Wykonaj ruch (wiersz - x, kolumna - y): ";
    scanf("%d %d", x, y);
    return;
    }

    void printBoard(char plansza[][MAX_WIELKOSC]){                                                   //funkcja ktora wywoluje obecny ruch gracza
    int a;
    int b;

    std::cout << "    ";
        for (a=0; a < wielkosc; a++)
                printf("%d ", a);
                std::cout << '\n' << '\n';

        for (a=0; a < wielkosc; a++){
            printf("%d   ", a);

                for (b=0; b < wielkosc; b++)
                    printf("%c ", plansza[a][b]);
                    std::cout << '\n';
        }
        return;
    }

    int countAdjacentMines(int wiersz, int kolumna, int miny[][2], char poleGRY[][MAX_WIELKOSC]) {    //funkcja ma za zadanie zliczyc ilosc sasiadujacych min
    int x;
    int liczba = 0;

    if (isValid (wiersz-1, kolumna) == true)                                                         //wypisuje 8 kierunkow w ktorych miny moga sasiadowac na planszy
        {
               if (isMine (wiersz-1, kolumna, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz, kolumna-1) == true)
        {
               if (isMine (wiersz, kolumna-1, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz+1, kolumna) == true)
        {
               if (isMine (wiersz+1, kolumna, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz, kolumna+1) == true)
        {
               if (isMine (wiersz, kolumna+1, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz-1, kolumna-1) == true)
        {
               if (isMine (wiersz-1, kolumna-1, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz+1, kolumna+1) == true)
        {
               if (isMine (wiersz+1, kolumna+1, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz-1, kolumna+1) == true)
        {
               if (isMine (wiersz-1, kolumna+1, poleGRY) == true)
               liczba++;
        }

    if (isValid (wiersz+1, kolumna-1) == true)
        {
               if (isMine (wiersz+1, kolumna-1, poleGRY) == true)
               liczba++;
        }
    return liczba;
    }

    bool playSAPERutil(char plansza[][MAX_WIELKOSC], char poleGRY[][MAX_WIELKOSC], int miny[][2], int wiersz, int kolumna, int *ruch_pozostaly) {  //funkcja gry

        if (plansza[wiersz][kolumna] != '-')        //kazda pojedyncza komorka => "-" => - - - - ...
            return false;

    int x;
    int y;

        if (poleGRY[wiersz][kolumna] == '*') {     //jezeli zaznaczysz pole z mina "*" - przegrasz
            plansza[wiersz][kolumna] = '*';

                for (x=0; x < mina; x++)
                    plansza[miny[x][0]][miny[x][1]] = '*';

                printBoard (plansza);
                std::cout << "PRZEGRALES! Ale nie martw sie, zdarza sie nawet najlepszym ;)" << '\n';
                return true;
        }

        else {                         //jezeli nie natrafiles na mine, funkcja zlicza liczbe sasiednich min do wybranego pola i wypisuje ta liczbe na zaznaczonym polu
            int liczba = countAdjacentMines(wiersz, kolumna, miny, poleGRY);
            (*ruch_pozostaly)--;

            plansza[wiersz][kolumna] = liczba + '0';
                if (!liczba) {
                    if (isValid (wiersz-1, kolumna) == true)
            {
                   if (isMine (wiersz-1, kolumna, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz, kolumna-1) == true)
            {
                   if (isMine (wiersz, kolumna-1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz+1, kolumna) == true)
            {
                   if (isMine (wiersz+1, kolumna, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz, kolumna+1) == true)
            {
                   if (isMine (wiersz, kolumna+1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz-1, kolumna+1) == true)
            {
                   if (isMine (wiersz-1, kolumna+1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz+1, kolumna-1) == true)
            {
                   if (isMine (wiersz+1, kolumna-1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz+1, kolumna+1) == true)
            {
                   if (isMine (wiersz+1, kolumna+1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }

                if (isValid (wiersz-1, kolumna-1) == true)
            {
                   if (isMine (wiersz-1, kolumna-1, poleGRY) == false)
                   playSAPERutil(plansza, poleGRY, miny, wiersz-1, kolumna, ruch_pozostaly);
                }
                }
        return false;
        }

    }

    void placeMines(int miny[][2], char poleGRY[][MAX_WIELKOSC]) {    //funkcja, ktora zamieszcza losowo miny na planszy
        bool mark[MAX_WIELKOSC * MAX_WIELKOSC];
        memset (mark, false, sizeof (mark));

            for (int m=0; m < mina; ) {
                int miejsce = rand() % (wielkosc * wielkosc);
                int x = miejsce / wielkosc;
                int y = miejsce % wielkosc;

                    if (mark[miejsce] == false) {
                        miny[m][0] = x;
                        miny[m][1] = y;

                        poleGRY[miny[m][0]][miny[m][1]] = '*';
                        mark[miejsce] = true;
                        m++;
                    }
            }
            return;
    }

    void initialise(char poleGRY[][MAX_WIELKOSC], char plansza[][MAX_WIELKOSC]) {  //funkcja rozpoczynajaca rozgrywke
        srand (time (NULL));    //generator liczb losowych - ma nie powstac ta sama konfiguracja

            for (int z=0; z < wielkosc; z++) {            //przypisanie wszystkich pol jako wolna komorka "-"
                for (int n=0; n < wielkosc; n++){
                    plansza[z][n] = poleGRY[z][n] = '-';
                }
            }
            return;
    }

    void replaceMine(int wiersz, int kolumna, char tablica[][MAX_WIELKOSC]) {     //funkcja zastepujšca mine (wiersz, kolumna) i umieszczajaca ja na wolnym miejscu
        for (int i=0; i < wielkosc; i++) {
            for (int j=0; j < wielkosc; j++) {

            if (tablica[i][j] != '*')    //znajduje na planszy pierwsze miejsce, w ktorym nie ma miny i umieszcza tam mine
                {
                    tablica[i][j] = '*';
                    tablica[wiersz][kolumna] = '-';
                    return;
            }
        }

    }
    return;
}
    void playSAPER() {        //funkcja rozgrywki sapera
        bool gameOVER = false;

        char poleGRY[MAX_WIELKOSC][MAX_WIELKOSC], plansza[MAX_WIELKOSC][MAX_WIELKOSC];
        int ruchLEWO = wielkosc * wielkosc - mina;
        int x;
        int y;
        int miny[MAX_MIN][2];

            initialise (poleGRY, plansza);

            placeMines (miny, poleGRY);

            int obecny_ruch = 0;                      //jezeli nie zaznaczyles miny - grasz dalej
                while (gameOVER == false) {
                    printBoard (plansza);
                    makeMove (&x, &y);

                        if (obecny_ruch == 0) {       //gwarantuje, ze pierwszy ruch jest zawsze bezpieczny
                            if (isMine (x, y, poleGRY)== true)   //jezeli w pierwszym ruchu jest mina, funkcja zmienia jej pozycje
                                    replaceMine (x, y, poleGRY);
                        }
                        system("cls");
                        obecny_ruch++;

                    gameOVER = playSAPERutil (plansza, poleGRY, miny, x, y, &ruchLEWO);

                        if ((gameOVER == false) && (ruchLEWO == 0)) {
                            std::cout << "Moc jest w Tobie silna! WYGRALES!! :D " << '\n';
                            gameOVER = true;
                        }
                }
                return ;
    }

    void chooseDifficultyLevel (){   //funkcja ktora tworzy poziomy trudnosci
        int level;

        std::cout << "Wybierz poziom trudnosci gry" << '\n';
        printf ("Wybierz 0 dla SZEREGOWY (Plansza 5*5 z 8 Minami)\n");
        printf ("Wybierz 1 dla KAPRAL (Plansza 10*10 z 10 Minami)\n");
        printf ("Wybierz 2 dla OFICER (Plansza 10*10 z 80 Minami)\n");

        scanf ("%d", &level);

            if (level == SZEREGOWY){
                wielkosc = 5;
                mina = 8;
            }
            if (level == KAPRAL)
            {
                wielkosc = 10;
                mina = 10;
            }

            if (level == OFICER)
            {
                wielkosc = 10;
                mina = 80;
            }

            return;
    }

    int main()
    {

    std::cout << " --------------------- " << '\n';
    std::cout << "|      S A P E R      |" << '\n';
    std::cout << "|  by Jakub Szufrajda |" << '\n';
    std::cout << " --------------------- " << '\n' << '\n';

    std::string nick;
    std::cout << "PODAJ NICK GRACZA: ";
    std::cin >> nick;
    std::cout << '\n';
    std::cout << "Witaj " << nick << " w grze SAPER!" << '\n';
    std::cout << "ZASADY GRY:" << '\n';
    std::cout << "Gra polega na odkrywaniu na planszy poszczegolnych pol w taki sposob," << '\n';
    std::cout << "aby nie natrafic na mine. Na kazdym z odkrytych pol napisana jest liczba min," << '\n';
    std::cout << "ktore bezposrednio stykaja sie z danym polem." << '\n' << '\n';
    char znak;

    poczatek:
    chooseDifficultyLevel();
    system("cls");
    playSAPER();
    std::cout << '\n';
    std::cout << "Czy chcesz zagrac jeszcze raz? (T/N)" << '\n';
    std::cin >> znak;
    system("cls");

    if (znak == 't' || znak == 'T'){
    goto poczatek;
    }
    else {
        std::cout << "Dziekuje za skorzystanie z gry SAPER! MILEGO DNIA" << '\n';
    }

    return 0;
}


