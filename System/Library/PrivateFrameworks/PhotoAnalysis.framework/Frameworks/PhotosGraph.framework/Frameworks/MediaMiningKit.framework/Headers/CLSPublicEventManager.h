/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject {

	CLSPublicEventCache* _cache;
	double _queryRadius;

}

@property (nonatomic,readonly) CLSPublicEventCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) double queryRadius;                         //@synthesize queryRadius=_queryRadius - In the implementation block
+(id)urlForEventsForCacheInvalidation;
-(double)queryRadius;
-(id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
-(void)saveEventsForCacheInvalidation:(id)arg1 ;
-(void)setQueryRadius:(double)arg1 ;
-(id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)init;
-(CLSPublicEventCache *)cache;
@end

