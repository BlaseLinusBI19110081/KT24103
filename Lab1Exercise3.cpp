#include <iostream>
using namespace std;
void ChangeIt_1(int n) {
n = 5;
}
void ChangeIt_2(int *n) {
    *n = 6;
}

void ChangeIt_3(int &n) {
n = 7;
}

int ChangeIt_4(int n) {
n = 8;
return n;
}

void swap (int*,int*);
double getAverage(int *array, int SIZE);

int main(){
    
int *p; //declare p as pointer

int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};

int *array=data;

p=&x; //reference of x

ChangeIt_1(x);
cout << "ChangeIt_1 : " << *p << endl;
ChangeIt_2(&x);
cout << "ChangeIt_2 : " << *p << endl;
ChangeIt_3(x);
cout << "ChangeIt_3 : " << *p << endl;
x = ChangeIt_4(x);
cout << "ChangeIt_4 : " << *p << endl;


swap(&x,&y);
cout << "\n\nAverage Value of An Array Is: " << getAverage(array , SIZE)<< endl;

return 0;


}

void swap(int*a,int*b){
    
    if(*a >*b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
    cout<<"\nAfter Swapping"<<endl;
    cout<<"x ="<<*a<<endl;
    cout<<"y ="<<*b<<endl;
    
    }
    else{
        cout<<"System error"<<endl;
    }
}

double getAverage(int *array, int SIZE) {
    
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < SIZE; ++i) {
      sum += array[i];
   }
   
   avg = double(sum) / SIZE;

   return avg;
}
