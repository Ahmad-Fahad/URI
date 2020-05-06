#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        int numberOfInstructions = 0, finalPosition = 0;
        scanf("%d", &numberOfInstructions);
        getchar();
        string instruction;
        int instructionValue[numberOfInstructions];
        for(int i=0; i<numberOfInstructions; i++) {
            getline(cin, instruction);
            if(instruction == "LEFT") {
                instructionValue[i] = -1;
            }
            else if(instruction == "RIGHT") {
                instructionValue[i] = 1;
            }
            else {
                int index = 0;
                string number = instruction.substr(8);
                stringstream strm;
                strm << number;
                strm >> index;
                instructionValue[i] = instructionValue[index-1];
                strm.clear();
                }
            }
        for(int i=0; i<numberOfInstructions; i++) {
            finalPosition += instructionValue[i];
        }
        cout<<finalPosition<<endl;
    }
    return 0;
}
