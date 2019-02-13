//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_endpoint_handler-Protocol.h>

@class NSString;
@protocol NWConcrete_nw_endpoint_mode_handler, OS_dispatch_queue, OS_nw_association, OS_nw_endpoint, OS_nw_object, OS_nw_parameters, OS_nw_path, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler>
{
    CDUnknownFunctionPointerType report_callback;
    NSObject<OS_nw_object> *callback_context;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_association> *association;
    NSObject<OS_nw_path> *current_path;
    NWConcrete_nw_endpoint_handler *parent_handler;
    struct nw_endpoint_handler_event_s event;
    NSObject<OS_xpc_object> *inactive_agent_uuids;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agent_uuids;
    struct os_unfair_lock_s lock;
    int mode;
    int state;
    NSObject<OS_dispatch_queue> *tls_client_queue;
    CDUnknownBlockType tls_prepare_block;
    CDUnknownBlockType tls_message_block;
    unsigned int top_id;
    int last_child_id;
    unsigned char id_chain[16];
    char id_str[75];
    NSObject<NWConcrete_nw_endpoint_mode_handler> *mode_handler;
    int privacy_level;
    unsigned int dry_run:1;
    unsigned int triggering_voluntary_agents:1;
    unsigned int reuse_association:1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 reportCallback:(CDUnknownFunctionPointerType)arg3 context:(id)arg4 parent:(id)arg5 identifier:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
