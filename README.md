# metroOTA 
**MetroOTA** is an ESP32-powered LED matrix display that fetches and shows real-time transit updates.  
It is designed to be lightweight and modular, using nanopb for GTFS-Realtime Protobuf decoding while fitting into the ESP32’s limited memory.

## Features
- Wi-Fi connection with configurable secrets (`secrets.h`)
- Periodic HTTP(S) requests for transit updates
- Efficient Protobuf decoding via nanopb
- LED matrix rendering using Adafruit GFX/NeoPixel
- Modular architecture making it easy to extend to other transit feeds

## Setup

1. **Clone the repo**
   ```bash
   git clone https://github.com/harisy2/metroOTA
   cd metroOTA 
   ```
2.    **Install Dependencies**
 Install   [PlatformIO](https://platformio.org/) (VS Code extension or CLI).
3. **Configure Secrets**
You will need an API key and WiFi credentials for metroOTA to work. 
An example is featured in `/include/example.secret.h`
Once you've edited the file, create a `secrets.h`: 
	```bash
	cp include/example.secrets.h include/secrets.h
	```
4. **Build and Upload to ESP32**
	```bash
	pio run -e esp32dev -t upload
	pio device monitor
	```

## 🛠️ Requirements

-   ESP32 development board (e.g., ESP32-DevKitC)
-   PlatformIO (recommended) or Arduino IDE
-   LED matrix (e.g., 64×16 / 64×32 panel)
-   Libraries:
    -   ArduinoJson
    -   [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)
    -   [Adafruit GFX](https://github.com/adafruit/Adafruit-GFX-Library)
    -   [ESP32-targz](https://github.com/taranais/ESP32-targz)
    -   nanopb (vendored in `lib/nanopb/`)
## Future Plans

-   Full GTFS-Realtime feed parsing (TripUpdate & VehiclePosition entities)
-   Improved LED matrix rendering (animations, layouts, multiple sizes)
-   Configurable multiple agencies
-   OTA updates
## License
This project is licensed under the MIT License
