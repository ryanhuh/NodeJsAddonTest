const addon = require('./build/Release/HelloWorld');

const runAddon = () => addon.AddonFunction("Arg 1","Arg 2","Arg 3");

runAddon();