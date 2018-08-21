//
// DefaultCrumbIssuer.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class DefaultCrumbIssuer: JSONEncodable {

    public var _class: String?
    public var crumb: String?
    public var crumbRequestField: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["crumb"] = self.crumb
        nillableDictionary["crumbRequestField"] = self.crumbRequestField

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
