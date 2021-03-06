//
//  NSString+Utils.h
//  Community
//
//  Created by Weiyu Chen on 2015/2/6.
//  Copyright (c) 2015年 Weiyu Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface NSString (Utils)

// Check if string is "empty" (isEqualToString:@"")
- (BOOL) isEmpty;
- (BOOL) isNotEmpty;

// Check if string is an "mail" string
- (BOOL) isEmail;
- (BOOL) isNotEmail;

// Check if string is a "phone number" string
- (BOOL) isPhoneNumber;


- (BOOL) isPassword;
- (NSMutableArray *) getURL;
- (NSString *) getYoutubeVieoCode;
- (BOOL) isLegalYoutubeURL;
- (NSString *) getYoutubeVieoHqDefaultImage;
- (NSString *) getYoutubeVieoMqDefaultImage;
- (NSString *) getYoutubeVieoSdDefaultImage;
- (NSString *) getYoutubeVieoMaxreDefaultImage;
- (NSString *) getFacebookNameTag;
- (NSString *) stringToFormattedDate;
- (NSString *) stringNSTimeIntervalToFormattedDate;
- (CGSize) sizeOfStringWithSystemFontSize:(CGFloat) fontSize andMaxLength:(CGFloat) maxLength;
- (CGSize) sizeOfStringWithFont:(UIFont *) font andMaxLength:(CGFloat) maxLength;
- (CGSize) sizeOfStringInZeroInsetsTextViewWithFont:(UIFont *) font andMaxLength:(CGFloat) maxLength;
- (NSString *) trimmedString;
- (NSString *) truncatedString:(NSUInteger) numberOfCharacters;

+ (NSString *) numberToThousandSeparatorFormat:(NSInteger) number;
- (NSDate *) stringToNSDate;
- (CGFloat) heightOfTextViewWithSystemFontSize:(CGFloat) fontSize andMaxLength:(CGFloat) maxLength;
- (CGFloat) heightOfTextViewWithFont:(UIFont *) font andMaxLength:(CGFloat) maxLength;


@end
