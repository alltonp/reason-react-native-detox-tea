### detox

TL;DR of [installation guide](https://github.com/wix/Detox/blob/master/docs/Introduction.GettingStarted.md)

- `npm install -g detox-cli` and `npm install detox --save-dev` to install detox

- `brew tap wix/brew` and `brew install applesimutils` to install the ios stuff required for detox (note: I didn't do the Android stuff, see: https://github.com/wix/Detox/blob/master/docs/Introduction.GettingStarted.md) ... actually, I think this bit is optional 

- `npm install jest jest-cli jest-circus --save-dev --no-package-lock` and `detox init -r jest` to setup jest for detox

- `detox build --configuration=ios` and `detox test --configuration=ios` to run tests or `detox test` if you have say only ios config

- you will need to edit the .detoxrc.json with a hard coded string you can find the required string you need by doing `find ~ -name "MyApp.app"`
  - e.g. "/Users/xxx/Library/Developer/Xcode/DerivedData/MyApp-qwertyuiopasdfghjklzxcvbnm/Build/Products/Debug-iphonesimulator/MyApp.app"

- a good article that explains it all and examples of tests etc: https://www.sitepoint.com/detox-react-native-testing-automation/ 
