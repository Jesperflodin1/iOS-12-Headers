//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject
{
    NSMutableDictionary *_navigationItems;
    NSMutableDictionary *_previousLeftBarButtonItems;
    NSMutableDictionary *_previousRightBarButtonItems;
}

+ (id)sharedManager;
@property(retain) NSMutableDictionary *previousRightBarButtonItems; // @synthesize previousRightBarButtonItems=_previousRightBarButtonItems;
@property(retain) NSMutableDictionary *previousLeftBarButtonItems; // @synthesize previousLeftBarButtonItems=_previousLeftBarButtonItems;
@property(retain) NSMutableDictionary *navigationItems; // @synthesize navigationItems=_navigationItems;
- (void).cxx_destruct;
- (void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;
- (void)stopSpinnerForIdentifier:(id)arg1;
- (void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;
- (id)init;

@end

