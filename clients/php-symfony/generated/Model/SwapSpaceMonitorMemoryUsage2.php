<?php
/**
 * SwapSpaceMonitorMemoryUsage2
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
 * Class representing the SwapSpaceMonitorMemoryUsage2 model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class SwapSpaceMonitorMemoryUsage2 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var int|null
     * @SerializedName("availablePhysicalMemory")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $availablePhysicalMemory;

    /**
     * @var int|null
     * @SerializedName("availableSwapSpace")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $availableSwapSpace;

    /**
     * @var int|null
     * @SerializedName("totalPhysicalMemory")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $totalPhysicalMemory;

    /**
     * @var int|null
     * @SerializedName("totalSwapSpace")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $totalSwapSpace;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->availablePhysicalMemory = isset($data['availablePhysicalMemory']) ? $data['availablePhysicalMemory'] : null;
        $this->availableSwapSpace = isset($data['availableSwapSpace']) ? $data['availableSwapSpace'] : null;
        $this->totalPhysicalMemory = isset($data['totalPhysicalMemory']) ? $data['totalPhysicalMemory'] : null;
        $this->totalSwapSpace = isset($data['totalSwapSpace']) ? $data['totalSwapSpace'] : null;
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
     * Gets availablePhysicalMemory.
     *
     * @return int|null
     */
    public function getAvailablePhysicalMemory()
    {
        return $this->availablePhysicalMemory;
    }

    /**
     * Sets availablePhysicalMemory.
     *
     * @param int|null $availablePhysicalMemory
     *
     * @return $this
     */
    public function setAvailablePhysicalMemory($availablePhysicalMemory = null)
    {
        $this->availablePhysicalMemory = $availablePhysicalMemory;

        return $this;
    }

    /**
     * Gets availableSwapSpace.
     *
     * @return int|null
     */
    public function getAvailableSwapSpace()
    {
        return $this->availableSwapSpace;
    }

    /**
     * Sets availableSwapSpace.
     *
     * @param int|null $availableSwapSpace
     *
     * @return $this
     */
    public function setAvailableSwapSpace($availableSwapSpace = null)
    {
        $this->availableSwapSpace = $availableSwapSpace;

        return $this;
    }

    /**
     * Gets totalPhysicalMemory.
     *
     * @return int|null
     */
    public function getTotalPhysicalMemory()
    {
        return $this->totalPhysicalMemory;
    }

    /**
     * Sets totalPhysicalMemory.
     *
     * @param int|null $totalPhysicalMemory
     *
     * @return $this
     */
    public function setTotalPhysicalMemory($totalPhysicalMemory = null)
    {
        $this->totalPhysicalMemory = $totalPhysicalMemory;

        return $this;
    }

    /**
     * Gets totalSwapSpace.
     *
     * @return int|null
     */
    public function getTotalSwapSpace()
    {
        return $this->totalSwapSpace;
    }

    /**
     * Sets totalSwapSpace.
     *
     * @param int|null $totalSwapSpace
     *
     * @return $this
     */
    public function setTotalSwapSpace($totalSwapSpace = null)
    {
        $this->totalSwapSpace = $totalSwapSpace;

        return $this;
    }
}


