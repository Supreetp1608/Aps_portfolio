#include <iostream>
#include <vector>
using namespace std;

struct Inst {
    string name;
    int load;
};

void dfs(vector<Inst>& insts, int idx, int req, string& res, int& minLoad) {
    if (idx == insts.size()) return;
    if (insts[idx].load < minLoad) {
        minLoad = insts[idx].load;
        res = insts[idx].name;
    }
    dfs(insts, idx + 1, req, res, minLoad);
}

string dfs_lb(vector<Inst>& insts, int req) {
    string res = insts[0].name;
    int minLoad = insts[0].load;
    dfs(insts, 0, req, res, minLoad);
    for (auto& inst : insts) {
        if (inst.name == res) {
            inst.load += req;
            break;
        }
    }
    return res;
}

int main() {
    vector<Inst> insts = {{"Inst1", 0}, {"Inst2", 0}, {"Inst3", 0}};
    for (int i = 0; i < 10; ++i) {
        string inst = dfs_lb(insts, 1);
        cout << "Req " << i + 1 << " to " << inst << endl;
    }
    return 0;
}
