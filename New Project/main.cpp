#include <iostream>
#include <map>
#include <vector>

using namespace std;

void insert_values(map<int, vector<int>>& thread_list) {
    std::vector<int> cpu_nums;
    cpu_nums.push_back(0);
    cpu_nums.push_back(1);
    thread_list[1] = cpu_nums;

    cpu_nums.clear();
    cpu_nums.push_back(2);
    cpu_nums.push_back(3);
    thread_list[1] = cpu_nums;
}

void dump_values(map<int, vector<int>>& thread_list) {
    // dump thread_list 
    typedef map<int, vector<int>>::const_iterator ThreadListIterator;
   
    for (ThreadListIterator iter = thread_list.begin();
        iter != thread_list.end(); ++iter) {
        cout << iter->first<< ":";
        typedef vector<int>::const_iterator CpuNumIterator;
        for (CpuNumIterator i = iter->second.begin();
             i != iter->second.end(); ++i) {
            cout << " " << *i;     
        }
        cout << endl;
    }
}

int main()
{
    map<int, vector<int>> thread_list;
  
    insert_values(thread_list);
        
    dump_values(thread_list);
   
    return 0;
}

