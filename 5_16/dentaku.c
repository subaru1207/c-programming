#include<stdio.h>

int main(void){
    int mode;
    float a,b,n;
    printf("モードを選択(1: + ,2: - ,3: * )\n");
scanf("%d", &mode);
printf("1つ目の値の入力\n");
scanf("%d", &a);
printf("2つ目の値の入力:\n");
scanf("%d", &b);


switch(mode){
    case 1:
    printf("足し算を選択しました。\n");

n= tasu(a,b);
break;

case 2:
printf("引き算を選択しました。\n");



    n=hiku(a,b);
   
    break;

case 3:
printf("掛け算を選択しました。\n");
n=kakeri(a,b);
break;
default:
printf("不正なモードです。\n",n);
}










printf("答えは%fです。\n",n);
return 0;
}


float tasu(float a, float b){
return a+b;
 
}

float hiku(float a, float b){
return a-b;
}

float kakeru(float a, float b){
return a*b;

}


