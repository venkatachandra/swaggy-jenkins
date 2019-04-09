<?php
/**
 * Queue
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the Queue model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class Queue 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var OpenAPI\Server\Model\QueueBlockedItem[]|null
     * @SerializedName("items")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\QueueBlockedItem")
     * })
     * @Type("array<OpenAPI\Server\Model\QueueBlockedItem>")
     */
    protected $items;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->items = isset($data['items']) ? $data['items'] : null;
    }

    /**
     * Gets class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->class;
    }

    /**
     * Sets class.
     *
     * @param string|null $class
     *
     * @return $this
     */
    public function setClass($class = null)
    {
        $this->class = $class;

        return $this;
    }

    /**
     * Gets items.
     *
     * @return OpenAPI\Server\Model\QueueBlockedItem[]|null
     */
    public function getItems()
    {
        return $this->items;
    }

    /**
     * Sets items.
     *
     * @param OpenAPI\Server\Model\QueueBlockedItem[]|null $items
     *
     * @return $this
     */
    public function setItems(QueueBlockedItem $items = null)
    {
        $this->items = $items;

        return $this;
    }
}


