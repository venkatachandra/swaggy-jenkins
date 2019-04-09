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
class PIPELINE_BRANCHESITEMLATEST_RUN 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    duration_in_millis: INTEGER_32 
      
    estimated_duration_in_millis: INTEGER_32 
      
    en_queue_time: detachable STRING_32 
      
    end_time: detachable STRING_32 
      
    id: detachable STRING_32 
      
    organization: detachable STRING_32 
      
    pipeline: detachable STRING_32 
      
    var_result: detachable STRING_32 
      
    run_summary: detachable STRING_32 
      
    start_time: detachable STRING_32 
      
    state: detachable STRING_32 
      
    type: detachable STRING_32 
      
    commit_id: detachable STRING_32 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_duration_in_millis (a_name: like duration_in_millis)
        -- Set 'duration_in_millis' with 'a_name'.
      do
        duration_in_millis := a_name
      ensure
        duration_in_millis_set: duration_in_millis = a_name		
      end

    set_estimated_duration_in_millis (a_name: like estimated_duration_in_millis)
        -- Set 'estimated_duration_in_millis' with 'a_name'.
      do
        estimated_duration_in_millis := a_name
      ensure
        estimated_duration_in_millis_set: estimated_duration_in_millis = a_name		
      end

    set_en_queue_time (a_name: like en_queue_time)
        -- Set 'en_queue_time' with 'a_name'.
      do
        en_queue_time := a_name
      ensure
        en_queue_time_set: en_queue_time = a_name		
      end

    set_end_time (a_name: like end_time)
        -- Set 'end_time' with 'a_name'.
      do
        end_time := a_name
      ensure
        end_time_set: end_time = a_name		
      end

    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_organization (a_name: like organization)
        -- Set 'organization' with 'a_name'.
      do
        organization := a_name
      ensure
        organization_set: organization = a_name		
      end

    set_pipeline (a_name: like pipeline)
        -- Set 'pipeline' with 'a_name'.
      do
        pipeline := a_name
      ensure
        pipeline_set: pipeline = a_name		
      end

    set_var_result (a_name: like var_result)
        -- Set 'var_result' with 'a_name'.
      do
        var_result := a_name
      ensure
        var_result_set: var_result = a_name		
      end

    set_run_summary (a_name: like run_summary)
        -- Set 'run_summary' with 'a_name'.
      do
        run_summary := a_name
      ensure
        run_summary_set: run_summary = a_name		
      end

    set_start_time (a_name: like start_time)
        -- Set 'start_time' with 'a_name'.
      do
        start_time := a_name
      ensure
        start_time_set: start_time = a_name		
      end

    set_state (a_name: like state)
        -- Set 'state' with 'a_name'.
      do
        state := a_name
      ensure
        state_set: state = a_name		
      end

    set_type (a_name: like type)
        -- Set 'type' with 'a_name'.
      do
        type := a_name
      ensure
        type_set: type = a_name		
      end

    set_commit_id (a_name: like commit_id)
        -- Set 'commit_id' with 'a_name'.
      do
        commit_id := a_name
      ensure
        commit_id_set: commit_id = a_name		
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
        Result.append("%Nclass PIPELINE_BRANCHESITEMLATEST_RUN%N")
        if attached duration_in_millis as l_duration_in_millis then
          Result.append ("%Nduration_in_millis:")
          Result.append (l_duration_in_millis.out)
          Result.append ("%N")    
        end  
        if attached estimated_duration_in_millis as l_estimated_duration_in_millis then
          Result.append ("%Nestimated_duration_in_millis:")
          Result.append (l_estimated_duration_in_millis.out)
          Result.append ("%N")    
        end  
        if attached en_queue_time as l_en_queue_time then
          Result.append ("%Nen_queue_time:")
          Result.append (l_en_queue_time.out)
          Result.append ("%N")    
        end  
        if attached end_time as l_end_time then
          Result.append ("%Nend_time:")
          Result.append (l_end_time.out)
          Result.append ("%N")    
        end  
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached organization as l_organization then
          Result.append ("%Norganization:")
          Result.append (l_organization.out)
          Result.append ("%N")    
        end  
        if attached pipeline as l_pipeline then
          Result.append ("%Npipeline:")
          Result.append (l_pipeline.out)
          Result.append ("%N")    
        end  
        if attached var_result as l_var_result then
          Result.append ("%Nvar_result:")
          Result.append (l_var_result.out)
          Result.append ("%N")    
        end  
        if attached run_summary as l_run_summary then
          Result.append ("%Nrun_summary:")
          Result.append (l_run_summary.out)
          Result.append ("%N")    
        end  
        if attached start_time as l_start_time then
          Result.append ("%Nstart_time:")
          Result.append (l_start_time.out)
          Result.append ("%N")    
        end  
        if attached state as l_state then
          Result.append ("%Nstate:")
          Result.append (l_state.out)
          Result.append ("%N")    
        end  
        if attached type as l_type then
          Result.append ("%Ntype:")
          Result.append (l_type.out)
          Result.append ("%N")    
        end  
        if attached commit_id as l_commit_id then
          Result.append ("%Ncommit_id:")
          Result.append (l_commit_id.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end


