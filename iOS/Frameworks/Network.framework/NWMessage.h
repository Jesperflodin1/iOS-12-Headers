//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data, OS_nw_content_context;

@interface NWMessage : NSObject
{
    NSObject<OS_dispatch_data> *_internalContent;
    NSObject<OS_nw_content_context> *_internalContext;
}

@property(retain, nonatomic) NSObject<OS_nw_content_context> *internalContext; // @synthesize internalContext=_internalContext;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *internalContent; // @synthesize internalContent=_internalContent;
- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 context:(id)arg2;

@end
