/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/**
 * SwagPipelineQueue
 */
public class SwagPipelineQueue extends ArrayList<SwagQueueItemImpl> {
    public static SwagPipelineQueue getExample() {
        SwagPipelineQueue pipelineQueue = new SwagPipelineQueue();
        return pipelineQueue;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagPipelineQueue) {
            SwagPipelineQueue pipelineQueue = (SwagPipelineQueue) obj;
            return ;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        return hashCode;
    }
}
