note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 1.1.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class EMPTY_CHANGE_LOG_SET 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    kind: detachable STRING_32 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_kind (a_name: like kind)
        -- Set 'kind' with 'a_name'.
      do
        kind := a_name
      ensure
        kind_set: kind = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass EMPTY_CHANGE_LOG_SET%N")
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached kind as l_kind then
          Result.append ("%Nkind:")
          Result.append (l_kind.out)
          Result.append ("%N")    
        end  
      end
end


