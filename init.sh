#!/usr/bin/env bash
set -e

leave_no_trace () {
   rm -rf templates/
   rm -- "${0}"
}

install_reason_react_native () {
  yarn global add react-native-cli
  npx @react-native-community/cli init --template @reason-react-native/template ReasonteaApp
  mv ReasonteaApp app
  cp templates/reason_react_native/*.sh app/
  cp -R templates/reason_react_native/src/* app/src/
}

install_dependencies () {
  cd app

  #bs-fetch
  yarn add bs-fetch
  export src='"bs-dependencies": \['
  export replacement=' "bs-dependencies": \["bs-fetch", '
  sed -i ''  "s/$src/$replacement/"  ./bsconfig.json

  #reason-react-update
  yarn add reason-react-update
  export src='"bs-dependencies": \['
  export replacement=' "bs-dependencies": \["reason-react-update", '
  sed -i ''  "s/$src/$replacement/"  ./bsconfig.json

  cd ios
  pod install
  cd ..
  cd ..
}

install_reason_react_native
install_dependencies

leave_no_trace

echo "# All Done"
