//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class DisplayPaymentSheetOperation, ISURLBag, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DisplayPaymentSheetContainerOperation : ISOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    DisplayPaymentSheetOperation *_displayPaymentSheetOperation;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    ISURLBag *_urlBag;
}

- (void).cxx_destruct;
- (void)_postMetricsEventForError:(id)arg1;
- (void)_loadURLBag;
- (void)run;
- (void)dealloc;
- (id)initWithDisplayPaymentSheetOperation:(id)arg1;

@end

