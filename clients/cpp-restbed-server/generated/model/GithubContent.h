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
 * GithubContent.h
 *
 * 
 */

#ifndef GithubContent_H_
#define GithubContent_H_



#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubContent
{
public:
    GithubContent();
    virtual ~GithubContent();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// GithubContent members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getSha() const;
    void setSha(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getRepo() const;
    void setRepo(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    void setSize(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOwner() const;
    void setOwner(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getPath() const;
    void setPath(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getBase64Data() const;
    void setBase64Data(std::string value);

protected:
    std::string m_Name;
    std::string m_Sha;
    std::string m__class;
    std::string m_Repo;
    int32_t m_Size;
    std::string m_Owner;
    std::string m_Path;
    std::string m_Base64Data;
};

}
}
}
}

#endif /* GithubContent_H_ */
