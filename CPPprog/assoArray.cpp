#include <iostream>
#include <string>
#include <tr1/unordered_map>
using namespace std::tr1;
using namespace std;
int main()
{
    unordered_map<char,string> day;
    day['s']="Sunday";
    day['m']="Monday";
    cout<<day['m'];
    day.insert(make_pair('f',"Friday"));
    day['t']="Thurseday";
    cout<<day['t'];
    cout<<day['f'];
    day['f']="Fuckday";
    cout<<day['f'];
}
