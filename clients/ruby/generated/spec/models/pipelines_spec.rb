=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.1
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.2.1-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggyJenkinsClient::Pipelines
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'Pipelines' do
  before do
    # run before each test
    @instance = SwaggyJenkinsClient::Pipelines.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of Pipelines' do
    it 'should create an instance of Pipelines' do
      expect(@instance).to be_instance_of(SwaggyJenkinsClient::Pipelines)
    end
  end
end
