/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
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
    define(['ApiClient', 'model/PipelineBranchesitem'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./PipelineBranchesitem'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.PipelineBranches = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.PipelineBranchesitem);
  }
}(this, function(ApiClient, PipelineBranchesitem) {
  'use strict';




  /**
   * The PipelineBranches model module.
   * @module model/PipelineBranches
   * @version 1.1.1
   */

  /**
   * Constructs a new <code>PipelineBranches</code>.
   * @alias module:model/PipelineBranches
   * @class
   * @extends Array
   */
  var exports = function() {
    var _this = this;
    _this = new Array();
    Object.setPrototypeOf(_this, exports);

    return _this;
  };

  /**
   * Constructs a <code>PipelineBranches</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/PipelineBranches} obj Optional instance to populate.
   * @return {module:model/PipelineBranches} The populated <code>PipelineBranches</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      ApiClient.constructFromObject(data, obj, 'PipelineBranchesitem');

    }
    return obj;
  }




  return exports;
}));


