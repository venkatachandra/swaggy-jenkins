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
class HUDSON_MASTER_COMPUTERMONITOR_DATA 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    hudson_node_monitors__swap_space_monitor: detachable SWAP_SPACE_MONITOR_MEMORY_USAGE2 
      
    hudson_node_monitors__temporary_space_monitor: detachable DISK_SPACE_MONITOR_DESCRIPTOR_DISK_SPACE 
      
    hudson_node_monitors__disk_space_monitor: detachable DISK_SPACE_MONITOR_DESCRIPTOR_DISK_SPACE 
      
    hudson_node_monitors__architecture_monitor: detachable STRING_32 
      
    hudson_node_monitors__response_time_monitor: detachable RESPONSE_TIME_MONITOR_DATA 
      
    hudson_node_monitors__clock_monitor: detachable CLOCK_DIFFERENCE 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_hudson_node_monitors__swap_space_monitor (a_name: like hudson_node_monitors__swap_space_monitor)
        -- Set 'hudson_node_monitors__swap_space_monitor' with 'a_name'.
      do
        hudson_node_monitors__swap_space_monitor := a_name
      ensure
        hudson_node_monitors__swap_space_monitor_set: hudson_node_monitors__swap_space_monitor = a_name		
      end

    set_hudson_node_monitors__temporary_space_monitor (a_name: like hudson_node_monitors__temporary_space_monitor)
        -- Set 'hudson_node_monitors__temporary_space_monitor' with 'a_name'.
      do
        hudson_node_monitors__temporary_space_monitor := a_name
      ensure
        hudson_node_monitors__temporary_space_monitor_set: hudson_node_monitors__temporary_space_monitor = a_name		
      end

    set_hudson_node_monitors__disk_space_monitor (a_name: like hudson_node_monitors__disk_space_monitor)
        -- Set 'hudson_node_monitors__disk_space_monitor' with 'a_name'.
      do
        hudson_node_monitors__disk_space_monitor := a_name
      ensure
        hudson_node_monitors__disk_space_monitor_set: hudson_node_monitors__disk_space_monitor = a_name		
      end

    set_hudson_node_monitors__architecture_monitor (a_name: like hudson_node_monitors__architecture_monitor)
        -- Set 'hudson_node_monitors__architecture_monitor' with 'a_name'.
      do
        hudson_node_monitors__architecture_monitor := a_name
      ensure
        hudson_node_monitors__architecture_monitor_set: hudson_node_monitors__architecture_monitor = a_name		
      end

    set_hudson_node_monitors__response_time_monitor (a_name: like hudson_node_monitors__response_time_monitor)
        -- Set 'hudson_node_monitors__response_time_monitor' with 'a_name'.
      do
        hudson_node_monitors__response_time_monitor := a_name
      ensure
        hudson_node_monitors__response_time_monitor_set: hudson_node_monitors__response_time_monitor = a_name		
      end

    set_hudson_node_monitors__clock_monitor (a_name: like hudson_node_monitors__clock_monitor)
        -- Set 'hudson_node_monitors__clock_monitor' with 'a_name'.
      do
        hudson_node_monitors__clock_monitor := a_name
      ensure
        hudson_node_monitors__clock_monitor_set: hudson_node_monitors__clock_monitor = a_name		
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
        Result.append("%Nclass HUDSON_MASTER_COMPUTERMONITOR_DATA%N")
        if attached hudson_node_monitors__swap_space_monitor as l_hudson_node_monitors__swap_space_monitor then
          Result.append ("%Nhudson_node_monitors__swap_space_monitor:")
          Result.append (l_hudson_node_monitors__swap_space_monitor.out)
          Result.append ("%N")    
        end  
        if attached hudson_node_monitors__temporary_space_monitor as l_hudson_node_monitors__temporary_space_monitor then
          Result.append ("%Nhudson_node_monitors__temporary_space_monitor:")
          Result.append (l_hudson_node_monitors__temporary_space_monitor.out)
          Result.append ("%N")    
        end  
        if attached hudson_node_monitors__disk_space_monitor as l_hudson_node_monitors__disk_space_monitor then
          Result.append ("%Nhudson_node_monitors__disk_space_monitor:")
          Result.append (l_hudson_node_monitors__disk_space_monitor.out)
          Result.append ("%N")    
        end  
        if attached hudson_node_monitors__architecture_monitor as l_hudson_node_monitors__architecture_monitor then
          Result.append ("%Nhudson_node_monitors__architecture_monitor:")
          Result.append (l_hudson_node_monitors__architecture_monitor.out)
          Result.append ("%N")    
        end  
        if attached hudson_node_monitors__response_time_monitor as l_hudson_node_monitors__response_time_monitor then
          Result.append ("%Nhudson_node_monitors__response_time_monitor:")
          Result.append (l_hudson_node_monitors__response_time_monitor.out)
          Result.append ("%N")    
        end  
        if attached hudson_node_monitors__clock_monitor as l_hudson_node_monitors__clock_monitor then
          Result.append ("%Nhudson_node_monitors__clock_monitor:")
          Result.append (l_hudson_node_monitors__clock_monitor.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end


