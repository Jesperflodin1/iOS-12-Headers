//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientConnectionContext : NSObject
{
    struct os_unfair_lock_s _lock;
    struct __CFArray *_cleanupBlocks;
}

- (void)cleanup;
- (void)addCleanupBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
