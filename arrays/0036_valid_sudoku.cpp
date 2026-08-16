#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


    for(int row=0;row<9;row++){
        unordered_set<int> seen;
        for(int col=0;col<9;col++){
            int cell = board[row][col];
            if (cell=='.') continue;
            if(seen.count(cell)) return false;
            else seen.insert(cell);    
    }
    }

      for(int col=0;col<9;col++){
        unordered_set<int> seen;
        for(int row=0;row<9;row++){
            int cell = board[row][col];
            if (cell=='.') continue;
            if(seen.count(cell)) return false;
            else seen.insert(cell);    
    }
    }

     for(int boxrow=0; boxrow<9;boxrow+=3){
        for(int boxcol=0; boxcol<9;boxcol+=3){
            unordered_set<int> seen;
            for(int row=boxrow;row<boxrow+3;row++){
                for(int col=boxcol;col<boxcol+3;col++){
                    int cell = board[row][col];
                    if (cell=='.') continue;
                        if(seen.count(cell)) return false;
                        else seen.insert(cell);
                                }
            }
        }
     }
     return true;
    }
};