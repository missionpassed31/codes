#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of objects: ");
    scanf("%d", &n);

    int w[n], p[n]; 

    printf("Enter the weights of the objects:\n");
    for (int i = 0; i < n; ++i) {
        printf("Object %d: ", i + 1);
        scanf("%d", &w[i]);
    }

    printf("Enter the profits of the objects:\n");
    for (int i = 0; i < n; ++i) {
        printf("Object %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    int W;
    printf("Enter the capacity of the bag: ");
    scanf("%d", &W);

    int cur_w = W;
    float tot_v = 0;

    while (cur_w > 0) {
        int maxi = -1;
        for (int i = 0; i < n; ++i) {
            if (w[i] > 0 && (maxi == -1 || (float)p[i] / w[i] > (float)p[maxi] / w[maxi])) {
                maxi = i;
            }
        }

        if (maxi == -1) {
            break; 
        }

        if (cur_w >= w[maxi]) {
            cur_w -= w[maxi];
            tot_v += p[maxi];
            printf("Added object %d (%d, %d) completely in the bag. Space left: %d.\n", maxi + 1, w[maxi], p[maxi], cur_w);
            w[maxi] = 0; 
        } else {
            float fraction = (float)cur_w / w[maxi];
            tot_v += fraction * p[maxi];
            printf("Added %d%% (%d, %d) of object %d in the bag.\n", (int)(fraction * 100), w[maxi], p[maxi], maxi + 1);
            break;
        }
    }

    printf("Filled the bag with objects worth %.2f.\n", tot_v);
    return 0;
}

