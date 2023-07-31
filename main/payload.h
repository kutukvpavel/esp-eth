#pragma once

#include <stdio.h>
#include <stdint.h>
#include "esp_eth.h"

#ifdef __cplusplus

namespace payload
{
    void init(esp_eth_handle_t h);
} // namespace payload

#endif

_BEGIN_STD_C
void payload_init(esp_eth_handle_t);
_END_STD_C