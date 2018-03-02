#include<bits/stdc++.h>
using namespace std;
int main()
{
    int shirtNumber = 0;
    scanf("%d", &shirtNumber);
    while(shirtNumber--) {
        int groupMembers = 0, secretNumber = 0, studentGuess = 0, diff = 0;
        scanf("%d %d", &groupMembers, &secretNumber);
        vector <int> sortedValues, differences;
        for(int i=0; i<groupMembers; i++) {
            scanf("%d", &studentGuess);
            if(secretNumber > studentGuess) {
                diff = secretNumber - studentGuess;
            }
            else {
                diff = studentGuess - secretNumber;
            }
            sortedValues.push_back(diff);
            differences.push_back(diff);
        }
        sort(sortedValues.begin(), sortedValues.end());
        for(int i = 0; i<groupMembers; i++) {
            if(differences[i] == sortedValues[0]) {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
