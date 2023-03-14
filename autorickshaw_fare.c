#include<stdio.h>
void main(){
  float km;
    printf("Enter a no. of km travelled: ");
    scanf("%f",&km);
    float wait_time;
    printf("Enter wainting time in mins: ");
    scanf("%f",&wait_time);
    float time;
    printf("Enter 1 for day time or enter 0 for night time: ");
    scanf("%f",&time);
    if(time==1 && km<1.5){

    
        if(wait_time>0 && wait_time<5){

            float a=23+1;
            printf("Total fare is %f",a);
        }
       else if(wait_time>5 && wait_time<10){

            float a=23+2;
            printf("Total fare is %f",a);
    }
    else if(wait_time>10 && wait_time<15){

            float a=23+3;
            printf("Total fare is %f",a);
    }
    else if(wait_time>15 && wait_time<20){

            float a=23+3;
            printf("Total fare is %f",a);
    }
    
    else{
        float a=23+5;
            printf("Total fare is %f",a);
    }
    }   
else if(km>1.5){
 float a=(km-1.5)*10;
 float b=a+wait_time+23;
 printf("The total fare is %f",b); 
}
else if(time==0){
    float a=(km-1.5)*20;
    float b=a+(wait_time*2)+29;
    printf("%f",b);
}
else {
printf("Invalid input\n");
}
printf("\nThankyou");
}