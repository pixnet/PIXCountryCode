# PIXCountryCode
用來搜尋國碼的 library

##安裝 - Installation#
強烈建議使用 [CocoaPods](http://cocoapods.org/) 搜尋並安裝`CountryCode`


###使用
請在安裝後在需要用到的 Class 中

```objective-c
#import "CountryCode.h"
```
    NSArray *result = [[CountryCode sharedInstance] searchCountryCodeWithKeyword:@"國家"];
