//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingScroll : OKActionBinding
{
    unsigned long long _triggerLimit;
    unsigned long long _probability;
    struct CGPoint _offset;
    _Bool _continuous;
}

+ (id)supportedSettings;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (_Bool)respondsToAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end
