#pragma once

#define PROJECT_NAME "MetroOTA"
#define FW_VERSION "0.1.0"

// wifi
#define WIFI_CONNECT_TIMEOUT_MS 20000 // 20s
#define WIFI_RETRY_DELAY_MS 1000      // 1s

#define HTTP_TIMEOUT_MS 8000
#define USER_AGENT PROJECT_NAME "/" FW_VERSION

// optional matrix configurations
#define PIN 18 // Data pin
#define PANEL_W 16
#define PANEL_H 16
#define NUM_PANELS 4

#define MATRIX_WIDTH (PANEL_W * NUM_PANELS)
#define MATRIX_HEIGHT PANEL_H
#define NUM_LEDS (MATRIX_WIDTH * MATRIX_HEIGHT)