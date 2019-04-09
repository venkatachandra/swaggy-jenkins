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


export class GithubContent {
    'name'?: string;
    'sha'?: string;
    '_class'?: string;
    'repo'?: string;
    'size'?: number;
    'owner'?: string;
    'path'?: string;
    'base64Data'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "sha",
            "baseName": "sha",
            "type": "string"
        },
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        },
        {
            "name": "repo",
            "baseName": "repo",
            "type": "string"
        },
        {
            "name": "size",
            "baseName": "size",
            "type": "number"
        },
        {
            "name": "owner",
            "baseName": "owner",
            "type": "string"
        },
        {
            "name": "path",
            "baseName": "path",
            "type": "string"
        },
        {
            "name": "base64Data",
            "baseName": "base64Data",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return GithubContent.attributeTypeMap;
    }
}

