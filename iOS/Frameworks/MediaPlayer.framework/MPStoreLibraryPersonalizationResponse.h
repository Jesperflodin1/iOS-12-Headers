//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

#import <MediaPlayer/MPModelResponseDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPSectionedCollection, NSString;

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>
{
    MPSectionedCollection *_representedObjectResults;
    MPModelResponse *_libraryResponse;
}

@property(retain, nonatomic) MPModelResponse *libraryResponse; // @synthesize libraryResponse=_libraryResponse;
@property(retain, nonatomic) MPSectionedCollection *representedObjectResults; // @synthesize representedObjectResults=_representedObjectResults;
- (void).cxx_destruct;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_libraryResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
