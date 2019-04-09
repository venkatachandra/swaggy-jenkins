/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/ExtensionClassImpllinks'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ExtensionClassImpllinks'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.ExtensionClassImpl = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.ExtensionClassImpllinks);
  }
}(this, function(ApiClient, ExtensionClassImpllinks) {
  'use strict';




  /**
   * The ExtensionClassImpl model module.
   * @module model/ExtensionClassImpl
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ExtensionClassImpl</code>.
   * @alias module:model/ExtensionClassImpl
   * @class
   */
  var exports = function() {
    var _this = this;




  };

  /**
   * Constructs a <code>ExtensionClassImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ExtensionClassImpl} obj Optional instance to populate.
   * @return {module:model/ExtensionClassImpl} The populated <code>ExtensionClassImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = ExtensionClassImpllinks.constructFromObject(data['_links']);
      }
      if (data.hasOwnProperty('classes')) {
        obj['classes'] = ApiClient.convertToType(data['classes'], ['String']);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {module:model/ExtensionClassImpllinks} _links
   */
  exports.prototype['_links'] = undefined;
  /**
   * @member {Array.<String>} classes
   */
  exports.prototype['classes'] = undefined;



  return exports;
}));


