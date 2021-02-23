[@bs.val] [@bs.module "react-native-fs"]
external documentDirectoryPath: string = "DocumentDirectoryPath";

[@bs.module "react-native-fs"]
external readFile: (~path: string) => Js.Promise.t(string) = "readFile";

[@bs.module "react-native-fs"]
external writeFile: (~path: string, ~contents: string) => Js.Promise.t(unit) =
  "writeFile";
