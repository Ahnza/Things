#include <string>
using namespace std;

string double_char(const string& str)
{
  string result;
    for (char c: str){
      result += c;
      result += c;
    }
    return result;
}
