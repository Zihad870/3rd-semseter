#include<iostream>
using namespace std;
bool linearSearch(int mat[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int key=10;
   cout<< linearSearch(matrix,row,col,key);

}