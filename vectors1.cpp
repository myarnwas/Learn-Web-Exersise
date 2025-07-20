#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<int> nums1 = {10,20,30}; 
   vector<int> nums2  {40,50,60}; 
   vector <int> nums3(4,50);

   for (int i = 0; i < nums1.size(); i++)
   {
    cout << nums1.at(i) << " ";
   }
   cout << "\n===========================\n";
   for (int i = 0; i < nums2.size(); i++)
   {
    cout << nums2.at(i) << " ";
   }
   cout << "\n===========================\n";
   for (int i = 0; i < nums3.size(); i++)
   {
    cout << nums3.at(i) << " ";
   }
   cout << "\n===========================\n";
   cout << "Number of element: " << nums3.size() << "\n";
    //nums[4] = 1000; not valid >>> [] ابعد عن 
    nums3.push_back(1000);
nums3.at(0)=444;
for (int i = 0; i < nums3.size(); i++)
   {
    cout << nums3.at(i) << " ";
   }
    cout << "Number of element: " << nums3.size() << "\n";

    return 0;
}