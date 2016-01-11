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
/**
 *  搜尋國家名稱
 *
 *  @param keyword 輸入要搜尋的關鍵字
 *
 *  @return 回傳一陣列為有關鍵字的國家
 */
-(NSMutableArray *)searchCountryCodeWithKeyword:(NSString *)keyword;
/**
 *  搜尋國家代號
 *
 *  @param keyword 輸入要搜尋的國家代號
 *
 *  @return 回傳一陣列為有此關鍵字的國家
 */
-(NSMutableArray *)searchCountryIDWithKeyword:(NSString *)keyword;
@property(nonatomic, strong) NSMutableArray *resultArray;
@property(nonatomic, strong) NSDictionary *countryDictionary;
@end
