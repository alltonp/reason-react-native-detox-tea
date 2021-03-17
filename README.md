# Elm Counter Example in Reason React Native

### What?
- the elm [counter](https://elm-lang.org/examples/buttons) example implemented as a mobile app in reason (reasonml/bucklescript/rescript)
- backend in kotlin with http4k
- acceptance tests in [Detox](https://github.com/wix/Detox)

### How?
- following The Elm Architecture (TEA) as closely as possible, we have Reason equivalents of [Model](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Types.re), [Update](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Update.re) and [View](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Views.re) 
- and this is how we [acceptance test](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/e2e/firstTest.re) it

### running the app

in three separate terminals:
1. start the server `cd server && ./run.sh`
1. start the front end `cd app && ./refreshAndRestart.sh`
1. start the iOS Simulator `cd app && ./runSimulatorIOS.sh`

### running the tests

1. `cd app && detox test`
1. That's it!
