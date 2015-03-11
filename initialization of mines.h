// This program randomly allocates mine in the game of minesweeper in an N*N MATRIX
//function(L=3, W=3, mine_count=2)
/*
X X X
X M X
X X M

[ [x, x, x], [x, M, x], [x, x, M] ]

MineSweeper(3, 3, 2)

0 0 0
0 0 0
0 0 0

0 -1 0
0  0 -1
0  0 0
*/ 

#include <stdio.h>
#include <stdlib.h>

 int MineSweeper ( int L , int W , int minecount)
{
   if (minecount<0) //the minecount should be a positive number
      return 0;
      
      if(L!=W) // the mine should be a square matrix conventially, never seen a skewed minefield
         return 0;
         
         if((minecount > L* W)) // if mine count greater than the size of the mine
            return O;
         
         Random r = new Random(); // random variable
        int minefield = new int[L][W]; // initializing a mine field 
         
                    trace = true;
          
          for(int i=0 ; i< L; i++)
          {
            for (int j=0 ; j<W ; j++)
              {
                mindfield[i][j] = 0;    // creating a fresh minefield where all positins are zero
              }
              
           for (int k=0; k< minecount ; k++)
           {  
               while (true)
              { 
                int x= r.int(L);  // creating x such that the random variable size is not greater than length
                int y = r.int(W); // creating y such that the random variable size is not greater than the width
              
               if(minefield [x][y] != -1)  // if not a mine( -1) is represented as a mine
                  {
                     minefield[x][y] = -1;  // initialize the mine
                      break;
               }
               
               
            }
            
            minefield [x][y] = -1; 
            
        } 
        
        mineadjacentcount(mindfield, L,W, minecount);
        
        cout<<" Printing final minefield\n";
        
        for(i<0;i<L;i++){
          for(j,0;j<j++)
            {
              cout<<minefield[i][j]<<\t;
            }
            cout<<"\n";
          }  
    }

// counting the adjacent mine in the tiles

 void mineadjacentcount(int minefield[][], int L, int W, minecount) {
    int i, j, sum;
    
  
    // Traversing the entire matrix
    for(i=0; i<L; i++) {
        for(j=0; j<W; j++) {
            sum = 0;
            if(minefield[i][j]==0) {
                // count above
                if(i>0) 
                sum += minefield[i-1][j];
                
                // count below
                if(i<i-1) 
                sum += minefield[i+1][j];
                
                // count the left
                if(j>0)
                sum += minefield[i][j-1];
                // count the right
                if(j<j-1)
                sum += minefield[counter_x][counter_y+1];
                // count the top left
                if(i>0&&j>0) 
                sum+= minefield[i][j];
                // count the top right
                if(i>0&&j<W-1) sum += minefield[i][j];
                // count the bottom left
                if(i<L-1&&j>0) 
                sum += minefield[i+1][j-1];
                // count the bottom right
                if(i<L-1&&j<W-1) 
                sum += minefield[i+1][j+1];	
				
            }
          minefield[i][j] = sum>minecount?0:sum;
        }
    }

    // check values in original array, if it is one, ignore
    // else change the value to that of field
    for(i=0;i<L;i++)
        for(j=0; j<W; j++)
            if(!minefield[i][j]) 
                minefield[i][j]
            else minefield[i][j] = -1;
        
  
}

int main ()
{
  int l, w , minecount;
  cout<<" enter the length of the minefield\n";
  cin>> l;
  
  cout<<"Enter the width of the minefield\n";
  cin>>w;
  
  if(l!=w)
  {
    cout<<" MINEFILELDS ARE ALWAYS A SQUARE MATRIX\n";
  }
  
  cout<<" enter the number of mines you wish to place";
  cin>>minecount;
  
  minesweeper(l,w,minecount);
  
}  
