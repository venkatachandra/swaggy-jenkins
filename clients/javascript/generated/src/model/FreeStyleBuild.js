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
    define(['ApiClient', 'model/CauseAction', 'model/EmptyChangeLogSet'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./CauseAction'), require('./EmptyChangeLogSet'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.FreeStyleBuild = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.CauseAction, root.SwaggyJenkins.EmptyChangeLogSet);
  }
}(this, function(ApiClient, CauseAction, EmptyChangeLogSet) {
  'use strict';




  /**
   * The FreeStyleBuild model module.
   * @module model/FreeStyleBuild
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>FreeStyleBuild</code>.
   * @alias module:model/FreeStyleBuild
   * @class
   */
  var exports = function() {
    var _this = this;



















  };

  /**
   * Constructs a <code>FreeStyleBuild</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/FreeStyleBuild} obj Optional instance to populate.
   * @return {module:model/FreeStyleBuild} The populated <code>FreeStyleBuild</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('number')) {
        obj['number'] = ApiClient.convertToType(data['number'], 'Number');
      }
      if (data.hasOwnProperty('url')) {
        obj['url'] = ApiClient.convertToType(data['url'], 'String');
      }
      if (data.hasOwnProperty('actions')) {
        obj['actions'] = ApiClient.convertToType(data['actions'], [CauseAction]);
      }
      if (data.hasOwnProperty('building')) {
        obj['building'] = ApiClient.convertToType(data['building'], 'Boolean');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('duration')) {
        obj['duration'] = ApiClient.convertToType(data['duration'], 'Number');
      }
      if (data.hasOwnProperty('estimatedDuration')) {
        obj['estimatedDuration'] = ApiClient.convertToType(data['estimatedDuration'], 'Number');
      }
      if (data.hasOwnProperty('executor')) {
        obj['executor'] = ApiClient.convertToType(data['executor'], 'String');
      }
      if (data.hasOwnProperty('fullDisplayName')) {
        obj['fullDisplayName'] = ApiClient.convertToType(data['fullDisplayName'], 'String');
      }
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('keepLog')) {
        obj['keepLog'] = ApiClient.convertToType(data['keepLog'], 'Boolean');
      }
      if (data.hasOwnProperty('queueId')) {
        obj['queueId'] = ApiClient.convertToType(data['queueId'], 'Number');
      }
      if (data.hasOwnProperty('result')) {
        obj['result'] = ApiClient.convertToType(data['result'], 'String');
      }
      if (data.hasOwnProperty('timestamp')) {
        obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Number');
      }
      if (data.hasOwnProperty('builtOn')) {
        obj['builtOn'] = ApiClient.convertToType(data['builtOn'], 'String');
      }
      if (data.hasOwnProperty('changeSet')) {
        obj['changeSet'] = EmptyChangeLogSet.constructFromObject(data['changeSet']);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {Number} number
   */
  exports.prototype['number'] = undefined;
  /**
   * @member {String} url
   */
  exports.prototype['url'] = undefined;
  /**
   * @member {Array.<module:model/CauseAction>} actions
   */
  exports.prototype['actions'] = undefined;
  /**
   * @member {Boolean} building
   */
  exports.prototype['building'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {Number} duration
   */
  exports.prototype['duration'] = undefined;
  /**
   * @member {Number} estimatedDuration
   */
  exports.prototype['estimatedDuration'] = undefined;
  /**
   * @member {String} executor
   */
  exports.prototype['executor'] = undefined;
  /**
   * @member {String} fullDisplayName
   */
  exports.prototype['fullDisplayName'] = undefined;
  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {Boolean} keepLog
   */
  exports.prototype['keepLog'] = undefined;
  /**
   * @member {Number} queueId
   */
  exports.prototype['queueId'] = undefined;
  /**
   * @member {String} result
   */
  exports.prototype['result'] = undefined;
  /**
   * @member {Number} timestamp
   */
  exports.prototype['timestamp'] = undefined;
  /**
   * @member {String} builtOn
   */
  exports.prototype['builtOn'] = undefined;
  /**
   * @member {module:model/EmptyChangeLogSet} changeSet
   */
  exports.prototype['changeSet'] = undefined;



  return exports;
}));


