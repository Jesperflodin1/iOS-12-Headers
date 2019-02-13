//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSArray, NSDate, NSString, NSURL;

@interface NTKCalendarEntryModel : NTKTimelineEntryModel
{
    _Bool _displayAsTomorrow;
    _Bool _displayAsConflicting;
    _Bool _displayAsFirstInDay;
    _Bool _overlappingDates;
    NSString *_identifier;
    NSDate *_eventStartDate;
    NSDate *_eventEndDate;
    NSString *_primaryEventTitle;
    NSString *_primaryEventLocation;
    NSString *_secondaryEventTitle;
    NSString *_primaryEventOrganizerName;
    unsigned long long _overlappingEventCount;
    unsigned long long _eventsInDayCount;
    NSURL *_launchURL;
    NSArray *_eventColors;
}

+ (id)_entryForTemplateDescription:(id)arg1 family:(long long)arg2;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)signatureRectangular:(id)arg1;
+ (id)_signatureCornerImageProvider;
+ (id)signatureCorner:(id)arg1;
+ (id)_signatureCircularCalendarProvider:(id)arg1;
+ (id)signatureCircular:(id)arg1;
+ (id)signatureBezel:(id)arg1;
+ (id)extraLarge:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)largeUtility:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)_utilityCalendarImageProvider;
+ (id)_extraLargeConflictImageProvider;
+ (id)_extraLargeCalendarImageProvider;
+ (id)_modularSmallConflictImageProvider;
+ (id)_modularSmallCalendarImageProvider;
+ (id)smallUtility:(id)arg1;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 timeZone:(id)arg6 options:(unsigned long long)arg7;
+ (id)contentForSignatureRectangular:(id)arg1;
+ (id)contentForLargeModular:(id)arg1;
+ (id)largeModular:(id)arg1;
@property(retain, nonatomic) NSArray *eventColors; // @synthesize eventColors=_eventColors;
@property(retain, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) unsigned long long eventsInDayCount; // @synthesize eventsInDayCount=_eventsInDayCount;
@property(nonatomic) _Bool overlappingDates; // @synthesize overlappingDates=_overlappingDates;
@property(nonatomic) unsigned long long overlappingEventCount; // @synthesize overlappingEventCount=_overlappingEventCount;
@property(nonatomic) _Bool displayAsFirstInDay; // @synthesize displayAsFirstInDay=_displayAsFirstInDay;
@property(nonatomic) _Bool displayAsConflicting; // @synthesize displayAsConflicting=_displayAsConflicting;
@property(nonatomic) _Bool displayAsTomorrow; // @synthesize displayAsTomorrow=_displayAsTomorrow;
@property(retain, nonatomic) NSString *primaryEventOrganizerName; // @synthesize primaryEventOrganizerName=_primaryEventOrganizerName;
@property(retain, nonatomic) NSString *secondaryEventTitle; // @synthesize secondaryEventTitle=_secondaryEventTitle;
@property(retain, nonatomic) NSString *primaryEventLocation; // @synthesize primaryEventLocation=_primaryEventLocation;
@property(retain, nonatomic) NSString *primaryEventTitle; // @synthesize primaryEventTitle=_primaryEventTitle;
@property(retain, nonatomic) NSDate *eventEndDate; // @synthesize eventEndDate=_eventEndDate;
@property(retain, nonatomic) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;

@end
