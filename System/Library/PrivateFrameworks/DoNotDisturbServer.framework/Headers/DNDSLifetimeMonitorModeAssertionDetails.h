//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDModeAssertion, DNDModeAssertionLifetime;

@interface DNDSLifetimeMonitorModeAssertionDetails : NSObject
{
    DNDModeAssertion *_modeAssertion;
    DNDModeAssertionLifetime *_effectiveLifetime;
}

@property(readonly, copy, nonatomic) DNDModeAssertionLifetime *effectiveLifetime; // @synthesize effectiveLifetime=_effectiveLifetime;
@property(readonly, copy, nonatomic) DNDModeAssertion *modeAssertion; // @synthesize modeAssertion=_modeAssertion;
- (void).cxx_destruct;
- (id)initWithModeAssertion:(id)arg1 effectiveLifetime:(id)arg2;

@end

