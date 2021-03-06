//
// PipelineActivityartifacts.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class PipelineActivityartifacts: JSONEncodable {

    public var name: String?
    public var size: Int32?
    public var url: String?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["size"] = self.size?.encodeToJSON()
        nillableDictionary["url"] = self.url
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

