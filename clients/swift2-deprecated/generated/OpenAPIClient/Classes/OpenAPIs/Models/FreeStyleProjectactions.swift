//
// FreeStyleProjectactions.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class FreeStyleProjectactions: JSONEncodable {
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}