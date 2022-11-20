#include <iostream>
#include <string.h>
#include <set>
using namespace std;

#include <iostream>
using namespace std;

#include <vector>
#include <string>

void rev(string &s)
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        char c = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = c;
    }
}
int main()
{
    vector<string> vs;
    string s, s1, s2;
    cin >> s;
    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 0; j <= s.size() - i; j++)
        {
            s1 = s2 = s.substr(j, i);
            rev(s1);
            if (s1 == s2)
            {
                vector<string>::iterator it;
                for (it = vs.begin(); it != vs.end(); it++)
                {
                    if (*it == s1)
                        break;
                }
                if (it == vs.end())
                    vs.push_back(s1);
            }
        }
    }
    printf("%d", int(vs.size()));
    return 0;
}
    