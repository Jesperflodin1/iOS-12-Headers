//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class OFUIWindowDraggingItem, OFUIWindowDraggingSession;

@protocol OFUIWindowDraggingDestination <NSObject>
- (unsigned long long)draggingDestinationEntered:(OFUIWindowDraggingSession *)arg1;

@optional
- (struct CGRect)draggingDestination:(OFUIWindowDraggingSession *)arg1 originalFrameForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingDestinationEnded:(OFUIWindowDraggingSession *)arg1 cancelled:(_Bool)arg2;
- (void)draggingDestinationWillEnd:(OFUIWindowDraggingSession *)arg1 cancelled:(_Bool)arg2;
- (void)concludeDragOperation:(OFUIWindowDraggingSession *)arg1;
- (_Bool)performDragOperation:(OFUIWindowDraggingSession *)arg1;
- (_Bool)prepareForDragOperation:(OFUIWindowDraggingSession *)arg1;
- (void)draggingDestinationExited:(OFUIWindowDraggingSession *)arg1;
- (unsigned long long)draggingDestinationUpdated:(OFUIWindowDraggingSession *)arg1;
@end
