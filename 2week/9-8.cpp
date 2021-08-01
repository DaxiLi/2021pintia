#include <iostream>
#include <set>

using namespace std;

class comp:greater<set<int>>
{
     
    public:
    bool operator() (set<int> &a,set<int> &b) const
    {
        return a.size() < b.size();
    }
};

int main(){
    int N;
    cin >> N;
    string name[N];
    multiset<int> tags[N]; 
    for (int i = 0;i < N;i++)
    {
        cin >> name[i];
        while (1)
        {
            /* code */
            int tmp;
            cin >> tmp;
            tags[i].insert(tmp);
            if (cin.get() == '\n')
            {
                break;
            }
        }
        
    }
    set<set<int>,comp> res;

    for (int i = 1;i < N;i++)
    {
        if (tags[max].size() < tags[i].size())
        {
            max = i;
        }
    }
    
    return 0;
}