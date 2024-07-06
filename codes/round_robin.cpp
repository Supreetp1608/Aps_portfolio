#include <iostream>
#include <vector>
#include <string>

using namespace std;

int rrIdx = 0;

string rr(vector<string>& insts) {
    if (insts.empty()) return "";

    string chosen = insts[rrIdx];
    rrIdx = (rrIdx + 1) % insts.size();

    cout << "Processing request for " << chosen << "...\n";
    for (int i = 0; i < 100000000; ++i) {
        int temp = i * i;
    }

    return chosen;
}

int main() {
    vector<string> insts = {"Inst1", "Inst2", "Inst3", "Inst4", "Inst5"};

    for (int i = 0; i < 10; ++i) {
        string inst = rr(insts);
        cout << "Req " << i + 1 << " assigned to " << inst << " using RR algo\n";
    }

    return 0;
}
