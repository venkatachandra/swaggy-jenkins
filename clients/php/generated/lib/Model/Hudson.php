<?php
/**
 * Hudson
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * Hudson Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class Hudson implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'Hudson';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        '_class' => 'string',
        'assigned_labels' => '\OpenAPI\Client\Model\HudsonassignedLabels[]',
        'mode' => 'string',
        'node_description' => 'string',
        'node_name' => 'string',
        'num_executors' => 'int',
        'description' => 'string',
        'jobs' => '\OpenAPI\Client\Model\FreeStyleProject[]',
        'primary_view' => '\OpenAPI\Client\Model\AllView',
        'quieting_down' => 'bool',
        'slave_agent_port' => 'int',
        'unlabeled_load' => '\OpenAPI\Client\Model\UnlabeledLoadStatistics',
        'use_crumbs' => 'bool',
        'use_security' => 'bool',
        'views' => '\OpenAPI\Client\Model\AllView[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        '_class' => null,
        'assigned_labels' => null,
        'mode' => null,
        'node_description' => null,
        'node_name' => null,
        'num_executors' => 'int32',
        'description' => null,
        'jobs' => null,
        'primary_view' => null,
        'quieting_down' => null,
        'slave_agent_port' => 'int32',
        'unlabeled_load' => null,
        'use_crumbs' => null,
        'use_security' => null,
        'views' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        '_class' => '_class',
        'assigned_labels' => 'assignedLabels',
        'mode' => 'mode',
        'node_description' => 'nodeDescription',
        'node_name' => 'nodeName',
        'num_executors' => 'numExecutors',
        'description' => 'description',
        'jobs' => 'jobs',
        'primary_view' => 'primaryView',
        'quieting_down' => 'quietingDown',
        'slave_agent_port' => 'slaveAgentPort',
        'unlabeled_load' => 'unlabeledLoad',
        'use_crumbs' => 'useCrumbs',
        'use_security' => 'useSecurity',
        'views' => 'views'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        '_class' => 'setClass',
        'assigned_labels' => 'setAssignedLabels',
        'mode' => 'setMode',
        'node_description' => 'setNodeDescription',
        'node_name' => 'setNodeName',
        'num_executors' => 'setNumExecutors',
        'description' => 'setDescription',
        'jobs' => 'setJobs',
        'primary_view' => 'setPrimaryView',
        'quieting_down' => 'setQuietingDown',
        'slave_agent_port' => 'setSlaveAgentPort',
        'unlabeled_load' => 'setUnlabeledLoad',
        'use_crumbs' => 'setUseCrumbs',
        'use_security' => 'setUseSecurity',
        'views' => 'setViews'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        '_class' => 'getClass',
        'assigned_labels' => 'getAssignedLabels',
        'mode' => 'getMode',
        'node_description' => 'getNodeDescription',
        'node_name' => 'getNodeName',
        'num_executors' => 'getNumExecutors',
        'description' => 'getDescription',
        'jobs' => 'getJobs',
        'primary_view' => 'getPrimaryView',
        'quieting_down' => 'getQuietingDown',
        'slave_agent_port' => 'getSlaveAgentPort',
        'unlabeled_load' => 'getUnlabeledLoad',
        'use_crumbs' => 'getUseCrumbs',
        'use_security' => 'getUseSecurity',
        'views' => 'getViews'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
        $this->container['assigned_labels'] = isset($data['assigned_labels']) ? $data['assigned_labels'] : null;
        $this->container['mode'] = isset($data['mode']) ? $data['mode'] : null;
        $this->container['node_description'] = isset($data['node_description']) ? $data['node_description'] : null;
        $this->container['node_name'] = isset($data['node_name']) ? $data['node_name'] : null;
        $this->container['num_executors'] = isset($data['num_executors']) ? $data['num_executors'] : null;
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['jobs'] = isset($data['jobs']) ? $data['jobs'] : null;
        $this->container['primary_view'] = isset($data['primary_view']) ? $data['primary_view'] : null;
        $this->container['quieting_down'] = isset($data['quieting_down']) ? $data['quieting_down'] : null;
        $this->container['slave_agent_port'] = isset($data['slave_agent_port']) ? $data['slave_agent_port'] : null;
        $this->container['unlabeled_load'] = isset($data['unlabeled_load']) ? $data['unlabeled_load'] : null;
        $this->container['use_crumbs'] = isset($data['use_crumbs']) ? $data['use_crumbs'] : null;
        $this->container['use_security'] = isset($data['use_security']) ? $data['use_security'] : null;
        $this->container['views'] = isset($data['views']) ? $data['views'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets _class
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->container['_class'];
    }

    /**
     * Sets _class
     *
     * @param string|null $_class _class
     *
     * @return $this
     */
    public function setClass($_class)
    {
        $this->container['_class'] = $_class;

        return $this;
    }

    /**
     * Gets assigned_labels
     *
     * @return \OpenAPI\Client\Model\HudsonassignedLabels[]|null
     */
    public function getAssignedLabels()
    {
        return $this->container['assigned_labels'];
    }

    /**
     * Sets assigned_labels
     *
     * @param \OpenAPI\Client\Model\HudsonassignedLabels[]|null $assigned_labels assigned_labels
     *
     * @return $this
     */
    public function setAssignedLabels($assigned_labels)
    {
        $this->container['assigned_labels'] = $assigned_labels;

        return $this;
    }

    /**
     * Gets mode
     *
     * @return string|null
     */
    public function getMode()
    {
        return $this->container['mode'];
    }

    /**
     * Sets mode
     *
     * @param string|null $mode mode
     *
     * @return $this
     */
    public function setMode($mode)
    {
        $this->container['mode'] = $mode;

        return $this;
    }

    /**
     * Gets node_description
     *
     * @return string|null
     */
    public function getNodeDescription()
    {
        return $this->container['node_description'];
    }

    /**
     * Sets node_description
     *
     * @param string|null $node_description node_description
     *
     * @return $this
     */
    public function setNodeDescription($node_description)
    {
        $this->container['node_description'] = $node_description;

        return $this;
    }

    /**
     * Gets node_name
     *
     * @return string|null
     */
    public function getNodeName()
    {
        return $this->container['node_name'];
    }

    /**
     * Sets node_name
     *
     * @param string|null $node_name node_name
     *
     * @return $this
     */
    public function setNodeName($node_name)
    {
        $this->container['node_name'] = $node_name;

        return $this;
    }

    /**
     * Gets num_executors
     *
     * @return int|null
     */
    public function getNumExecutors()
    {
        return $this->container['num_executors'];
    }

    /**
     * Sets num_executors
     *
     * @param int|null $num_executors num_executors
     *
     * @return $this
     */
    public function setNumExecutors($num_executors)
    {
        $this->container['num_executors'] = $num_executors;

        return $this;
    }

    /**
     * Gets description
     *
     * @return string|null
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     *
     * @param string|null $description description
     *
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets jobs
     *
     * @return \OpenAPI\Client\Model\FreeStyleProject[]|null
     */
    public function getJobs()
    {
        return $this->container['jobs'];
    }

    /**
     * Sets jobs
     *
     * @param \OpenAPI\Client\Model\FreeStyleProject[]|null $jobs jobs
     *
     * @return $this
     */
    public function setJobs($jobs)
    {
        $this->container['jobs'] = $jobs;

        return $this;
    }

    /**
     * Gets primary_view
     *
     * @return \OpenAPI\Client\Model\AllView|null
     */
    public function getPrimaryView()
    {
        return $this->container['primary_view'];
    }

    /**
     * Sets primary_view
     *
     * @param \OpenAPI\Client\Model\AllView|null $primary_view primary_view
     *
     * @return $this
     */
    public function setPrimaryView($primary_view)
    {
        $this->container['primary_view'] = $primary_view;

        return $this;
    }

    /**
     * Gets quieting_down
     *
     * @return bool|null
     */
    public function getQuietingDown()
    {
        return $this->container['quieting_down'];
    }

    /**
     * Sets quieting_down
     *
     * @param bool|null $quieting_down quieting_down
     *
     * @return $this
     */
    public function setQuietingDown($quieting_down)
    {
        $this->container['quieting_down'] = $quieting_down;

        return $this;
    }

    /**
     * Gets slave_agent_port
     *
     * @return int|null
     */
    public function getSlaveAgentPort()
    {
        return $this->container['slave_agent_port'];
    }

    /**
     * Sets slave_agent_port
     *
     * @param int|null $slave_agent_port slave_agent_port
     *
     * @return $this
     */
    public function setSlaveAgentPort($slave_agent_port)
    {
        $this->container['slave_agent_port'] = $slave_agent_port;

        return $this;
    }

    /**
     * Gets unlabeled_load
     *
     * @return \OpenAPI\Client\Model\UnlabeledLoadStatistics|null
     */
    public function getUnlabeledLoad()
    {
        return $this->container['unlabeled_load'];
    }

    /**
     * Sets unlabeled_load
     *
     * @param \OpenAPI\Client\Model\UnlabeledLoadStatistics|null $unlabeled_load unlabeled_load
     *
     * @return $this
     */
    public function setUnlabeledLoad($unlabeled_load)
    {
        $this->container['unlabeled_load'] = $unlabeled_load;

        return $this;
    }

    /**
     * Gets use_crumbs
     *
     * @return bool|null
     */
    public function getUseCrumbs()
    {
        return $this->container['use_crumbs'];
    }

    /**
     * Sets use_crumbs
     *
     * @param bool|null $use_crumbs use_crumbs
     *
     * @return $this
     */
    public function setUseCrumbs($use_crumbs)
    {
        $this->container['use_crumbs'] = $use_crumbs;

        return $this;
    }

    /**
     * Gets use_security
     *
     * @return bool|null
     */
    public function getUseSecurity()
    {
        return $this->container['use_security'];
    }

    /**
     * Sets use_security
     *
     * @param bool|null $use_security use_security
     *
     * @return $this
     */
    public function setUseSecurity($use_security)
    {
        $this->container['use_security'] = $use_security;

        return $this;
    }

    /**
     * Gets views
     *
     * @return \OpenAPI\Client\Model\AllView[]|null
     */
    public function getViews()
    {
        return $this->container['views'];
    }

    /**
     * Sets views
     *
     * @param \OpenAPI\Client\Model\AllView[]|null $views views
     *
     * @return $this
     */
    public function setViews($views)
    {
        $this->container['views'] = $views;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


