#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <ctime> 
#include <cstdlib> 

using namespace std;

struct Inst {
    string name;
    int conns;
};

string leastConns(vector<Inst>& insts) {
    if (insts.empty()) return "";

    int minConns = INT_MAX;
    string chosen = "";

    for (auto& inst : insts) {
        if (inst.conns < minConns) {
            minConns = inst.conns;
            chosen = inst.name;
        }
    }

    // Simulate processing time
    srand(time(0));  
    for (int i = 0; i < 100000000; ++i) {
        int temp = rand() % 100;
    }

    // Simulate updating connections
    for (auto& inst : insts) {
        if (inst.name == chosen) {
            inst.conns++;
            break;
        }
    }

    return chosen;
}

int main() {
    vector<Inst> insts = {
        {"Inst1", 5},
        {"Inst2", 2},
        {"Inst3", 8},
        {"Inst4", 4},
        {"Inst5", 1}
    };

    for (int i = 0; i < 10; ++i) {
        string inst = leastConns(insts);
        cout << "Req " << i + 1 << " assigned to " << inst << " using Least Conns algo\n";
    }

    return 0;
}
