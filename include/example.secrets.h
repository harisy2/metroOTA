#pragma once

// IMPORTANT: Configure wifi here
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PWD"

// IMPORTANT: metroOTA does not provide API Keys. You will need your own.
#define TRIP_UPDATES_URL "http://api.511.org/transit/tripupdates?api_key=[API KEY]&agency=BA"
#define STOPS_URL "http://api.511.org/transit/stops?api_key=[API KEY]&operator_id=BA&format=json"