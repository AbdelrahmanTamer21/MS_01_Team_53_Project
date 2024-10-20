#include "led.h"
#include <stdio.h>
void pin_init(){
    gpio_init(RED_LED_PIN);
    gpio_init(RED_LED_PIN);
    gpio_set_dir(RED_LED_PIN,GPIO_OUT);
    gpio_init(GREEN_LED_PIN);
    gpio_set_dir(GREEN_LED_PIN,GPIO_OUT);
    gpio_init(BLUE_LED_PIN);
    gpio_set_dir(BLUE_LED_PIN,GPIO_OUT); 
    }
int main()
{
    stdio_init_all();

    pin_init();


    // Intialize all leds to be turned off
    gpio_put(BLUE_LED_PIN,1);
    gpio_put(RED_LED_PIN,0);
    gpio_put(GREEN_LED_PIN,0);
    while (true) {
        gpio_put(BLUE_LED_PIN,1);
        gpio_put(RED_LED_PIN,0);
        gpio_put(GREEN_LED_PIN,0);

        sleep_ms(5000);
        gpio_put(RED_LED_PIN,1);
        sleep_ms(1000);
        gpio_put(RED_LED_PIN,0);
        gpio_put(GREEN_LED_PIN,1);
        sleep_ms(1000); 

        gpio_put(GREEN_LED_PIN,0);
        gpio_put(BLUE_LED_PIN,0);
        sleep_ms(1000);

        gpio_put(BLUE_LED_PIN,0);
        gpio_put(RED_LED_PIN,1);
        gpio_put(GREEN_LED_PIN,1);
        sleep_ms(2000);

     
    }

}