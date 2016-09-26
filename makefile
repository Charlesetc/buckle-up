
build: build-re convert-modules

build-re:
	./node_modules/bs-platform/bin/bsc.exe -pp refmt -impl src/main.re

convert-modules:
	node node_modules/.bin/r.js -convert src static
