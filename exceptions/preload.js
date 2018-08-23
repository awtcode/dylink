//FS.createPreloadedFile('/', 'liblib.so', "http://localhost:8080/side.wasm", true, true);
var Module = {
    dynamicLibraries: ['side.wasm'],
  };

  // Module["readBinary"] = function readBinary(filename) {
  //   var ret = Module["read"](filename, true);
  //   if (!ret.buffer) {
  //    ret = new Uint8Array(ret);
  //   }
  //   assert(ret.buffer);
  //   return ret;
  //  };

var postTestMessage = function(message)  {
      console.log('msg:' + message);
  }

  Module.onRuntimeInitialized = () => {
    Module._start();
  }