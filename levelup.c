#include <stdio.h>
#include <stdlib.h>

int tribonacci(int num){
    int tri[num + 1];
    tri[1] = 1;
    tri[2] = 2;
    tri[3] = 4;
    if(num == 1)
        return 1;
    else if(num == 2)
        return 2;
    else if(num == 3)
        return 4;
    else{
        for(int i = 4; i <= num; i++){
            tri[i] = tri[i - 1] + tri[i - 2] + tri[i - 3];
        }
        return tri[num];
    }
}


int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Error with the inputs\n");
        return 1;
    }
    int num = atoi(argv[1]);
    //https://math.stackexchange.com/questions/3912019
    //Μας δινει πως προκειται για μια σειρα tribonacci δηλαδή ισχύει πως an=a(n−1)+a(n−2)+a(n−3)
    printf("There are %d different ways to reach level %d\n",tribonacci(num), num);
    return 0;
}