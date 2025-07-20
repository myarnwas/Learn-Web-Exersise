#include <iostream>
#include <vector>
using namespace std;
int main(){
  /*  vector<int> nums ={10,20,30};
    cout << nums.at(2) << "\n";//30
    cout << nums[2] << "\n";//30

// cout << nums.at(3) << "\n";//erorr>>>  std::out_of_range
//     cout << nums[3] << "\n";//\0   6488164 garbeg value 


nums.push_back(54);
cout << nums.size()<< "\n";//4
cout << nums.at(3)<< "\n";//54
nums.at(3) = 100;
cout << nums.at(3)<< "\n";//100

nums.push_back(500);
cout << nums.size()<< "\n";//4
cout << nums.at(4)<< "\n";//500

nums.pop_back();
cout << nums.size()<< "\n";//4
*/

vector<int> nums ={10,20,30,40};
cout << nums.size()<<"\n";
cout << nums.max_size()<<"\n";
cout << nums.capacity()<<"\n";
nums.push_back(54);
nums.push_back(54);
nums.push_back(54);
nums.push_back(54);
nums.push_back(54);
cout << nums.capacity()<<"\n";//storge الللي بتضيف فيه الكلام ده كله,,, هو بزيد مش بقل
cout << nums.front()<<"\n";
cout << nums.back()<<"\n";
 nums.clear();
cout << nums.size()<<"\n";
nums.push_back(54);

if(nums.empty()==true){
cout << "vector is empty\n";
}
else cout << "vector is NOT empty\n";




 }