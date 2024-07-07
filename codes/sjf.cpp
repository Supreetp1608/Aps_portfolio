#include <iostream>
#include <vector>
using namespace std;

struct Inst {
    string name;
    int load;
};

string sjf(vector<Inst>& insts, int req) {
    int minLoad = insts[0].load;
    int idx = 0;
    for (int i = 1; i < insts.size(); ++i) {
        if (insts[i].load < minLoad) {
            minLoad = insts[i].load;
            idx = i;
        }
    }
    insts[idx].load += req;
    return insts[idx].name;
}

int main() {
    vector<Inst> insts = {{"Inst1", 0}, {"Inst2", 0}, {"Inst3", 0}};
    for (int i = 0; i < 10; ++i) {
        string inst = sjf(insts, 1);
        cout << "Req " << i + 1 << " to " << inst << endl;
    }
    return 0;
}
