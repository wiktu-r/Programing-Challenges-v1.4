#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>

int card;
int players_hand;
int croupiers_hand;

void randomize(int &hand)
{
    card = rand() % 10+2;
    hand += card;
    srand(time(NULL));
}

void showhands()
{
    std::cout << "Your hand: " << players_hand << std::endl;
    std::cout << "Coupier's hand: " << croupiers_hand << std::endl;
    Sleep(500);
}

main()
{
while (true)
{
    

    for(int i = 2; i>0; --i)
    {
    randomize(players_hand);
    }

    while(croupiers_hand < 17)
    {
    randomize(croupiers_hand);
    } 

    for (int i = 1; i>0;)
    {
        

        std::cout << "Your hand: " << players_hand << std::endl;
        std::cout << "Do you wish to take another card? (y = yes, n = no)" << std::endl;

        char another_card = getch(); 
        switch (another_card)
        {
        case 'y':

            randomize(players_hand);
           break;
    
        case 'n':
            --i;
            break;
        } 

        if(players_hand > 21 && croupiers_hand > 21)
            {
            showhands();
            std::cout << "It's a tie!" << std::endl;
            --i;
            }
        else if(players_hand > 21)
            {
            showhands();
            std::cout << "Coupier wins!" << std::endl;
            --i;
            }
        else if(croupiers_hand > 21)
            {
            showhands();
            std::cout << "You win!" << std::endl;
            --i;
            }
    }
    
    if(players_hand <= 21 && croupiers_hand <= 21)
    {
        if(players_hand > croupiers_hand)
        {
            showhands();
            std::cout << "You win!" << std::endl;
        }
        else if(players_hand < croupiers_hand)
        {
            showhands();
            std::cout << "Coupier wins!" << std::endl;
        }
        else if(players_hand == croupiers_hand)
        {
            showhands();
            std::cout << "It's a tie!" << std::endl;
        }
    }
    std::cout << "Want a rematch? (y = yes, n = no)" << std::endl;

    char rematch = getch();
    switch (rematch)
    {
    case 'y':
        {
        players_hand = 0; 
        croupiers_hand = 0;
        break;
        }  
    case 'n':
        {
        return 0;
        break;
        }
    } 
}
}
