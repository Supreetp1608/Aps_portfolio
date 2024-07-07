#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Inst {
    int id;
    double cpu;
    double mem;
    double normLoad;
};

vector<Inst> getMetrics() {
    vector<Inst> insts = {
        {0, 70, 60, 0.0},
        {1, 80, 55, 0.0},
        {2, 50, 30, 0.0},
        {3, 60, 40, 0.0}
    };

    for (auto& inst : insts) {
        inst.normLoad = (inst.cpu + inst.mem) / 2.0;
    }

    return insts;
}

void initACO(vector<vector<double>>& ph, vector<vector<double>>& heur, const vector<Inst>& insts) {
    int n = insts.size();
    double initPh = 0.1;

    ph.resize(n, vector<double>(n, initPh));
    heur.resize(n, vector<double>(n, 0.0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                heur[i][j] = 1.0 / (1.0 + abs(insts[i].normLoad - insts[j].normLoad));
            }
        }
    }
}

int selectNext(int cur, const vector<vector<double>>& ph, const vector<vector<double>>& heur) {
    int n = ph.size();
    vector<double> probs(n, 0.0);
    double totalProb = 0.0;
    double alpha = 1.0;
    double beta = 2.0;

    for (int i = 0; i < n; ++i) {
        if (i != cur) {
            probs[i] = pow(ph[cur][i], alpha) * pow(heur[cur][i], beta);
            totalProb += probs[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        probs[i] /= totalProb;
    }

    double randNum = rand() / (RAND_MAX + 1.0);
    double cumProb = 0.0;

    for (int i = 0; i < n; ++i) {
        cumProb += probs[i];
        if (randNum < cumProb) {
            return i;
        }
    }

    return n - 1;
}

void updatePh(vector<vector<double>>& ph, const vector<vector<int>>& paths, double evapRate) {
    int n = ph.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            ph[i][j] *= (1.0 - evapRate);
        }
    }

    for (const auto& path : paths) {
        for (size_t i = 0; i < path.size() - 1; ++i) {
            int from = path[i];
            int to = path[i + 1];
            ph[from][to] += 1.0 / path.size();
        }
    }
}

void runACO(int maxIters, int ants, double evapRate) {
    vector<Inst> insts = getMetrics();
    vector<vector<double>> ph;
    vector<vector<double>> heur;

    initACO(ph, heur, insts);

    for (int iter = 0; iter < maxIters; ++iter) {
        vector<vector<int>> paths(ants);

        for (int ant = 0; ant < ants; ++ant) {
            paths[ant].push_back(rand() % insts.size());

            while (paths[ant].size() < insts.size()) {
                int cur = paths[ant].back();
                int next = selectNext(cur, ph, heur);
                paths[ant].push_back(next);
            }
        }

        updatePh(ph, paths, evapRate);
    }
}

int main() {
    srand(time(0));
    int maxIters = 100;
    int ants = 10;
    double evapRate = 0.1;

    runACO(maxIters, ants, evapRate);

    return 0;
}
