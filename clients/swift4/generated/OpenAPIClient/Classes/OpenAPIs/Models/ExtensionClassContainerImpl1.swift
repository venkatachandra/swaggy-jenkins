//
// ExtensionClassContainerImpl1.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ExtensionClassContainerImpl1: Codable {

    public var _class: String?
    public var links: ExtensionClassContainerImpl1links?
    public var map: ExtensionClassContainerImpl1map?

    public init(_class: String?, links: ExtensionClassContainerImpl1links?, map: ExtensionClassContainerImpl1map?) {
        self._class = _class
        self.links = links
        self.map = map
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case links = "_links"
        case map
    }


}

