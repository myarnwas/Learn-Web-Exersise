#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   /* vector<int> nums ={10,20,30,40};
    vector<int>::iterator it = nums.begin();//  10 يشير للحته<<< double >> error
    auto itr = nums.begin() +1;
    cout << "first elemnt is: "<< *it<< "\n";
    cout << "first elemnt is: "<< *itr<< "\n";
    cout << "first elemnt is: "<< *nums.begin()<< "\n";

    nums.erase(nums.begin(), nums.begin() +2);
    cout << "first elemnt after delete is: "<< *it<< "\n";*/



/*
    vector<int> nums ={10,20,30,40};
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end() - 1;
//random access
cout << "first elemnt is: "<< *first<< "\n";//10
cout << "sec elemnt is: "<< first[1]<< "\n";//20
cout << "third elemnt is: "<< first[2]<< "\n";//30

cout << "last elemnt is: "<< *last<< "\n";//40
cout << "beflast elemnt is: "<< *last -1<< "\n";//39
cout << "beflast elemnt is: "<< *(last -1)<< "\n";//39

advance(first, 3);
cout << "first elemnt is: "<< *first<< "\n";//40

advance(first, -2);
cout << "first elemnt is: "<< *first<< "\n";//20*/






/*
 vector<int> nums ={10,20,30,40};
vector<int>::iterator it;
for (it =nums.begin(); it != nums.end(); it++)
{
    cout <<  *it<< "\n";//20
}
cout << "===================================\n";

for (int val : nums)
{
    cout <<  val<< "\n"; 
}

cout << "===================================\n";

int numsw[5]={1,2,3,4,5};
for (int mval : numsw)
{
    cout <<  mval<< "\n"; 
}*/








 vector<int> nums ={10,20,30,40,10};
int val=10;
int countx = count(nums.begin(), nums.end(), val);
cout << "num " << val<<" found "<< countx<<"\n";
cout << "===================================\n";
for(int &n: nums){
cout<< n<<"\n";
}
cout << "===================================\n";
sort(nums.begin(), nums.end());
for(int &n: nums){
cout<< n<<"\n";
}
cout << "===================================\n";
reverse(nums.begin(), nums.end());
for(int &n: nums){
cout<< n<<"\n";
}
cout << "===================================\n";
}