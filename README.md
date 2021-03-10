# Elm Counter Example in Reason React Native

- the canonical elm [counter](https://elm-lang.org/examples/buttons) example implemented as a mobile app in reason (reasonml/bucklescript/rescript)
- backend in kotlin with http4k
- acceptance tests in [Detox](https://github.com/wix/Detox)
- following The Elm Architecture (TEA) - [Model](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Types.re) -> 
[Update](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Update.re) ->
[View](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Views.re) 


### running the app

in three separate terminals:
1. start the server `cd server && ./run.sh`
1. start the front end `cd app && ./refreshAndRestart.sh`
1. start the iOS Simulator `cd app && ./runSimulatorIOS.sh`

### running the tests

1. `cd app && detox test`
1. That's it!
