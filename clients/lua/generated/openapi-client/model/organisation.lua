--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- organisation class
local organisation = {}
local organisation_mt = {
	__name = "organisation";
	__index = organisation;
}

local function cast_organisation(t)
	return setmetatable(t, organisation_mt)
end

local function new_organisation(_class, name)
	return cast_organisation({
		["_class"] = _class;
		["name"] = name;
	})
end

return {
	cast = cast_organisation;
	new = new_organisation;
}
