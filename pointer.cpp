#include <iostream>
#include <vector>
using namespace std;
int main(){
/*int num =100;
int* ptr = &num;
cout << "value " << num << "\n";
cout << "address " << &num << "\n";
cout << "address " << ptr << "\n";
cout << "value " << *ptr << "\n";

 *ptr = 200;
 cout << "value " << num << "\n";
cout << "address " << &num << "\n";
cout << "address " << ptr << "\n";
cout << "value " << *ptr << "\n";*/




/*
short int num[]{10,20,30};
short int* ptr = &num[0];
cout << "first \n";
cout << "value ind \n"<< num[0]<< "\n";
cout << "value ptr \n"<< *ptr<< "\n";

cout << "add ind \n"<< &num[0]<< "\n";
cout << "add ptr \n"<< ptr<< "\n";

cout << "sec \n";
cout << "value ind \n"<< num[1]<< "\n";
cout << "value ptr \n"<< *(ptr +1)<< "\n";

cout << "add ind \n"<< &num[1]<< "\n";
cout << "add ptr \n"<< ptr+1<< "\n";*/



/*
int *ptr1 ;
int *ptr2 = NULL ;
int *ptr3 = nullptr ;
cout << ptr1<< "\n";
cout << ptr2<< "\n";
cout << ptr3<< "\n";


int a=100;
void* ptr = &a;
cout << ptr<< "\n";
//cout << *ptr<< "\n";
cout<< *(int *)ptr<< "\n";
cout<< *static_cast<int *>(ptr)<< "\n";*/


 int nums[]{10,20,30};
// cout << nums<< "\n";
// cout << &nums[0]<< "\n";

// cout << nums[0]<< "\n";
// cout << *nums<< "\n";

// cout << nums[1]<< "\n";
// cout << *(nums+1)<< "\n";

int* ptr = nums;
cout << ptr<< "\n";
cout << *ptr<< "\n";
ptr++;
cout << ptr<< "\n";
cout << *ptr<< "\n";

ptr+=3;
cout << ptr<< "\n";
cout << *ptr<< "\n";
ptr--;
cout << ptr<< "\n";
cout << *ptr<< "\n";
}