note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 0.1.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by the swagger code generator program.

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel swagger codegen", "src=https://github.com/swagger-api/swagger-codegen.git", "protocol=uri"

class
	API_SERIALIZER


feature -- Access

	serializer (f: FUNCTION [TUPLE [content_type:STRING; type:ANY],STRING]; a_content_type: STRING; a_type: ANY): STRING
			-- Serialize an object of type `a_type' using the content type `a_content_type'.
		do
			Result := f.item ([a_content_type, a_type])
		end
end