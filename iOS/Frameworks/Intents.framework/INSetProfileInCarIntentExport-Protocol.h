//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSNumber, NSString;

@protocol INSetProfileInCarIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INSpeakableString *carName;
@property(copy, nonatomic) NSNumber *defaultProfile;
@property(copy, nonatomic) NSString *profileName;
@property(copy, nonatomic) NSNumber *profileNumber;
- (id)init;
@end
