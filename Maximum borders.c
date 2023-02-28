#include <stdio.h>

void findbig(int goal[], int n){
	int big = goal[0];
    for (int k = 0; k < n; k++){
        if (goal[k] > big)
        {
            big = goal[k];
        }
    }
    printf("%d\n", big);
}

int main(){
	int t,n,m;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++){
        scanf("%d %d", &n, &m);
		char shape[m];
        int goal[n];
		for (int x = 0; x < n; x++){
            goal[x] = 0;
			scanf("%s", shape);
            for (int y = 0; y < m; y++){				
                if (shape[y] == '#'){
                    goal[x] += 1;
                }
			}
		}

        findbig(goal,n);
		
	}
	
    return 0;
}
