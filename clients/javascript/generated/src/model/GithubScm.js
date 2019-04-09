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
    define(['ApiClient', 'model/GithubScmlinks'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./GithubScmlinks'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.GithubScm = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.GithubScmlinks);
  }
}(this, function(ApiClient, GithubScmlinks) {
  'use strict';




  /**
   * The GithubScm model module.
   * @module model/GithubScm
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>GithubScm</code>.
   * @alias module:model/GithubScm
   * @class
   */
  var exports = function() {
    var _this = this;






  };

  /**
   * Constructs a <code>GithubScm</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/GithubScm} obj Optional instance to populate.
   * @return {module:model/GithubScm} The populated <code>GithubScm</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = GithubScmlinks.constructFromObject(data['_links']);
      }
      if (data.hasOwnProperty('credentialId')) {
        obj['credentialId'] = ApiClient.convertToType(data['credentialId'], 'String');
      }
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('uri')) {
        obj['uri'] = ApiClient.convertToType(data['uri'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {module:model/GithubScmlinks} _links
   */
  exports.prototype['_links'] = undefined;
  /**
   * @member {String} credentialId
   */
  exports.prototype['credentialId'] = undefined;
  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {String} uri
   */
  exports.prototype['uri'] = undefined;



  return exports;
}));


