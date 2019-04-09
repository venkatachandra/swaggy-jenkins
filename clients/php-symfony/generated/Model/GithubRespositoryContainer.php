<?php
/**
 * GithubRespositoryContainer
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
 * Class representing the GithubRespositoryContainer model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class GithubRespositoryContainer 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var OpenAPI\Server\Model\GithubRespositoryContainerlinks|null
     * @SerializedName("_links")
     * @Assert\Type("OpenAPI\Server\Model\GithubRespositoryContainerlinks")
     * @Type("OpenAPI\Server\Model\GithubRespositoryContainerlinks")
     */
    protected $links;

    /**
     * @var OpenAPI\Server\Model\GithubRepositories|null
     * @SerializedName("repositories")
     * @Assert\Type("OpenAPI\Server\Model\GithubRepositories")
     * @Type("OpenAPI\Server\Model\GithubRepositories")
     */
    protected $repositories;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->links = isset($data['links']) ? $data['links'] : null;
        $this->repositories = isset($data['repositories']) ? $data['repositories'] : null;
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
     * Gets links.
     *
     * @return OpenAPI\Server\Model\GithubRespositoryContainerlinks|null
     */
    public function getLinks()
    {
        return $this->links;
    }

    /**
     * Sets links.
     *
     * @param OpenAPI\Server\Model\GithubRespositoryContainerlinks|null $links
     *
     * @return $this
     */
    public function setLinks(GithubRespositoryContainerlinks $links = null)
    {
        $this->links = $links;

        return $this;
    }

    /**
     * Gets repositories.
     *
     * @return OpenAPI\Server\Model\GithubRepositories|null
     */
    public function getRepositories()
    {
        return $this->repositories;
    }

    /**
     * Sets repositories.
     *
     * @param OpenAPI\Server\Model\GithubRepositories|null $repositories
     *
     * @return $this
     */
    public function setRepositories(GithubRepositories $repositories = null)
    {
        $this->repositories = $repositories;

        return $this;
    }
}


