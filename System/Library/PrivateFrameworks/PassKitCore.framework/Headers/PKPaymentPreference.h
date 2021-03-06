//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PKPaymentPreference : NSObject
{
    NSMutableDictionary *_errors;
    _Bool _isReadOnly;
    _Bool _supportsDeletion;
    NSString *_title;
    NSString *_footer;
    NSArray *_preferences;
    unsigned long long _selectedIndex;
}

@property(retain, nonatomic) NSMutableDictionary *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) _Bool supportsDeletion; // @synthesize supportsDeletion=_supportsDeletion;
@property(nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clearAllErrors;
- (id)errorsForPreference:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(_Bool)arg4;

@end

