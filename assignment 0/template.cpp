#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <random>
#include <time.h>
#include <vector>
#include <sstream>
#include "studyInPink.h"
using namespace std;
//paste your code here

void MyAssert(bool assertion, string msg)
{
    if (!assertion)
    {
        cout << msg << endl;
        abort();
    }
}

int main()
{
    fstream inp("studyInPinkINP.txt", ios_base::in);
    fstream out("studyInPinkOUT.txt", ios_base::in);
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    int hp1, hp2, exp11, exp12, exp21, exp22, exp31, m1, m2;
    int result1, result2, result3;
    int m, n;
    string line1, line2;
    vector<int> vec_input;
    vector<int> vec_output;
    while (!inp.eof())
    {
        getline(inp, line1);
        stringstream ss(line1);
        while (ss >> m)
        {
            vec_input.push_back(m);
        }
    }
    inp.close();
    while (!out.eof())
    {
        getline(out, line2);
        stringstream ss(line2);
        while (ss >> n)
        {
            vec_output.push_back(n);
            ;
        }
    }
    out.close();
    int l = 0;
    int i = 1;
    for (int k = 0; k < (int)vec_input.size();)
    {
        HP1 = vec_input[k];
        HP2 = vec_input[k + 1];
        EXP1 = vec_input[k + 2];
        EXP2 = vec_input[k + 3];
        M1 = vec_input[k + 4];
        M2 = vec_input[k + 5];
        E1 = vec_input[k + 6];
        E2 = vec_input[k + 7];
        E3 = vec_input[k + 8];
        result1 = vec_output[l];
        exp11 = vec_output[l + 1];
        exp12 = vec_output[l + 2];
        result2 = vec_output[l + 3];
        exp21 = vec_output[l + 4];
        exp22 = vec_output[l + 5];
        hp2 = vec_output[l + 6];
        m2 = vec_output[l + 7];
        result3 = vec_output[l + 8];
        hp1 = vec_output[l + 9];
        exp31 = vec_output[l + 10];
        m1 = vec_output[l + 11];
        int res1 = firstMeet(EXP1, EXP2, E1);
        MyAssert(res1 == result1, "Fail in testcase " + to_string(i) + ": Expected result1 = " + to_string(result1) + ", but res1 = " + to_string(res1) + " found");
        MyAssert(EXP1 == exp11, "Fail in testcase " + to_string(i) + ": Expected EXP1 = " + to_string(exp11) + ", but EXP1 = " + to_string(EXP1) + " found");
        MyAssert(EXP2 == exp12, "Fail in testcase " + to_string(i) + ": Expected EXP2 = " + to_string(exp12) + ", but EXP2 = " + to_string(EXP2) + " found");
        int res2 = investigateScene(EXP1, EXP2, HP2, M2, E2);
        MyAssert(res2 == result2, "Fail in testcase " + to_string(i) + ": Expected result2 = " + to_string(result2) + ", but res2 = " + to_string(res2) + " found");
        MyAssert(EXP1 == exp21, "Fail in testcase " + to_string(i) + ": Expected EXP1 = " + to_string(exp21) + ", but EXP1 = " + to_string(EXP1) + " found");
        MyAssert(EXP2 == exp22, "Fail in testcase " + to_string(i) + ": Expected EXP2 = " + to_string(exp22) + ", but EXP2 = " + to_string(EXP2) + " found");
        MyAssert(HP2 == hp2, "Fail in testcase " + to_string(i) + ": Expected HP2 = " + to_string(hp2) + ", but HP2 = " + to_string(HP2) + " found");
        MyAssert(M2 == m2, "Fail in testcase " + to_string(i) + ": Expected M2 = " + to_string(m2) + ", but M2 = " + to_string(M2) + " found");
        int res3 = traceLuggage(HP1, EXP1, M1, E3);
        MyAssert(res3 == result3, "Fail in testcase " + to_string(i) + ": Expected result3 = " + to_string(result3) + ", but res3 = " + to_string(res3) + " found");
        MyAssert(HP1 == hp1, "Fail in testcase " + to_string(i) + ": Expected HP1 = " + to_string(hp1) + ", but HP1 = " + to_string(HP1) + " found");
        MyAssert(EXP1 == exp31, "Fail in testcase " + to_string(i) + ": Expected EXP1 = " + to_string(exp31) + ", but EXP1 = " + to_string(EXP1) + " found");
        MyAssert(M1 == m1, "Fail in testcase " + to_string(i) + ": Expected M1 = " + to_string(m1) + ", but M1 = " + to_string(M1) + " found");
        cout << "OK! Testcase " << i << " passed" << endl;
        i++;
        k += 9;
        l += 12;
    }
}
