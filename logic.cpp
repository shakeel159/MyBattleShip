
#include "logic.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

//using namespace std;


bool **create_board(const int height, const int width)
{
  bool **board = (bool **)malloc(sizeof(bool) * height);
  for (int i = 0; i < height; i++)
  {
    board[i] = (bool *)malloc(sizeof(bool) * width);
  }
  return board;
}

void destroy_board(bool **board, const int height) {
  for (int i = 0; i < height; i++) {
    bool *arry = board[i];
    free(arry);
  }
  free(*board);
}

void place_ships(bool **board, const int shipcount, const int width,
                 const int height) {
  // TODO implement this function
  for (int i = 0; i < shipcount; i++)
  {
    int r = rand() % width;
    int c = rand() % height;

    while (board[r][c])
    {
      int r = rand() % width;
      int c = rand() % height;
      
    }
    board[r][c] = 1;
    
  }
  
  
}

void find_ships(bool **board, const int width, const int height, const int ship_count) {
  // TODO implement
  //ResponseType response_type;
  for ( int u = 0; u < ship_count; u++)
  {
    for(int i = 0; i < height; i++)
    { 
      for (int j = 0; j < width; j++)
      {
        if (board[i][j] == 1)
        {
          std::cout << "HIT" << HIT << std::endl;
          board[i][j] = 0;
        }
        else if (board[i][j] == 0)
        {
         std::cout << "MISS"<< MISS << std::endl;
        }
      
        std::cout << board[i][j] << std::endl;
      }
    

    } 
    u++;
  }
  
}

// ResponseType guess(bool **board, const int x, const int y) {
//   // TODO implement this
//   Miss,HIT
//   return ResponseType::HIT;
//}
