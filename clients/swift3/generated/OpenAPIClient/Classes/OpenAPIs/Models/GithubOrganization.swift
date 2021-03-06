//
// GithubOrganization.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class GithubOrganization: JSONEncodable {

    public var _class: String?
    public var links: GithubOrganizationlinks?
    public var jenkinsOrganizationPipeline: Bool?
    public var name: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["jenkinsOrganizationPipeline"] = self.jenkinsOrganizationPipeline
        nillableDictionary["name"] = self.name

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

