#include <iostream>
using namespace std;
int main() {
   //write the programe to count the occurance of element in array
int arr[] = {12,22,2,22,2,32,2,222,3,33,};
int count = 0;
int element = 22;

for(int i = 0 ; i<9; i++){
    if(arr[i]==element){
        count++;

    }   
}
cout<<count<<endl;

}