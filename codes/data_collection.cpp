#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

vector<pair<float, float>> getMetrics(int numInst) {
    vector<pair<float, float>> metrics;
    srand(time(0));

    ofstream logFile("metrics.log");

    for (int i = 0; i < numInst; ++i) {
        float cpu = static_cast<float>(rand() % 100);
        float mem = static_cast<float>(rand() % 100);
        metrics.push_back(make_pair(cpu, mem));
        logFile << "Inst " << i + 1 << " - CPU: " << cpu << ", Mem: " << mem << "\n";
    }

    logFile.close();
    return metrics;
}

void normalize(vector<pair<float, float>>& metrics) {
    float maxCpu = 0, maxMem = 0;

    for (auto& m : metrics) {
        maxCpu = max(maxCpu, m.first);
        maxMem = max(maxMem, m.second);
    }

    for (auto& m : metrics) {
        m.first /= maxCpu;
        m.second /= maxMem;
    }
}

void showMetrics(const vector<pair<float, float>>& metrics) {
    cout << "Normalized Metrics (CPU, Mem):\n";
    for (size_t i = 0; i < metrics.size(); ++i) {
        cout << "Inst " << i + 1 << ": " << metrics[i].first << ", " << metrics[i].second << "\n";
    }
}

int main() {
    int numInst = 5;
    vector<pair<float, float>> metrics = getMetrics(numInst);
    normalize(metrics);
    showMetrics(metrics);

    return 0;
}
