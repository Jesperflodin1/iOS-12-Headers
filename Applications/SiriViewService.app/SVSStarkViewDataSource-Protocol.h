//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFAccount, NSString, SVSStarkView;

@protocol SVSStarkViewDataSource <NSObject>
- (long long)userAccountCountForStarkView:(SVSStarkView *)arg1;
- (AFAccount *)activeAccountForStarkView:(SVSStarkView *)arg1;
- (NSString *)assistantVersionForStarkView:(SVSStarkView *)arg1;
@end

