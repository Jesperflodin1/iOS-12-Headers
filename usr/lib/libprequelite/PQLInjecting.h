/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol PQLInjecting <NSObject>
@property (nonatomic,readonly) NSData * sql; 
@optional
-(id)bindValuesToKeepAlive;

@required
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2;

@end

