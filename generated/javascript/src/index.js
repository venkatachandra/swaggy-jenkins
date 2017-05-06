/**
 * Swaggy Jenkins
 * Jenkins remote access API
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 */

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/DefaultCrumbIssuer', 'api/JenkinsApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/DefaultCrumbIssuer'), require('./api/JenkinsApi'));
  }
}(function(ApiClient, DefaultCrumbIssuer, JenkinsApi) {
  'use strict';

  /**
   * Jenkins_remote_access_API.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var SwaggyJenkins = require('index'); // See note below*.
   * var xxxSvc = new SwaggyJenkins.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new SwaggyJenkins.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new SwaggyJenkins.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new SwaggyJenkins.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 0.0.1
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The DefaultCrumbIssuer model constructor.
     * @property {module:model/DefaultCrumbIssuer}
     */
    DefaultCrumbIssuer: DefaultCrumbIssuer,
    /**
     * The JenkinsApi service constructor.
     * @property {module:api/JenkinsApi}
     */
    JenkinsApi: JenkinsApi
  };

  return exports;
}));
