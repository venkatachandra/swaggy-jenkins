<?php
/**
 * Pipeline
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
 * Class representing the Pipeline model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class Pipeline 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var string|null
     * @SerializedName("organization")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $organization;

    /**
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $name;

    /**
     * @var string|null
     * @SerializedName("displayName")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $displayName;

    /**
     * @var string|null
     * @SerializedName("fullName")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $fullName;

    /**
     * @var int|null
     * @SerializedName("weatherScore")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $weatherScore;

    /**
     * @var int|null
     * @SerializedName("estimatedDurationInMillis")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $estimatedDurationInMillis;

    /**
     * @var OpenAPI\Server\Model\PipelinelatestRun|null
     * @SerializedName("latestRun")
     * @Assert\Type("OpenAPI\Server\Model\PipelinelatestRun")
     * @Type("OpenAPI\Server\Model\PipelinelatestRun")
     */
    protected $latestRun;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->organization = isset($data['organization']) ? $data['organization'] : null;
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->displayName = isset($data['displayName']) ? $data['displayName'] : null;
        $this->fullName = isset($data['fullName']) ? $data['fullName'] : null;
        $this->weatherScore = isset($data['weatherScore']) ? $data['weatherScore'] : null;
        $this->estimatedDurationInMillis = isset($data['estimatedDurationInMillis']) ? $data['estimatedDurationInMillis'] : null;
        $this->latestRun = isset($data['latestRun']) ? $data['latestRun'] : null;
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
     * Gets organization.
     *
     * @return string|null
     */
    public function getOrganization()
    {
        return $this->organization;
    }

    /**
     * Sets organization.
     *
     * @param string|null $organization
     *
     * @return $this
     */
    public function setOrganization($organization = null)
    {
        $this->organization = $organization;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param string|null $name
     *
     * @return $this
     */
    public function setName($name = null)
    {
        $this->name = $name;

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
     * Gets fullName.
     *
     * @return string|null
     */
    public function getFullName()
    {
        return $this->fullName;
    }

    /**
     * Sets fullName.
     *
     * @param string|null $fullName
     *
     * @return $this
     */
    public function setFullName($fullName = null)
    {
        $this->fullName = $fullName;

        return $this;
    }

    /**
     * Gets weatherScore.
     *
     * @return int|null
     */
    public function getWeatherScore()
    {
        return $this->weatherScore;
    }

    /**
     * Sets weatherScore.
     *
     * @param int|null $weatherScore
     *
     * @return $this
     */
    public function setWeatherScore($weatherScore = null)
    {
        $this->weatherScore = $weatherScore;

        return $this;
    }

    /**
     * Gets estimatedDurationInMillis.
     *
     * @return int|null
     */
    public function getEstimatedDurationInMillis()
    {
        return $this->estimatedDurationInMillis;
    }

    /**
     * Sets estimatedDurationInMillis.
     *
     * @param int|null $estimatedDurationInMillis
     *
     * @return $this
     */
    public function setEstimatedDurationInMillis($estimatedDurationInMillis = null)
    {
        $this->estimatedDurationInMillis = $estimatedDurationInMillis;

        return $this;
    }

    /**
     * Gets latestRun.
     *
     * @return OpenAPI\Server\Model\PipelinelatestRun|null
     */
    public function getLatestRun()
    {
        return $this->latestRun;
    }

    /**
     * Sets latestRun.
     *
     * @param OpenAPI\Server\Model\PipelinelatestRun|null $latestRun
     *
     * @return $this
     */
    public function setLatestRun(PipelinelatestRun $latestRun = null)
    {
        $this->latestRun = $latestRun;

        return $this;
    }
}


