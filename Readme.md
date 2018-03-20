# Weather

Displays weather in Paris.  
Just testing curlpp and json parser in c++.

# Dependancies

[curlpp](https://github.com/jpbarrette/curlpp)

# Build instructions

1. Set up your API key in [OpenWeather](http://openweathermap.org/api)

2. Add a file `api_key.h` in include with a `#define API_KEY "blahblahblah"` inside it

3. `mkdir build && cd build`

4. `cmake ..`

5. `make`

# Run instructions

`./weather`

