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
        default: name = "Blad"; break;
    }

    switch(rand()%5+1)
    {
        case 1: sname = "Janowski"; break;
        case 2: sname = "Galczynski"; break;
        case 3: sname = "Pieprzyk"; break;
        case 4: sname = "Mielcarek"; break;
        case 5: sname = "Szulc"; break;
        default: sname = "blad"; break;
        
    }

    switch(rand()%12+1)
    {
        case 1: month = "January"; break;
        case 2: month = "February"; break;
        case 3: month = "March"; break;
        case 4: month = "April"; break;
        case 5: month = "May"; break;
        case 6: month = "June"; break;
        case 7: month = "July"; break;
        case 8: month = "August"; break;
        case 9: month = "September"; break;
        case 10: month = "October"; break;
        case 11: month = "November"; break;
        case 12: month = "December"; break;
    }

    if(month == "January")
    {
        day = rand()%31+1;
    }
    else if(month == "February")
    {
        if((year%4 && !(year%100)) || year%400)
        {
            day = rand()%29+1;
        }
        else
        {
            day = rand()%28+1;
        }
    }
    else if(month == "March")
    {
        day = rand()%31+1;
    }
    else if(month == "April")
    {
        day = rand()%30+1;
    }
    else if(month == "May")
    {
        day = rand()%31+1;
    }
    else if(month == "June")
    {
        day = rand()%30+1;
    }
    else if(month == "July")
    {
        day = rand()%31+1;
    }
    else if(month == "August")
    {
        day = rand()%31+1;
    }
    else if(month == "September")
    {
        day = rand()%30+1;
    }
    else if(month == "October")
    {
        day = rand()%31+1;
    }
    else if(month == "November")
    {
        day = rand()%30+1;
    }
    else if(month == "December")
    {
        day = rand()%31+1;
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
