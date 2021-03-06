# Elm Counter Example in Reason React Native

### what?
- the elm [counter](https://elm-lang.org/examples/buttons) example implemented as a mobile app in reason (reasonml/bucklescript/rescript)
- backend in kotlin with http4k
- acceptance tests in [Detox](https://github.com/wix/Detox)

### how?
- the [App](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/App.re) follows The Elm Architecture (TEA) as closely as possible, with Reason equivalents of [Model](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Types.re), [Update](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Update.re) and [View](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/src/Views.re) 
- and this is how we [acceptance test](https://github.com/alltonp/reason-react-native-detox-tea/blob/main/app/e2e/firstTest.re) it

### running the app

prerequisites
- Xcode 12.4 or higher

in three separate terminals:
1. start the backend server
    - `cd server && ./run.sh`
2. start the front end server
    - `cd app && ./refreshAndRestart.sh`
3. start the iOS Simulator
    - (first time only) `cd app/ios && pod install`
    - `cd app && ./runSimulatorIOS.sh`

### running the tests

1. `cd app && detox test`
1. That's it!

![app.png](app.png)

