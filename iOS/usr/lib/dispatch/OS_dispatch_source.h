//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <dispatch/OS_dispatch_object.h>

#import <dispatch/OS_dispatch_object-Protocol.h>
#import <dispatch/OS_dispatch_source-Protocol.h>
#import <dispatch/OS_dispatch_source_data_add-Protocol.h>
#import <dispatch/OS_dispatch_source_data_or-Protocol.h>
#import <dispatch/OS_dispatch_source_data_replace-Protocol.h>
#import <dispatch/OS_dispatch_source_interval-Protocol.h>
#import <dispatch/OS_dispatch_source_mach_recv-Protocol.h>
#import <dispatch/OS_dispatch_source_mach_send-Protocol.h>
#import <dispatch/OS_dispatch_source_memorypressure-Protocol.h>
#import <dispatch/OS_dispatch_source_memorystatus-Protocol.h>
#import <dispatch/OS_dispatch_source_nw_channel-Protocol.h>
#import <dispatch/OS_dispatch_source_proc-Protocol.h>
#import <dispatch/OS_dispatch_source_read-Protocol.h>
#import <dispatch/OS_dispatch_source_signal-Protocol.h>
#import <dispatch/OS_dispatch_source_sock-Protocol.h>
#import <dispatch/OS_dispatch_source_timer-Protocol.h>
#import <dispatch/OS_dispatch_source_vfs-Protocol.h>
#import <dispatch/OS_dispatch_source_vm-Protocol.h>
#import <dispatch/OS_dispatch_source_vnode-Protocol.h>
#import <dispatch/OS_dispatch_source_write-Protocol.h>

@class NSString;

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source_nw_channel, OS_dispatch_source_sock, OS_dispatch_source_memorystatus, OS_dispatch_source_vm, OS_dispatch_source_vfs, OS_dispatch_source_interval, OS_dispatch_source_write, OS_dispatch_source_vnode, OS_dispatch_source_timer, OS_dispatch_source_signal, OS_dispatch_source_read, OS_dispatch_source_proc, OS_dispatch_source_memorypressure, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_data_replace, OS_dispatch_source_data_or, OS_dispatch_source_data_add, OS_dispatch_source>
{
}

+ (void)load;
- (void)_xref_dispose;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
