//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarSearchTableViewCellDataSource-Protocol.h"
#import "RAPAutocompleteSearchResult-Protocol.h"
#import "RecentsItem-Protocol.h"

@class AddressBookAddress, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface DirectionsWorkHistoryItem : NSObject <CarSearchTableViewCellDataSource, RAPAutocompleteSearchResult, RecentsItem>
{
    SearchResult *_currentLocation;
}

@property(retain, nonatomic) SearchResult *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (double)timestamp;
@property(readonly, nonatomic) AddressBookAddress *workAddress;
- (id)init;
- (void)configureModel:(id)arg1;
- (id)entryWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
