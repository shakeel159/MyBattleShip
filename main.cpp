
include <iostream>
//#include "logic.cpp"
#include "logic.h"
#include <ctime>

//using namespace std;

int main()
{
    
    int width=5;
    int height=5;
    int shipCount = 4;

    // Coordinates{
    //     int x,
    //     int y;
    // };
    
    bool **board = create_board(height, width);
    
    for (int i = 0; i < width; i++) {
        bool *row = board[i];
        for(int j=0;j<width;j++) {
            std::cout << row[j] << std::endl;
            
        }
        std::cout << "-----------" << std::endl;
    }
    

    place_ships(board, shipCount, width, height);

    std::cout << "Genarating new board" << std::endl;

    //find_ships(board, width, height)
    //coordinates *find_ships(board,  );
    
    for (int i = 0; i < width; i++) {
        bool *row = board[i];
        for(int j=0;j<width;j++) {
            std::cout << row[j] << std::endl;
            
        }
        std::cout << "-----------" << std::endl;
    }

    find_ships(board, width, height, shipCount);
    
};
