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

# Unit tests for SwaggyJenkinsClient::GithubOrganizationlinks
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'GithubOrganizationlinks' do
  before do
    # run before each test
    @instance = SwaggyJenkinsClient::GithubOrganizationlinks.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of GithubOrganizationlinks' do
    it 'should create an instance of GithubOrganizationlinks' do
      expect(@instance).to be_instance_of(SwaggyJenkinsClient::GithubOrganizationlinks)
    end
  end
  describe 'test attribute "repositories"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "_self"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "_class"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
