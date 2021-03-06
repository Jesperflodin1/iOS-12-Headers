//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UAPasteboardItemProviding-Protocol.h"

@class NSString, NSUUID, PBItem;

@interface PBRemotePasteboardItemProvider : NSObject <UAPasteboardItemProviding>
{
    PBItem *_item;
    NSUUID *_uuid;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) PBItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

