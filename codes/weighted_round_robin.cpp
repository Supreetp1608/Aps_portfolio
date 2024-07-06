#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  // For rand

using namespace std;

struct Inst {
    string name;
    int weight;
    int curWeight;
    int effWeight;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int gcdVec(const vector<int>& weights) {
    int res = weights[0];
    for (size_t i = 1; i < weights.size(); ++i) {
        res = gcd(res, weights[i]);
    }
    return res;
}

string wrr(vector<Inst>& insts) {
    if (insts.empty()) return "";

    Inst* bestInst = nullptr;
    int totalEffWeight = 0;

    for (auto& inst : insts) {
        inst.curWeight += inst.effWeight;
        totalEffWeight += inst.effWeight;

        if (bestInst == nullptr || inst.curWeight > bestInst->curWeight) {
            bestInst = &inst;
        }
    }

    bestInst->curWeight -= totalEffWeight;

    for (int i = 0; i < 100000000; ++i) {
        int temp = rand() % 100;
    }

    return bestInst->name;
}

int main() {
    vector<Inst> insts = {
        {"Inst1", 1, 0, 1},
        {"Inst2", 2, 0, 2},
        {"Inst3", 3, 0, 3}
    };

    for (int i = 0; i < 10; ++i) {
        string inst = wrr(insts);
        cout << "Req " << i + 1 << " assigned to " << inst << " using WRR algo\n";
    }

    return 0;
}
