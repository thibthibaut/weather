#include <iostream>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>

#include <json.hpp>

#include <api_key.h>

using json = nlohmann::json;

int main(int argc, char** argv){

	std::cout << "Weather in Paris:" << std::endl;
	std::string apiEndpoint("http://api.openweathermap.org/data/2.5/weather?q=Paris%2Cfr&appid=" API_KEY );

	curlpp::Cleanup myCleanup;
	std::ostringstream stream;
	stream << curlpp::options::Url(apiEndpoint);

	auto j = json::parse(stream.str());

	std::cout << j["weather"][0]["description"] << std::endl;

	return 0;
}
