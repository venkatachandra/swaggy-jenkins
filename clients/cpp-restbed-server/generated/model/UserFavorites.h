/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UserFavorites.h
 *
 * 
 */

#ifndef UserFavorites_H_
#define UserFavorites_H_



#include "FavoriteImpl.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserFavorites
{
public:
    UserFavorites();
    virtual ~UserFavorites();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// UserFavorites members
    

protected:
};

}
}
}
}

#endif /* UserFavorites_H_ */
