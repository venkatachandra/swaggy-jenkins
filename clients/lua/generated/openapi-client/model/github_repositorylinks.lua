--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- github_repositorylinks class
local github_repositorylinks = {}
local github_repositorylinks_mt = {
	__name = "github_repositorylinks";
	__index = github_repositorylinks;
}

local function cast_github_repositorylinks(t)
	return setmetatable(t, github_repositorylinks_mt)
end

local function new_github_repositorylinks(self, _class)
	return cast_github_repositorylinks({
		["self"] = self;
		["_class"] = _class;
	})
end

return {
	cast = cast_github_repositorylinks;
	new = new_github_repositorylinks;
}
