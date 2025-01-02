#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include "esp_wifi.h"
#include "esp_event.h"

// WiFi事件回调函数类型
typedef void (*wifi_connected_callback_t)(void);

// WiFi初始化函数
esp_err_t wifi_init_softap(void);

// WiFi STA模式初始化函数
esp_err_t wifi_init_sta(const char *ssid, const char *password, wifi_connected_callback_t callback);

// WiFi扫描函数
esp_err_t wifi_scan_networks(wifi_ap_record_t **ap_records, uint16_t *ap_count);

#endif // WIFI_MANAGER_H
