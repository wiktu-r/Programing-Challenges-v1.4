#include <iostream>
#include <string>
#include <time.h>
#include <conio.h>

int main()
{
    srand(time(NULL));

    std::string name;
    std::string sname;
    int phone[9];
    phone[0] = rand()%9+1;
    std::string month;
    int monthnr;
    int day;
    int year = rand()%80+1930;


    switch(rand()%10+1)
    {
        case 1: name = "Wiktor"; break;
        case 2: name = "Aleksander"; break;
        case 3: name = "Antoni"; break;
        case 4: name = "Stanislaw"; break;
        case 5: name = "Jakub"; break;
        case 6: name = "Filip"; break;
        case 7: name = "Marcin"; break;
        case 8: name = "Miłosz"; break;
        case 9: name = "Radek"; break;
        case 10: name = "Mirek"; break;
        default: name = "Error"; break;
    }

    switch(rand()%5+1)
    {
        case 1: sname = "Janowski"; break;
        case 2: sname = "Galczynski"; break;
        case 3: sname = "Pieprzyk"; break;
        case 4: sname = "Mielcarek"; break;
        case 5: sname = "Szulc"; break;
        default: sname = "Error"; break;
        
    }

    switch(rand()%12+1)
    {
        case 1: {month = "January"; monthnr = 1;} break;
        case 2: {month = "February"; monthnr = 2;} break;
        case 3: {month = "March"; monthnr = 3;} break;
        case 4: {month = "April"; monthnr = 4;} break;
        case 5: {month = "May"; monthnr = 5;} break;
        case 6: {month = "June"; monthnr = 6;} break;
        case 7: {month = "July"; monthnr = 7;} break;
        case 8: {month = "August"; monthnr = 8;} break;
        case 9: {month = "September"; monthnr = 9;} break;
        case 10: {month = "October"; monthnr = 10;} break;
        case 11: {month = "November"; monthnr = 11;} break;
        case 12: {month = "December"; monthnr = 12;} break;
        default: "Error"; break;
    }

    switch(monthnr)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: day = rand()%31+1; break;
        case 4: 
        case 6:
        case 9:
        case 11: day = rand()%30+1; break;   
        case 2: 
        {if((year%4 && !(year%100)) || year%400) 
        day = rand()%29+1;
        else 
        day = rand()%28+1;}
        break;
        
        default: "Error"; break;
    }


    for(int i=1; i<=8; ++i)
    {
        phone[i] = rand()%10;
    }


    std::cout << "name: " << name << std::endl;    
    
    std::cout << "surname: " << sname << std::endl;

    std::cout << "phone number: ";
    for(int i=0; i<=8; ++i)
    {std::cout << phone[i];}
    std::cout << std::endl;
    std::cout << month << " " << day << " " << year; 

    getch();
    return 0;
}
