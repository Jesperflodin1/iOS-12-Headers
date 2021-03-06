/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, NSString;

@interface PVDocumentCacheManager : NSObject <NSCacheDelegate> {

	NSCache* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeAllEffects;
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)generateKeyFromFilePathString:(id)arg1 ;
-(void)cacheOZXDocument:(void*)arg1 forKey:(id)arg2 timeElapsed:(double)arg3 memoryInfo:(unsigned long long)arg4 ;
-(void*)newOZXDocumentForKey:(id)arg1 ;
-(void*)getOZXDocumentForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setCountLimit:(unsigned long long)arg1 ;
@end

