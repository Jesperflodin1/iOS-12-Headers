//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NSSecureCoding;

@protocol _WKFocusedElementInfo <NSObject>
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic, getter=isUserInitiated) _Bool userInitiated;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, copy, nonatomic) NSString *placeholder;
@property(readonly, copy, nonatomic) NSString *value;
@property(readonly, nonatomic) long long type;
@end
