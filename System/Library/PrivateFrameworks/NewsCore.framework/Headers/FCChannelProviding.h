/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:37:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol FCChannelProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSArray * sectionIDs; 
@property (nonatomic,copy,readonly) NSString * defaultSectionID; 
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@required
-(NSArray *)sectionIDs;
-(NSString *)defaultSectionID;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(BOOL)supportsNotifications;
-(BOOL)isWhitelisted;

@end

