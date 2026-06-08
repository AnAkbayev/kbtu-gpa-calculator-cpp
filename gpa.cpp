#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> gp;
    vector<int> cred;
    int st,sec,fin;
    int cr = 0;
    for(int i = 0; i < n; i++){
        cin >> st >> sec >> fin >> cr;
        cred.push_back(cr);
        int sum = (st + sec + fin) - 50;
        if(st + sec < 30 || fin < 20) gp.push_back(0.0);
        else if(sum < 5) gp.push_back(1.0*cr);
        else if(sum >= 45 && sum <= 50) gp.push_back(4.0*cr);
        else if(sum >= 5){
            int step = sum/5;
            double div = 1.0 + step*(1.0/3.0);
            gp.push_back(div*cr);
        }
    }
    double sumofgpa = 0;
    for(int i = 0; i < gp.size(); i++){
        sumofgpa += gp[i];
    }
    int sumofcr = 0;
    for(int i = 0; i < cred.size(); i++){
        sumofcr += cred[i];
    }
    double gpa = sumofgpa/sumofcr;
    cout << gpa;
    return 0;
}