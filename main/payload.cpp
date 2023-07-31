#include "payload.h"

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

namespace payload
{
    esp_eth_handle_t eth_handle = NULL;

    void task_body(void* arg)
    {

    }

    void init(esp_eth_handle_t h)
    {
        eth_handle = h;

        
    }
} // namespace payload


_BEGIN_STD_C

void payload_init(esp_eth_handle_t h)
{
    payload::init(h);
}

_END_STD_C