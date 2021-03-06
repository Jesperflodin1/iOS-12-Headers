//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TLSystemSound;

@interface TLAlertTone : NSObject
{
    unsigned int _actualSoundID;
    unsigned int _previewSoundID;
    TLSystemSound *_actualSound;
    TLSystemSound *_previewSound;
    NSURL *_soundFileURL;
}

@property(readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) TLSystemSound *previewSound;
@property(readonly, nonatomic) TLSystemSound *actualSound;
- (id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;

@end

