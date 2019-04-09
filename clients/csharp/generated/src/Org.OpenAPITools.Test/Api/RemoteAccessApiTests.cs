/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.1
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing RemoteAccessApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class RemoteAccessApiTests
    {
        private RemoteAccessApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new RemoteAccessApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of RemoteAccessApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' RemoteAccessApi
            //Assert.IsInstanceOfType(typeof(RemoteAccessApi), instance, "instance is a RemoteAccessApi");
        }

        
        /// <summary>
        /// Test GetComputer
        /// </summary>
        [Test]
        public void GetComputerTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? depth = null;
            //var response = instance.GetComputer(depth);
            //Assert.IsInstanceOf<ComputerSet> (response, "response is ComputerSet");
        }
        
        /// <summary>
        /// Test GetCrumb
        /// </summary>
        [Test]
        public void GetCrumbTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.GetCrumb();
            //Assert.IsInstanceOf<DefaultCrumbIssuer> (response, "response is DefaultCrumbIssuer");
        }
        
        /// <summary>
        /// Test GetJenkins
        /// </summary>
        [Test]
        public void GetJenkinsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.GetJenkins();
            //Assert.IsInstanceOf<Hudson> (response, "response is Hudson");
        }
        
        /// <summary>
        /// Test GetJob
        /// </summary>
        [Test]
        public void GetJobTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //var response = instance.GetJob(name);
            //Assert.IsInstanceOf<FreeStyleProject> (response, "response is FreeStyleProject");
        }
        
        /// <summary>
        /// Test GetJobConfig
        /// </summary>
        [Test]
        public void GetJobConfigTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //var response = instance.GetJobConfig(name);
            //Assert.IsInstanceOf<string> (response, "response is string");
        }
        
        /// <summary>
        /// Test GetJobLastBuild
        /// </summary>
        [Test]
        public void GetJobLastBuildTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //var response = instance.GetJobLastBuild(name);
            //Assert.IsInstanceOf<FreeStyleBuild> (response, "response is FreeStyleBuild");
        }
        
        /// <summary>
        /// Test GetJobProgressiveText
        /// </summary>
        [Test]
        public void GetJobProgressiveTextTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string number = null;
            //string start = null;
            //instance.GetJobProgressiveText(name, number, start);
            
        }
        
        /// <summary>
        /// Test GetQueue
        /// </summary>
        [Test]
        public void GetQueueTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.GetQueue();
            //Assert.IsInstanceOf<Queue> (response, "response is Queue");
        }
        
        /// <summary>
        /// Test GetQueueItem
        /// </summary>
        [Test]
        public void GetQueueItemTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string number = null;
            //var response = instance.GetQueueItem(number);
            //Assert.IsInstanceOf<Queue> (response, "response is Queue");
        }
        
        /// <summary>
        /// Test GetView
        /// </summary>
        [Test]
        public void GetViewTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //var response = instance.GetView(name);
            //Assert.IsInstanceOf<ListView> (response, "response is ListView");
        }
        
        /// <summary>
        /// Test GetViewConfig
        /// </summary>
        [Test]
        public void GetViewConfigTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //var response = instance.GetViewConfig(name);
            //Assert.IsInstanceOf<string> (response, "response is string");
        }
        
        /// <summary>
        /// Test HeadJenkins
        /// </summary>
        [Test]
        public void HeadJenkinsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //instance.HeadJenkins();
            
        }
        
        /// <summary>
        /// Test PostCreateItem
        /// </summary>
        [Test]
        public void PostCreateItemTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string from = null;
            //string mode = null;
            //string jenkinsCrumb = null;
            //string contentType = null;
            //string body = null;
            //instance.PostCreateItem(name, from, mode, jenkinsCrumb, contentType, body);
            
        }
        
        /// <summary>
        /// Test PostCreateView
        /// </summary>
        [Test]
        public void PostCreateViewTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string jenkinsCrumb = null;
            //string contentType = null;
            //string body = null;
            //instance.PostCreateView(name, jenkinsCrumb, contentType, body);
            
        }
        
        /// <summary>
        /// Test PostJobBuild
        /// </summary>
        [Test]
        public void PostJobBuildTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string json = null;
            //string token = null;
            //string jenkinsCrumb = null;
            //instance.PostJobBuild(name, json, token, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostJobConfig
        /// </summary>
        [Test]
        public void PostJobConfigTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string body = null;
            //string jenkinsCrumb = null;
            //instance.PostJobConfig(name, body, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostJobDelete
        /// </summary>
        [Test]
        public void PostJobDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string jenkinsCrumb = null;
            //instance.PostJobDelete(name, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostJobDisable
        /// </summary>
        [Test]
        public void PostJobDisableTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string jenkinsCrumb = null;
            //instance.PostJobDisable(name, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostJobEnable
        /// </summary>
        [Test]
        public void PostJobEnableTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string jenkinsCrumb = null;
            //instance.PostJobEnable(name, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostJobLastBuildStop
        /// </summary>
        [Test]
        public void PostJobLastBuildStopTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string jenkinsCrumb = null;
            //instance.PostJobLastBuildStop(name, jenkinsCrumb);
            
        }
        
        /// <summary>
        /// Test PostViewConfig
        /// </summary>
        [Test]
        public void PostViewConfigTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string name = null;
            //string body = null;
            //string jenkinsCrumb = null;
            //instance.PostViewConfig(name, body, jenkinsCrumb);
            
        }
        
    }

}
