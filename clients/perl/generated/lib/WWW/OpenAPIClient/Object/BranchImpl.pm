=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.1.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::BranchImpl;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::BranchImpllinks;
use WWW::OpenAPIClient::Object::BranchImplpermissions;
use WWW::OpenAPIClient::Object::PipelineRunImpl;
use WWW::OpenAPIClient::Object::StringParameterDefinition;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.1.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'BranchImpl',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    '_class' => {
    	datatype => 'string',
    	base_name => '_class',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'display_name' => {
    	datatype => 'string',
    	base_name => 'displayName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'estimated_duration_in_millis' => {
    	datatype => 'int',
    	base_name => 'estimatedDurationInMillis',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'full_display_name' => {
    	datatype => 'string',
    	base_name => 'fullDisplayName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'full_name' => {
    	datatype => 'string',
    	base_name => 'fullName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'name' => {
    	datatype => 'string',
    	base_name => 'name',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'organization' => {
    	datatype => 'string',
    	base_name => 'organization',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'parameters' => {
    	datatype => 'ARRAY[StringParameterDefinition]',
    	base_name => 'parameters',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'permissions' => {
    	datatype => 'BranchImplpermissions',
    	base_name => 'permissions',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'weather_score' => {
    	datatype => 'int',
    	base_name => 'weatherScore',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'pull_request' => {
    	datatype => 'string',
    	base_name => 'pullRequest',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    '_links' => {
    	datatype => 'BranchImpllinks',
    	base_name => '_links',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'latest_run' => {
    	datatype => 'PipelineRunImpl',
    	base_name => 'latestRun',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    '_class' => 'string',
    'display_name' => 'string',
    'estimated_duration_in_millis' => 'int',
    'full_display_name' => 'string',
    'full_name' => 'string',
    'name' => 'string',
    'organization' => 'string',
    'parameters' => 'ARRAY[StringParameterDefinition]',
    'permissions' => 'BranchImplpermissions',
    'weather_score' => 'int',
    'pull_request' => 'string',
    '_links' => 'BranchImpllinks',
    'latest_run' => 'PipelineRunImpl'
} );

__PACKAGE__->attribute_map( {
    '_class' => '_class',
    'display_name' => 'displayName',
    'estimated_duration_in_millis' => 'estimatedDurationInMillis',
    'full_display_name' => 'fullDisplayName',
    'full_name' => 'fullName',
    'name' => 'name',
    'organization' => 'organization',
    'parameters' => 'parameters',
    'permissions' => 'permissions',
    'weather_score' => 'weatherScore',
    'pull_request' => 'pullRequest',
    '_links' => '_links',
    'latest_run' => 'latestRun'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
