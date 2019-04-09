/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from './models';

export interface QueueLeftItem {
    _class?: string;

    actions?: Array<models.CauseAction>;

    blocked?: boolean;

    buildable?: boolean;

    id?: number;

    inQueueSince?: number;

    params?: string;

    stuck?: boolean;

    task?: models.FreeStyleProject;

    url?: string;

    why?: string;

    cancelled?: boolean;

    executable?: models.FreeStyleBuild;

}
