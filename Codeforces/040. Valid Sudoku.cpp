#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isValid(vector<vector<int>>& board) {
        vector<vector<int>> row(12, vector<int> (12, 0));
        vector<vector<int>> col(12, vector<int> (12, 0));
        vector<vector<int>> box(12, vector<int> (12, 0));
        vector<pair<int,int>>vp;
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]==0){
                    vp.push_back({i,j});
                    continue;
                }

                char num = board[i][j];
                int n = num ;
                row[i][n]++;
                col[j][n]++;

                int boxi,boxj;
                if(i<=2){boxi=0;}
                else if(i<=5){boxi=3;}
                else if(i<=8){boxi=6;}

                if(j<=2){boxi+=0;}
                else if(j<=5){boxi+=1;}
                else if(j<=8){boxi+=2;}

                box[boxi][n]++;

                if(row[i][n]>1 || col[j][n]>1 || box[boxi][n]>1){return false;}
            }
        }

       
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    vector<vector<int>> mat(9, vector<int>(9, 0));
        for (int i = 0; i < 81; i++)
            cin >> mat[i / 9][i % 9];

        Solution obj;
        bool res = obj.isValid(mat);
        if (res)
            cout << "VALID" << endl;
        else
            cout << "INVALID" << endl;
    return 0;
}