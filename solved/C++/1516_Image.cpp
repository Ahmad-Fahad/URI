#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int row = 0, column = 0;
        scanf("%d %d", &row, &column);
        if(row == 0 && column == 0) {
            break;
        }
        else {
            getchar();
            string image[row];
            for(int i=0; i<row; i++) {
                cin>>image[i];
            }
            int modifiedRow = 0, modifiedColumn = 0;
            scanf("%d %d", &modifiedRow, &modifiedColumn);
            int rowMultiple  = 0, columnMultiple = 0;
            rowMultiple      = modifiedRow / row;
            columnMultiple   = modifiedColumn / column;
            for(int i=0; i<row; i++) {
                for(int j = 0; j<rowMultiple; j++) {
                    for(int k=0; k<column; k++) {
                        for(int l = 0; l<columnMultiple; l++) {
                            printf("%c", image[i][k]);
                        }
                    }
                    printf("\n");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
