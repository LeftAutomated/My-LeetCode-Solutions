#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> hold;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                hold.push(c);
            if (hold.empty())
                return false;
            if (c == ')')
                if (hold.top() != '(')
                    return false;
            if (c == '}')
                if (hold.top() != '{')
                    return false;
            if (c == ']')
                if (hold.top() != '[')
                    return false;
            if (c == ')' || c == '}' || c == ']')
                hold.pop();
        }

        return hold.empty();
    }
};