//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_write_request-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_content_context;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request>
{
    NWConcrete_nw_write_request *next;
    CDUnknownBlockType completion;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    unsigned long long consumed_bytes;
    double relative_priority;
    unsigned int complete:1;
    unsigned int reported:1;
    unsigned int idempotent:1;
    unsigned int write_close:1;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
