//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerRepeatCommand-Protocol.h>

@class NSArray, NSString;

@interface _MPCPlayerRepeatCommand : _MPCPlayerCommand <MPCPlayerRepeatCommand>
{
    _Bool _supportsChangeRepeat;
    _Bool _supportsAdvanceRepeat;
    long long _currentRepeatType;
    NSArray *_supportedRepeatTypes;
}

@property(nonatomic) _Bool supportsAdvanceRepeat; // @synthesize supportsAdvanceRepeat=_supportsAdvanceRepeat;
@property(nonatomic) _Bool supportsChangeRepeat; // @synthesize supportsChangeRepeat=_supportsChangeRepeat;
@property(retain, nonatomic) NSArray *supportedRepeatTypes; // @synthesize supportedRepeatTypes=_supportedRepeatTypes;
@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
- (void).cxx_destruct;
- (id)advance;
- (id)setRepeatType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
