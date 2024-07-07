#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Inst {
    string name;
    int priority;
    bool operator<(const Inst& other) const {
        return priority < other.priority;
    }
};

string pq(vector<Inst>& insts, int req) {
    priority_queue<Inst> pq(insts.begin(), insts.end());
    Inst top = pq.top();
    pq.pop();
    top.priority += req;
    pq.push(top);
    insts = vector<Inst>();
    while (!pq.empty()) {
        insts.push_back(pq.top());
        pq.pop();
    }
    return top.name;
}

int main() {
    vector<Inst> insts = {{"Inst1", 1}, {"Inst2", 2}, {"Inst3", 3}};
    for (int i = 0; i < 10; ++i) {
        string inst = pq(insts, 1);
        cout << "Req " << i + 1 << " to " << inst << endl;
    }
    return 0;
}
