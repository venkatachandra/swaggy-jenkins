/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


import org.openapitools.server.api._
import org.openapitools.app.{ ResourcesApp, OpenAPIApp }
import javax.servlet.ServletContext
import org.scalatra.LifeCycle

class ScalatraBootstrap extends LifeCycle {
  implicit val openapi = new OpenAPIApp

  override def init(context: ServletContext) {
    try {
      context mount (new BaseRemoteAccessApi, "//BaseRemoteAccess/*")
      context mount (new BlueOceanApi, "//BlueOcean/*")
      context mount (new RemoteAccessApi, "//RemoteAccess/*")
      context mount (new ResourcesApp, "/api-docs/*")
    } catch {
      case e: Throwable => e.printStackTrace()
    }
  }
}
