#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        
        char s[n + 1];
        scanf("%s", s);
        int count = 0;
        int students = 0;

        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                students++;
            }
        }

        int countZeros = 0;

        for (int i = 0; i < n; i++){
            if (s[i] == '0'){
                if ((i < n - 1 && s[i+1] == '1') || (i > 0 && s[i-1] == '1')){
                    if (countZeros > 0){
                        countZeros = 0;
                        students++;
                    }
                    countZeros--;
                }

                countZeros++;

                if (countZeros >= 3){
                    countZeros -= 3;
                    students++;
                }
            }
        }

        if (countZeros > 0){
            students++;
        }
        
        printf("%d\n", students);
    }
}