#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char S[100001];
        scanf("%s",&S);        
        int len = strlen(S);
        int segment = 0;
        int max_segment = 0;        
        for (int i = 0; i < len; i++) {
            if (S[i] == '1') {
                segment++; // Increment segment count if '1' is encountered
                if (segment > max_segment) {
                    max_segment = segment; // Update max_segment if needed
                }
            } else {
                segment = 0; // Reset segment count if '0' is encountered
            }
        }
        
        if (max_segment > 1) {
            printf("NO\n"); // '1's form more than one segment
        } else {
            printf("YES\n"); // '1's form a single segment
        }
    }
    
    return 0;
}
