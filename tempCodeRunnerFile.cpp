#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int minTimeToWashAndDry(int K, vector<int>& W, vector<int>& D) {
    int N = W.size();
    int M = D.size();
    
    // Priority queues for the washing machines and dryers
    priority_queue<int, vector<int>, greater<int>> washQueue;
    priority_queue<int, vector<int>, greater<int>> dryQueue;

    // Initialize the washQueue with all washing machines starting at time 0
    for (int i = 0; i < N; ++i) {
        washQueue.push(0);
    }

    // Initialize the dryQueue with all dryers starting at time 0
    for (int i = 0; i < M; ++i) {
        dryQueue.push(0);
    }

    vector<int> finishWashingTimes(K, 0);
    
    // Process washing
    for (int i = 0; i < K; ++i) {
        int availableTime = washQueue.top();
        washQueue.pop();
        int finishTime = availableTime + W[i % N];
        finishWashingTimes[i] = finishTime;
        washQueue.push(finishTime);
    }
    
    // Process drying
    int maxDryTime = 0;
    for (int i = 0; i < K; ++i) {
        int availableTime = dryQueue.top();
        dryQueue.pop();
        int startDryingTime = max(availableTime, finishWashingTimes[i]);
        int finishDryingTime = startDryingTime + D[i % M];
        maxDryTime = max(maxDryTime, finishDryingTime);
        dryQueue.push(finishDryingTime);
    }
    
    return maxDryTime;
}

int main() {
    int K, N, M;
    cout<<"enter k;";
    cin>>K;
    cout<<"enter n;";
    cin>>N;
    cout<<"enter k;";
    cin>>M;

    
    vector<int> W(N);
    vector<int> D(M);
    
    for (int i = 0; i < N; ++i) {
        cin >> W[i];
    }
    
    for (int i = 0; i < M; ++i) {
        cin >> D[i];
    }
    
    cout << minTimeToWashAndDry(K, W, D) << endl;
    
    return 0;
}
