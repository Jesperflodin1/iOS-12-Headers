//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRNotificationPayloadInfo-Protocol.h"

@class NSDictionary, NSString;

@interface FRNotificationPayloadInfo : NSObject <FRNotificationPayloadInfo>
{
    NSDictionary *_newsUserInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *notificationArticleID;
@property(readonly, nonatomic) NSString *notificationSourceChannelID;
@property(readonly, nonatomic) NSString *notificationSenderChannelID;
@property(readonly, nonatomic) NSString *notificationID;
- (id)initWithNewsUserInfo:(id)arg1;
- (id)init;

@end
