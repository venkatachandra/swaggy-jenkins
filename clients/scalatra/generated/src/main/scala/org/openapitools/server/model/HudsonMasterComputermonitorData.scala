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

package org.openapitools.server.model

case class HudsonMasterComputermonitorData(
  hudsonPeriodnodeUnderscoremonitorsPeriodSwapSpaceMonitor: Option[SwapSpaceMonitorMemoryUsage2],

  hudsonPeriodnodeUnderscoremonitorsPeriodTemporarySpaceMonitor: Option[DiskSpaceMonitorDescriptorDiskSpace],

  hudsonPeriodnodeUnderscoremonitorsPeriodDiskSpaceMonitor: Option[DiskSpaceMonitorDescriptorDiskSpace],

  hudsonPeriodnodeUnderscoremonitorsPeriodArchitectureMonitor: Option[String],

  hudsonPeriodnodeUnderscoremonitorsPeriodResponseTimeMonitor: Option[ResponseTimeMonitorData],

  hudsonPeriodnodeUnderscoremonitorsPeriodClockMonitor: Option[ClockDifference],

  Underscoreclass: Option[String]

 )
