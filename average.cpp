#include<iostream>
using namespace std;
int main(int A , char *B[]){
    double avg=0;
    if(A == 1){
        cout << "Please input numbers to find average.\n";
    }else{
        for(int i=1 ; i<A ; i++){
            avg+=atoi(B[i]);
        }
        avg = avg/(A-1);
    cout << "---------------------------------\n";
    cout << "Average of " << A-1 << " numbers = " << avg << endl;
    cout << "---------------------------------\n";    
    }
            
    
}
