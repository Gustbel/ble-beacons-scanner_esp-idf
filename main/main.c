#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_tls.h"

#include "ble_beacon_scanner.c"

void app_main()
{
	init_ble_beacon_scan();

	// Scan only once
	scan_ble_beacons();	    
}
