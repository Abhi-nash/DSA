#include<iostream>
using namespace std;
bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** sol){
    if (isSafe(arr,x,y,n)){
        sol[x][y]==1;
        if(ratInMaze(arr,x+1,y,n,sol)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,sol)){
            return true;
        }

    }
}
int main(){
}