--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.1.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pipeline_runs class
local pipeline_runs = {}
local pipeline_runs_mt = {
	__name = "pipeline_runs";
	__index = pipeline_runs;
}

local function cast_pipeline_runs(t)
	return setmetatable(t, pipeline_runs_mt)
end

local function new_pipeline_runs()
	return cast_pipeline_runs({
	})
end

return {
	cast = cast_pipeline_runs;
	new = new_pipeline_runs;
}
