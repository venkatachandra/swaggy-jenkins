<?php
/**
 * ComputerSet
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
 * Class representing the ComputerSet model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComputerSet 
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
     * @SerializedName("busyExecutors")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $busyExecutors;

    /**
     * @var OpenAPI\Server\Model\HudsonMasterComputer[]|null
     * @SerializedName("computer")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\HudsonMasterComputer")
     * })
     * @Type("array<OpenAPI\Server\Model\HudsonMasterComputer>")
     */
    protected $computer;

    /**
     * @var string|null
     * @SerializedName("displayName")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $displayName;

    /**
     * @var int|null
     * @SerializedName("totalExecutors")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $totalExecutors;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->busyExecutors = isset($data['busyExecutors']) ? $data['busyExecutors'] : null;
        $this->computer = isset($data['computer']) ? $data['computer'] : null;
        $this->displayName = isset($data['displayName']) ? $data['displayName'] : null;
        $this->totalExecutors = isset($data['totalExecutors']) ? $data['totalExecutors'] : null;
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
     * Gets busyExecutors.
     *
     * @return int|null
     */
    public function getBusyExecutors()
    {
        return $this->busyExecutors;
    }

    /**
     * Sets busyExecutors.
     *
     * @param int|null $busyExecutors
     *
     * @return $this
     */
    public function setBusyExecutors($busyExecutors = null)
    {
        $this->busyExecutors = $busyExecutors;

        return $this;
    }

    /**
     * Gets computer.
     *
     * @return OpenAPI\Server\Model\HudsonMasterComputer[]|null
     */
    public function getComputer()
    {
        return $this->computer;
    }

    /**
     * Sets computer.
     *
     * @param OpenAPI\Server\Model\HudsonMasterComputer[]|null $computer
     *
     * @return $this
     */
    public function setComputer(HudsonMasterComputer $computer = null)
    {
        $this->computer = $computer;

        return $this;
    }

    /**
     * Gets displayName.
     *
     * @return string|null
     */
    public function getDisplayName()
    {
        return $this->displayName;
    }

    /**
     * Sets displayName.
     *
     * @param string|null $displayName
     *
     * @return $this
     */
    public function setDisplayName($displayName = null)
    {
        $this->displayName = $displayName;

        return $this;
    }

    /**
     * Gets totalExecutors.
     *
     * @return int|null
     */
    public function getTotalExecutors()
    {
        return $this->totalExecutors;
    }

    /**
     * Sets totalExecutors.
     *
     * @param int|null $totalExecutors
     *
     * @return $this
     */
    public function setTotalExecutors($totalExecutors = null)
    {
        $this->totalExecutors = $totalExecutors;

        return $this;
    }
}


