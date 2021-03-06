/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionSizeProviding.h>

@class NSArray, NSString;

@interface _UICollectionSizeProvider : NSObject <_UICollectionSizeProviding> {

	NSArray* _sizes;
	long long _fixedSizeCount;
	CGSize _fixedSize;

}

@property (nonatomic,retain) NSArray * sizes;                       //@synthesize sizes=_sizes - In the implementation block
@property (assign,nonatomic) CGSize fixedSize;                      //@synthesize fixedSize=_fixedSize - In the implementation block
@property (assign,nonatomic) long long fixedSizeCount;              //@synthesize fixedSizeCount=_fixedSizeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)count;
-(id)initWithSizeProvider:(id)arg1 offset:(long long)arg2 ;
-(CGSize)sizeForIndex:(long long)arg1 ;
-(BOOL)indexIsValid:(long long)arg1 ;
-(BOOL)_hasFixedSizeCount;
-(CGSize)fixedSize;
-(long long)fixedSizeCount;
-(id)initWithFixedSize:(CGSize)arg1 count:(long long)arg2 ;
-(NSArray *)sizes;
-(id)initWithSizes:(id)arg1 ;
-(void)setSizes:(NSArray *)arg1 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)setFixedSizeCount:(long long)arg1 ;
@end

