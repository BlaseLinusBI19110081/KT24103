#include <iostream>
#include <algorithm>
using namespace std;
int main(){
const int length = 11;
int array[length];
for(int i=0; i<11; i++){
cin >> array[i];}
cout << "Array Before Sorting : [";
for (int n = 0; n < 11; ++n) {
cout << array[n] << " ";}
cout << "]\n";
cout << "Array After Sorting  : [";
sort(array, array+length);
for (int i=0; i < length; i++)
cout << array[i] << " ";
cout << "]";
return 0;
}
