#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Inst {
    string name;
    int load;
};

string bfs_lb(vector<Inst>& insts, int req) {
    queue<int> q;
    for (int i = 0; i < insts.size(); ++i) q.push(i);
    int minLoad = insts[q.front()].load;
    int idx = q.front();
    q.pop();
    while (!q.empty()) {
        if (insts[q.front()].load < minLoad) {
            minLoad = insts[q.front()].load;
            idx = q.front();
        }
        q.pop();
    }
    insts[idx].load += req;
    return insts[idx].name;
}

int main() {
    vector<Inst> insts = {{"Inst1", 0}, {"Inst2", 0}, {"Inst3", 0}};
    for (int i = 0; i < 10; ++i) {
        string inst = bfs_lb(insts, 1);
        cout << "Req " << i + 1 << " to " << inst << endl;
    }
    return 0;
}
