#include <stdio.h>
#include <stdlib.h>

long long int tribonacci(int num){
    if(num == 1)
        return 1;
    else if(num == 2)
        return 2;
    else if(num == 3)
        return 4;
    else{
        long long int i,tn,t1 = 1, t2 = 2, t3 = 4;
        for(i = 4; i <= num; i++){
            tn = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = tn;    
        }
    return tn;
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
    printf("There are %lld different ways to reach level %d\n",tribonacci(num), num);
    return 0;
}