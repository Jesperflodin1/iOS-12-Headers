//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CalendarMessageCell.h"

@class CalMessageStrings, EKCalendarEventInvitationNotification, EKCalendarEventInvitationNotificationAttendee, NSString;

@interface CalendarMessageAttendeeReplyCell : CalendarMessageCell
{
    EKCalendarEventInvitationNotificationAttendee *_proposedTimeAttendee;
    CalMessageStrings *_messageStrings;
    NSString *_dateString;
}

+ (long long)numberOfLinesForBodyLabels;
+ (long long)numberOfLinesForTitleLabels;
@property(retain) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain) CalMessageStrings *messageStrings; // @synthesize messageStrings=_messageStrings;
@property(retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee; // @synthesize proposedTimeAttendee=_proposedTimeAttendee;
- (void).cxx_destruct;
@property(retain, nonatomic) EKCalendarEventInvitationNotification *notification; // @dynamic notification;
- (id)actions;
- (id)blackBodyStrings;
- (id)bodyStrings;
- (void)updateAuthor;
- (id)titleStrings;

@end

