/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ModelBase.h
 *
 * This is the base class for all model classes
 */

#ifndef ModelBase_H_
#define ModelBase_H_


#include "json.hpp"
#include <ctime>
#include <string>
#include <vector>
#include <map>

namespace org {
namespace openapitools {
namespace server {
namespace model {

class  ModelBase
{
public:
    ModelBase();
    virtual ~ModelBase();

    virtual void validate() = 0;

    virtual nlohmann::json toJson() const = 0;
    virtual void fromJson(nlohmann::json& json) = 0;

    static std::string toJson(  std::string const& value );
    static std::string toJson(  std::time_t const& value );
    static int32_t toJson( int32_t const value );
    static int64_t toJson( int64_t const value );
    static double toJson( double const value );
    static bool toJson( bool const value );
    static nlohmann::json toJson(ModelBase const& content ); 
};

class ModelArrayHelper {
public:
	template<typename T>
	static std::vector<T> fromJson(nlohmann::json& json) {
		T *ptrTest;
		std::vector<T> val;
		if (dynamic_cast<ModelBase*>(ptrTest) != nullptr) {
			if (!json.empty()) {
				for (auto &item : json.items()) {
					T entry;
					entry.fromJson(item.value());
					val.push_back(entry);
				}
			}
		}
		return val;
	}
	template<typename T>
	static nlohmann::json toJson(std::vector<T> val) {
		nlohmann::json json;
		for(auto item : val){
			json.push_back(item.toJson());
		}
		return json;
	}
};

class ArrayHelper {
public:
	template<typename T>
	static std::vector<T> fromJson(nlohmann::json& json) {
		std::vector<T> val;
		nlohmann::from_json(json, val);
		return val;
	}
	template<typename T>
	static nlohmann::json toJson(std::vector<T> val) {
		nlohmann::json json;
		nlohmann::to_json(json, val);
		return json;
	}
};

class ModelMapHelper {
public:
	template<typename T>
	static std::map<std::string, T> & fromJson(nlohmann::json& json) {
		T *ptrTest;
		std::map<std::string, T> val;
		if (dynamic_cast<ModelBase*>(ptrTest) != nullptr) {
			if (!json.empty()) {
				for (auto &item : json.items()) {
					T entry;
					entry.fromJson(item.value());
					val.insert(val.end(),
							std::pair<std::string, T>(item.key(), entry));
				}
			}
		}
		return val;
	}
	template<typename T>
	static nlohmann::json toJson(std::map<std::string, T> val) {
		nlohmann::json json;
		for (auto const& item : val) {
		  json[item.first] = item.second.toJson();
		}
		return json;
	}
};

class MapHelper {
public:
	template<typename T>
	static std::map<std::string, T> & fromJson(nlohmann::json& json) {
		std::map<std::string, T> val;
		if (!json.empty()) {
			for (auto &item : json.items()) {
				T entry = item.value();
				val.insert(val.end(),
						std::pair<std::string, T>(item.key(), entry));
			}
		}
		return val;
	}
	template<typename T>
	static nlohmann::json toJson(std::map<std::string, T> val) {
		nlohmann::json json;
		for (auto const& item : val) {
		  nlohmann::json jitem = item.second;
		  json[item.first] = jitem;
		}
		return json;
	}
};

}
}
}
}

#endif /* ModelBase_H_ */
