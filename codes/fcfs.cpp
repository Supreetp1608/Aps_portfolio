#include <iostream>
#include <vector>
using namespace std;

struct Inst {
    string name;
    int load;
};

string fcfs(vector<Inst>& insts, int req) {
    static int idx = 0;
    string inst = insts[idx].name;
    insts[idx].load += req;
    idx = (idx + 1) % insts.size();
    return inst;
}

int main() {
    vector<Inst> insts = {{"Inst1", 0}, {"Inst2", 0}, {"Inst3", 0}};
    for (int i = 0; i < 10; ++i) {
        string inst = fcfs(insts, 1);
        cout << "Req " << i + 1 << " to " << inst << endl;
    }
    return 0;
}
