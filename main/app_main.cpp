#include "driver/gpio.h"

#include "app_led.hpp"
#include "app_rgb.hpp"
#include "app_speech.hpp"

extern "C" void app_main()
{
    // QueueHandle_t xQueueFrame_0 = 
    xQueueCreate(2, sizeof(camera_fb_t *));
    // QueueHandle_t xQueueFrame_1 = 
    xQueueCreate(2, sizeof(camera_fb_t *));
    // QueueHandle_t xQueueFrame_2 = 
    xQueueCreate(2, sizeof(camera_fb_t *));

    AppSpeech *speech = new AppSpeech();

    AppLED *led = new AppLED(GPIO_NUM_14, speech);
    AppRGB *rgb = new AppRGB(13, speech);

    speech->attach(led);
    speech->attach(rgb);

    speech->run();
}
