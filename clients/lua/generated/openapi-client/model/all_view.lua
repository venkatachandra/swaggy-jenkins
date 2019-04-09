--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- all_view class
local all_view = {}
local all_view_mt = {
	__name = "all_view";
	__index = all_view;
}

local function cast_all_view(t)
	return setmetatable(t, all_view_mt)
end

local function new_all_view(_class, name, url)
	return cast_all_view({
		["_class"] = _class;
		["name"] = name;
		["url"] = url;
	})
end

return {
	cast = cast_all_view;
	new = new_all_view;
}
