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
class DISK_SPACE_MONITOR_DESCRIPTOR_DISK_SPACE 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    timestamp: INTEGER_32 
      
    path: detachable STRING_32 
      
    size: INTEGER_32 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_timestamp (a_name: like timestamp)
        -- Set 'timestamp' with 'a_name'.
      do
        timestamp := a_name
      ensure
        timestamp_set: timestamp = a_name		
      end

    set_path (a_name: like path)
        -- Set 'path' with 'a_name'.
      do
        path := a_name
      ensure
        path_set: path = a_name		
      end

    set_size (a_name: like size)
        -- Set 'size' with 'a_name'.
      do
        size := a_name
      ensure
        size_set: size = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass DISK_SPACE_MONITOR_DESCRIPTOR_DISK_SPACE%N")
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached timestamp as l_timestamp then
          Result.append ("%Ntimestamp:")
          Result.append (l_timestamp.out)
          Result.append ("%N")    
        end  
        if attached path as l_path then
          Result.append ("%Npath:")
          Result.append (l_path.out)
          Result.append ("%N")    
        end  
        if attached size as l_size then
          Result.append ("%Nsize:")
          Result.append (l_size.out)
          Result.append ("%N")    
        end  
      end
end


