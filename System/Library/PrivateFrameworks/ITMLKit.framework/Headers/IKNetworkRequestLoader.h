/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IKNetworkRequestLoader <NSObject>
@property (nonatomic,copy) NSString * parentIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(id)arg1;
-(id)recordWithForResource:(long long)arg1 withInitiator:(long long)arg2;
-(NSString *)identifier;

@end

