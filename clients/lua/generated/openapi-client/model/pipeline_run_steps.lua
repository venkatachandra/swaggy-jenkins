--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pipeline_run_steps class
local pipeline_run_steps = {}
local pipeline_run_steps_mt = {
	__name = "pipeline_run_steps";
	__index = pipeline_run_steps;
}

local function cast_pipeline_run_steps(t)
	return setmetatable(t, pipeline_run_steps_mt)
end

local function new_pipeline_run_steps()
	return cast_pipeline_run_steps({
	})
end

return {
	cast = cast_pipeline_run_steps;
	new = new_pipeline_run_steps;
}