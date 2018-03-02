#include<iostream>
using namespace std;
int main()
{
    int test,row,coloumn,i,j,flag,c = 0;
    cin>>test;

    while(test--){
    c++;
    flag = 0;
    cin>>row>>coloumn;
    char field[row][coloumn];
    for(i=0; i<row; i++){
        for(j=0; j<coloumn; j++){
            cin>>field[i][j];
            }
    }

     cout<<"Case "<<c<<":\n";
     for(i=0; i<row; i++){
        for(j=0; j<coloumn; j++){
           if(field[i][j] == '$'){
              flag = 1;
              cout<<i+1<<","<<j+1<<endl;
        }
    }
  }
  if(flag != 1){
    cout<<"No Gold Found\n";
  }


}
    return 0;
}

