#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <cfloat>   

using namespace std;

struct Inst {
    string name;
    float cpu;
    float mem;
};

float calcLoad(float cpu, float mem) {
    return (cpu + mem) / 2.0;
}

string leastLoad(vector<Inst>& insts) {
    if (insts.empty()) return "";

    float minLoad = FLT_MAX;
    string chosen = "";

    for (auto& inst : insts) {
        float load = calcLoad(inst.cpu, inst.mem);
        if (load < minLoad) {
            minLoad = load;
            chosen = inst.name;
        }
    }

    for (int i = 0; i < 100000000; ++i) {
        int temp = rand() % 100;
    }

    return chosen;
}

int main() {
    vector<Inst> insts = {
        {"Inst1", static_cast<float>(rand() % 100), static_cast<float>(rand() % 100)},
        {"Inst2", static_cast<float>(rand() % 100), static_cast<float>(rand() % 100)},
        {"Inst3", static_cast<float>(rand() % 100), static_cast<float>(rand() % 100)},
        {"Inst4", static_cast<float>(rand() % 100), static_cast<float>(rand() % 100)},
        {"Inst5", static_cast<float>(rand() % 100), static_cast<float>(rand() % 100)}
    };

    for (int i = 0; i < 10; ++i) {
        string inst = leastLoad(insts);
        cout << "Req " << i + 1 << " assigned to " << inst << " using Least Load algo\n";
    }

    return 0;
}
