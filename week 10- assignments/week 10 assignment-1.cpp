#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {100, 200, 300, 400};

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << "\n";
    }
    nums.push_back(500);
    cout << "First Element Is: " << nums.front() << "\n";
    cout << "Last Element Is: " << nums.back() << "\n";

    /* 
    Output
    100
    200
    300
    400
    "First Element Is: 100"
    "Last Element Is: 500" 
    */

    return 0;
}
