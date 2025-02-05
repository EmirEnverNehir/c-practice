#include <cs50.h>
#include <stdio.h>

void Fc(){
    float fah= get_float("Fahrenheit: ");

    float cel =(fah-32)*5/9;
    printf("Celcius: %.2f \n", cel);


}

void Cf(){
    float cel= get_float("Celcius: ");
    float fah = (cel*9/5)+32;
    printf("Fahrenheit: %.2f \n", fah);
}

void CTK(){
    int b = get_int("type 1 to find Celcius, type 2 to find fahrenheit:   ");
        if(b==1){
             float cel= get_float("Celcius: ");
             float kelvin= cel + 273.15;
              printf("Kelvin: %.2f \n", kelvin);

        } else if (b==2){
            float fah= get_float("Fahrenheit: ");
            float kelvin= (fah-32)*5/9 + 273.15;
            printf("Kelvin: %.2f \n", kelvin);
        }

}

void CFK(){
int d = get_int("type 1 to find Celcius, type 2 to find fahrenheit:   ");
        if(d==1){
             float kelvin= get_float("Kelvin: ");
             float cel= kelvin - 273.15;
             printf("Celcius: %.2f \n", cel);

        } else if(d==2){
            float kelvin= get_float("Kelvin: ");
            float fah= ((kelvin - 273.15)*9/5)+32;;
            printf("Fahrenheit: %.2f \n", fah);

        }

}



void K(){
     int a = get_int("type 1 to convert to kelvin , type 2 to convert from kelvin:  ");
     if(a==1){
        CTK();

     } else if(a==2){
        CFK();

     }


}

int main(void){

    int n=get_int("type 1 to find Celcius, type 2 to find fahrenheit , type 3 to kelvin:  ");
    if(n==1){


    Fc();


    } else if(n==2){
    Cf();


    } else if (n==3) {
    K();


    }




}
   
