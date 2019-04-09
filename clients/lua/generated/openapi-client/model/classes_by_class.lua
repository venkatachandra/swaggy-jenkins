--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- classes_by_class class
local classes_by_class = {}
local classes_by_class_mt = {
	__name = "classes_by_class";
	__index = classes_by_class;
}

local function cast_classes_by_class(t)
	return setmetatable(t, classes_by_class_mt)
end

local function new_classes_by_class(classes, _class)
	return cast_classes_by_class({
		["classes"] = classes;
		["_class"] = _class;
	})
end

return {
	cast = cast_classes_by_class;
	new = new_classes_by_class;
}
