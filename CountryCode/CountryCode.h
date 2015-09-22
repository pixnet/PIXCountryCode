//
//  CountryCode.h
//  CountryCode
//
//  Created by dennis on 2015/9/22.
//  Copyright © 2015年 dennis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CountryCode : NSObject
+ (CountryCode *)sharedInstance;
-(NSMutableArray *)searchCountryCodeWithKeyword:(NSString *)keyword;
@property(nonatomic, strong) NSMutableArray *resultArray;
@property(nonatomic, strong) NSDictionary *countryDictionary;
@end
