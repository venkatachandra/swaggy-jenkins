--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- github_repository class
local github_repository = {}
local github_repository_mt = {
	__name = "github_repository";
	__index = github_repository;
}

local function cast_github_repository(t)
	return setmetatable(t, github_repository_mt)
end

local function new_github_repository(_class, _links, default_branch, description, name, permissions, private, full_name)
	return cast_github_repository({
		["_class"] = _class;
		["_links"] = _links;
		["defaultBranch"] = default_branch;
		["description"] = description;
		["name"] = name;
		["permissions"] = permissions;
		["private"] = private;
		["fullName"] = full_name;
	})
end

return {
	cast = cast_github_repository;
	new = new_github_repository;
}
