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
class PIPELINE_ACTIVITYARTIFACTS 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable STRING_32 
      
    size: INTEGER_32 
      
    url: detachable STRING_32 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_size (a_name: like size)
        -- Set 'size' with 'a_name'.
      do
        size := a_name
      ensure
        size_set: size = a_name		
      end

    set_url (a_name: like url)
        -- Set 'url' with 'a_name'.
      do
        url := a_name
      ensure
        url_set: url = a_name		
      end

    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass PIPELINE_ACTIVITYARTIFACTS%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached size as l_size then
          Result.append ("%Nsize:")
          Result.append (l_size.out)
          Result.append ("%N")    
        end  
        if attached url as l_url then
          Result.append ("%Nurl:")
          Result.append (l_url.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end


