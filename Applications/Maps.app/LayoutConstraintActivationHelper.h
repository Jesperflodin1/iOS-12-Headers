//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LayoutConstraintActivationHelper : NSObject
{
    NSMutableArray *_pendingConstraintsToActivate;
    NSMutableArray *_pendingConstraintsToDeactivate;
}

@property(retain, nonatomic) NSMutableArray *pendingConstraintsToDeactivate; // @synthesize pendingConstraintsToDeactivate=_pendingConstraintsToDeactivate;
@property(retain, nonatomic) NSMutableArray *pendingConstraintsToActivate; // @synthesize pendingConstraintsToActivate=_pendingConstraintsToActivate;
- (void).cxx_destruct;
- (void)commitPendingConstraints;
- (void)clearPendingConstraints;
- (id)pendingConstraintsToActivate:(_Bool)arg1;
- (void)scheduleConstraints:(id)arg1 activate:(_Bool)arg2;
- (void)scheduleConstraint:(id)arg1 activate:(_Bool)arg2;
- (id)init;

@end

