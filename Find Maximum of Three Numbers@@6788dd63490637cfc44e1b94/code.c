// Your code here...
#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z)){
        printf("x");
    }
    else if((y>z)&&(y>x)){
        printf("y");
    }
    else{
        printf("z");
    }
}