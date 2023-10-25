#include<iostream>
using namespace std;

int main(){
    int arr[10];
    //Initialization
    for(int i=0;i<4;i++){
        cout << "Enter Value: ";
        cin >> arr[i];
    }

    //Insertion
    for(int i=4;i>=0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=9;

  //Deletion
for ( int i = 2; i<4; i++)
{
    arr[i]=arr[i+1];
    
}


//Traversing
    for(int i=0;i<5;i++){
        cout << "Value: ";
        cout << arr[i]<<endl;
    }


// Searching
for (int i = 0; i < 4; i++)
{
    if(arr[i]==15){
        cout<<"Found at:"<<i<<endl;
    }
    else {
        cout<<"Not Found!"<<endl;
    }
}

    return 0;
}