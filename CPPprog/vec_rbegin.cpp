#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(5);
    int i=0;
    for(vector<int>::reverse_iterator ritr=vec.rbegin();ritr!=vec.rend();ritr++)
    {
        *ritr=++i;
    }
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}
