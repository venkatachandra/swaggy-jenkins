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


export class QueueItemImpl {
    '_class'?: string;
    'expectedBuildNumber'?: number;
    'id'?: string;
    'pipeline'?: string;
    'queuedTime'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        },
        {
            "name": "expectedBuildNumber",
            "baseName": "expectedBuildNumber",
            "type": "number"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "pipeline",
            "baseName": "pipeline",
            "type": "string"
        },
        {
            "name": "queuedTime",
            "baseName": "queuedTime",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return QueueItemImpl.attributeTypeMap;
    }
}

