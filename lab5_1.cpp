#include<iostream>
using namespace std;

int main(){
    int i=1;
    int odd=0;
    int even=0;
    
    while( i >0 ){
    cout << "Enter an integer: ";
    cin >> i;

    
    if (i%2 ==0){
        
        if (i != 0){
            even += 1;
         }
       
    }else{
        odd += 1;
    
    }
    }
    
    
    cout << "#Even numbers = " << even << endl;

    cout << "#Odd numbers = " << odd << endl;
   
        
    
    
return 0;
}

