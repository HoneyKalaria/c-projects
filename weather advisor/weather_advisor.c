#include <stdio.h>
int main(){
    int again =1;
while(again == 1){
    printf("======weather advisor======\n");
int temp;
    printf("Enter temperature\n");
    scanf("%d",&temp);
    if(temp>60 || temp<-50){
        printf("Invalid temperature ! Try again\n");
        continue;
    }
    if(temp>35){
        printf("Very Hot");
    }
    else if(temp>=25 && temp<=35){
        printf("Warm");
    }
    else if(temp>=15 && temp<=24){
        printf("cool");
    }
    else if(temp<15){
        printf("Cold");
    }
    int weather;
    printf("\n\nChoose weather condition:\n");
printf("1. Sunny\n");
printf("2. Rainy\n");
printf("3. Cloudy\n");
printf("4. Stormy\n");

printf("Enter your choice: ");
scanf("%d", &weather);

if(weather<1 || weather>4){
    printf("invalid weather choice! try again\n");
    continue;
}

switch(weather){                      // instead of switch i can also use 'if else'
    case 1:
    printf("Weather:sunny");
    break;

     case 2:
    printf("Weather:Rainy");
    break;
     case 3:
    printf("Weather:Cloudy");
    break;
     case 4:
    printf("Weather:stormy");
    break;

    default:
    printf("invalid choice");

}
if ( weather == 1 && temp>35){
    printf("\nAdvice:Drink plenty of water.");
}
else if ( weather == 2){
    printf("\nAdvice: Carry an umberlla.");
}
else if ( weather == 4){
    printf("\nAdvice:Stay indoor if possible.");
}
else if ( temp<15){
    printf("\nAdvice: wear warm clothes.");
}
else {
    printf("\nAdvice: Have a nice day!.");
}
    printf("\nCheck another day? 1=yes ,0=No\n");
    scanf("%d",&again);
}

    return 0;
}