LANGS = ada ada-server android apache2 apex aspnetcore bash clojure cwiki cpp-qt5 cpp-qt5-qhttpengine-server cpp-pistache-server cpp-restbed-server cpp-restsdk cpp-tizen csharp csharp-dotnet2 csharp-nancyfx dart eiffel elixir elm erlang-client erlang-server flash scala-finch go go-server groovy kotlin kotlin-server haskell-http-client haskell java jaxrs-cxf-client java-inflector java-msf4j java-pkmst java-play-framework java-undertow-server java-vertx jaxrs-cxf jaxrs-cxf-cdi jaxrs-jersey jaxrs-resteasy jaxrs-resteasy-eap jaxrs-spec javascript javascript-flowtyped javascript-closure-angular jmeter lua nodejs-server objc openapi openapi-yaml perl php php-laravel php-lumen php-slim php-silex php-symfony php-ze-ph powershell python python-flask r ruby ruby-on-rails ruby-sinatra rust rust-server scalatra scala-akka scala-httpclient scala-gatling scala-lagom-server scalaz spring dynamic-html html html2 swift2-deprecated swift3 swift4 typescript-angular typescript-angularjs typescript-aurelia typescript-fetch typescript-inversify typescript-jquery typescript-node

ci: clean deps tools generate test-ci doc

clean:
	rm -rf clients/*/generated

deps:
	docker pull openapitools/openapi-generator-cli:v3.3.4

tools:
	npm install -g bootprint bootprint-openapi gh-pages mocha

generate:
	for lang in ${LANGS} ; do \
	  docker \
		  run \
		  --rm \
		  -v ${PWD}:/local openapitools/openapi-generator-cli \
		  generate \
		  --input-spec /local/spec/jenkins-api.yml \
			--config /local/clients/$$lang/conf.json \
		  --generator-name $$lang \
		  --output /local/clients/$$lang/generated; \
	done

test:
	cd clients/javascript/generated/ && npm link
	cd test/javascript/ && npm link swaggy-jenkins
	mocha --timeout 5000 test/javascript/

test-ci:
	sudo chown travis:travis -R clients/
	cd clients/javascript/generated/ && npm link
	cd test/javascript/ && npm link swaggy-jenkins
	mocha --timeout 10000 test/javascript/

doc:
	bootprint openapi spec/jenkins-api.yaml doc/api/latest/

doc-publish:
	gh-pages --dist doc/

.PHONY: clean deps tools generate test doc doc-publish
