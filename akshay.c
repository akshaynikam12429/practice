#include <stdio.h>
int add(int a, int b){
    if(a>0){
        return a+b;
    }
    else{
        return -1;
    }
}
int main(){
    int x=0,y=19;
    int z=add(x,y);
    printf("Added: %d+%d=%d\n",x,y,z);
    return 0;
}
