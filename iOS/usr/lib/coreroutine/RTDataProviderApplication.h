//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTDataProviderDuet.h>

#import <coreroutine/RTDataProviderEventProtocol-Protocol.h>

@class NSString;

@interface RTDataProviderApplication : RTDataProviderDuet <RTDataProviderEventProtocol>
{
}

- (id)supportedEventClasses;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventStreams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
