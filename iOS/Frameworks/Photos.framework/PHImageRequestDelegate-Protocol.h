//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHMediaRequestDelegate-Protocol.h>

@class NSDictionary, NSError, PDImageRequest, PHImageResult;

@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
- (void)imageRequest:(PDImageRequest *)arg1 didFinishLoadingImageResult:(PHImageResult *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (_Bool)imageRequestIsInitialRequestOfMultistageRequest:(PDImageRequest *)arg1;
- (void)imageRequest:(PDImageRequest *)arg1 isRequestingScheduledWorkBlock:(void (^)(PDImageRequest *))arg2;
- (void)imageRequest:(PDImageRequest *)arg1 didProcessHintsWithLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3;
- (void)imageRequest:(PDImageRequest *)arg1 isQueryingCacheAndDidWait:(_Bool *)arg2 didFindImage:(_Bool *)arg3 resultHandler:(void (^)(struct CGImage *, _Bool, NSError *))arg4;
@end
